//
//  JSONModel.h
//  JSONModel
//

#import <Foundation/Foundation.h>

#import <DocuSignSDK/DSM_JSONModel.h>
#import <DocuSignSDK/DSM_JSONValueTransformer.h>
#import <DocuSignSDK/DSM_JSONKeyMapper.h>
#import <DocuSignSDK/DSM_JSONModelError.h>

/////////////////////////////////////////////////////////////////////////////////////////////
#if TARGET_IPHONE_SIMULATOR
#define DSM_JMLog( s, ... ) NSLog( @"[%@:%d] %@", [[NSString stringWithUTF8String:__FILE__] \
lastPathComponent], __LINE__, [NSString stringWithFormat:(s), ##__VA_ARGS__] )
#else
#define DSM_JMLog( s, ... )
#endif
/////////////////////////////////////////////////////////////////////////////////////////////

DEPRECATED_ATTRIBUTE
@protocol DSM_ConvertOnDemand
@end

DEPRECATED_ATTRIBUTE
@protocol DSM_Index
@end

#pragma mark - Property Protocols
/**
 * Protocol for defining properties in a JSON Model class that should not be considered at all
 * neither while importing nor when exporting JSON.
 *
 * @property (strong, nonatomic) NSString&lt;Ignore&gt; *propertyName;
 *
 */
@protocol DSM_Ignore
@end

/**
 * Protocol for defining optional properties in a JSON Model class. Use like below to define
 * model properties that are not required to have values in the JSON input:
 *
 * @property (strong, nonatomic) NSString&lt;Optional&gt; *propertyName;
 *
 */
@protocol DSM_Optional
@end

/**
 * Make all objects compatible to avoid compiler warnings
 */
@interface NSObject (DSM_JSONModelPropertyCompatibility) <DSM_Optional, DSM_Ignore>
@end

/////////////////////////////////////////////////////////////////////////////////////////////
#pragma mark - JSONModel protocol
/**
 * A protocol describing an abstract JSONModel class
 * JSONModel conforms to this protocol, so it can use itself abstractly
 */
@protocol DSM_AbstractJSONModelProtocol <NSCopying, NSCoding>

@required
/**
 * All JSONModel classes should implement initWithDictionary:
 *
 * For most classes the default initWithDictionary: inherited from JSONModel itself
 * should suffice, but developers have the option to also overwrite it if needed.
 *
 * @param dict a dictionary holding JSON objects, to be imported in the model.
 * @param err an error or NULL
 */
- (instancetype)initWithDictionary:(NSDictionary *)dict error:(NSError **)err;


/**
 * All JSONModel classes should implement initWithData:error:
 *
 * For most classes the default initWithData: inherited from JSONModel itself
 * should suffice, but developers have the option to also overwrite it if needed.
 *
 * @param data representing a JSON response (usually fetched from web), to be imported in the model.
 * @param error an error or NULL
 */
- (instancetype)initWithData:(NSData *)data error:(NSError **)error;

/**
 * All JSONModel classes should be able to export themselves as a dictionary of
 * JSON compliant objects.
 *
 * For most classes the inherited from JSONModel default toDictionary implementation
 * should suffice.
 *
 * @return NSDictionary dictionary of JSON compliant objects
 * @exception JSONModelTypeNotAllowedException thrown when one of your model's custom class properties
 * does not have matching transformer method in an JSONValueTransformer.
 */
- (NSDictionary *)toDictionary;

/**
 * Export a model class to a dictionary, including only given properties
 *
 * @param propertyNames the properties to export; if nil, all properties exported
 * @return NSDictionary dictionary of JSON compliant objects
 * @exception JSONModelTypeNotAllowedException thrown when one of your model's custom class properties
 * does not have matching transformer method in an JSONValueTransformer.
 */
- (NSDictionary *)toDictionaryWithKeys:(NSArray *)propertyNames;
@end

/////////////////////////////////////////////////////////////////////////////////////////////
#pragma mark - JSONModel interface
/**
 * The JSONModel is an abstract model class, you should not instantiate it directly,
 * as it does not have any properties, and therefore cannot serve as a data model.
 * Instead you should subclass it, and define the properties you want your data model
 * to have as properties of your own class.
 */
@interface DSM_JSONModel : NSObject <DSM_AbstractJSONModelProtocol, NSSecureCoding>

// deprecated
+ (NSMutableArray *)arrayOfModelsFromDictionaries:(NSArray *)array DEPRECATED_MSG_ATTRIBUTE("use arrayOfModelsFromDictionaries:error:");
+ (void)setGlobalKeyMapper:(DSM_JSONKeyMapper *)globalKeyMapper DEPRECATED_MSG_ATTRIBUTE("override +keyMapper in a base model class instead");
+ (NSString *)protocolForArrayProperty:(NSString *)propertyName DEPRECATED_MSG_ATTRIBUTE("use classForCollectionProperty:");
- (void)mergeFromDictionary:(NSDictionary *)dict useKeyMapping:(BOOL)useKeyMapping DEPRECATED_MSG_ATTRIBUTE("use mergeFromDictionary:useKeyMapping:error:");
- (NSString *)indexPropertyName DEPRECATED_ATTRIBUTE;
- (NSComparisonResult)compare:(id)object DEPRECATED_ATTRIBUTE;

/** @name Creating and initializing models */

/**
 * Create a new model instance and initialize it with the JSON from a text parameter. The method assumes UTF8 encoded input text.
 * @param string JSON text data
 * @param err an initialization error or nil
 * @exception JSONModelTypeNotAllowedException thrown when unsupported type is found in the incoming JSON,
 * or a property type in your model is not supported by JSONValueTransformer and its categories
 * @see initWithString:usingEncoding:error: for use of custom text encodings
 */
- (instancetype)initWithString:(NSString *)string error:(DSM_JSONModelError **)err;

/**
 * Create a new model instance and initialize it with the JSON from a text parameter using the given encoding.
 * @param string JSON text data
 * @param encoding the text encoding to use when parsing the string (see NSStringEncoding)
 * @param err an initialization error or nil
 * @exception JSONModelTypeNotAllowedException thrown when unsupported type is found in the incoming JSON,
 * or a property type in your model is not supported by JSONValueTransformer and its categories
 */
- (instancetype)initWithString:(NSString *)string usingEncoding:(NSStringEncoding)encoding error:(DSM_JSONModelError **)err;

/** @name Exporting model contents */

/**
 * Export the whole object to a JSON data text string
 * @return JSON text describing the data model
 */
- (NSString *)toJSONString;

/**
 * Export the whole object to a JSON data text string
 * @return JSON text data describing the data model
 */
- (NSData *)toJSONData;

/**
 * Export the specified properties of the object to a JSON data text string
 * @param propertyNames the properties to export; if nil, all properties exported
 * @return JSON text describing the data model
 */
- (NSString *)toJSONStringWithKeys:(NSArray *)propertyNames;

/**
 * Export the specified properties of the object to a JSON data text string
 * @param propertyNames the properties to export; if nil, all properties exported
 * @return JSON text data describing the data model
 */
- (NSData *)toJSONDataWithKeys:(NSArray *)propertyNames;

/** @name Batch methods */

/**
 * If you have a list of dictionaries in a JSON feed, you can use this method to create an NSArray
 * of model objects. Handy when importing JSON data lists.
 * This method will loop over the input list and initialize a data model for every dictionary in the list.
 *
 * @param array list of dictionaries to be imported as models
 * @return list of initialized data model objects
 * @exception JSONModelTypeNotAllowedException thrown when unsupported type is found in the incoming JSON,
 * or a property type in your model is not supported by JSONValueTransformer and its categories
 * @exception JSONModelInvalidDataException thrown when the input data does not include all required keys
 * @see arrayOfDictionariesFromModels:
 */
+ (NSMutableArray *)arrayOfModelsFromDictionaries:(NSArray *)array error:(NSError **)err;
+ (NSMutableArray *)arrayOfModelsFromData:(NSData *)data error:(NSError **)err;
+ (NSMutableArray *)arrayOfModelsFromString:(NSString *)string error:(NSError **)err;
+ (NSMutableDictionary *)dictionaryOfModelsFromDictionary:(NSDictionary *)dictionary error:(NSError **)err;
+ (NSMutableDictionary *)dictionaryOfModelsFromData:(NSData *)data error:(NSError **)err;
+ (NSMutableDictionary *)dictionaryOfModelsFromString:(NSString *)string error:(NSError **)err;

/**
 * If you have an NSArray of data model objects, this method takes it in and outputs a list of the
 * matching dictionaries. This method does the opposite of arrayOfObjectsFromDictionaries:
 * @param array list of JSONModel objects
 * @return a list of NSDictionary objects
 * @exception JSONModelTypeNotAllowedException thrown when unsupported type is found in the incoming JSON,
 * or a property type in your model is not supported by JSONValueTransformer and its categories
 * @see arrayOfModelsFromDictionaries:
 */
+ (NSMutableArray *)arrayOfDictionariesFromModels:(NSArray *)array;
+ (NSMutableDictionary *)dictionaryOfDictionariesFromModels:(NSDictionary *)dictionary;

/** @name Validation */

/**
 * Overwrite the validate method in your own models if you need to perform some custom validation over the model data.
 * This method gets called at the very end of the JSONModel initializer, thus the model is in the state that you would
 * get it back when initialized. Check the values of any property that needs to be validated and if any invalid values
 * are encountered return NO and set the error parameter to an NSError object. If the model is valid return YES.
 *
 * NB: Only setting the error parameter is not enough to fail the validation, you also need to return a NO value.
 *
 * @param error a pointer to an NSError object, to pass back an error if needed
 * @return a BOOL result, showing whether the model data validates or not. You can use the convenience method
 * [JSONModelError errorModelIsInvalid] to set the NSError param if the data fails your custom validation
 */
- (BOOL)validate:(NSError **)error;

/** @name Key mapping */
/**
 * Overwrite in your models if your property names don't match your JSON key names.
 * Lookup JSONKeyMapper docs for more details.
 */
+ (DSM_JSONKeyMapper *)keyMapper;

/**
 * Indicates whether the property with the given name is Optional.
 * To have a model with all of its properties being Optional just return YES.
 * This method returns by default NO, since the default behaviour is to have all properties required.
 * @param propertyName the name of the property
 * @return a BOOL result indicating whether the property is optional
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName;

/**
 * Indicates whether the property with the given name is Ignored.
 * To have a model with all of its properties being Ignored just return YES.
 * This method returns by default NO, since the default behaviour is to have all properties required.
 * @param propertyName the name of the property
 * @return a BOOL result indicating whether the property is ignored
 */
+ (BOOL)propertyIsIgnored:(NSString *)propertyName;

/**
 * Indicates the class used for the elements of a collection property.
 * Rather than using:
 *     @property (strong) NSArray <MyType> *things;
 * You can implement classForCollectionProperty: and keep your property
 * defined like:
 *     @property (strong) NSArray *things;
 * @param propertyName the name of the property
 * @return Class the class used to deserialize the elements of the collection
 */
+ (Class)classForCollectionProperty:(NSString *)propertyName;

/**
 * Merges values from the given dictionary into the model instance.
 * @param dict dictionary with values
 * @param useKeyMapping if YES the method will use the model's key mapper and the global key mapper, if NO
 * it'll just try to match the dictionary keys to the model's properties
 */
- (BOOL)mergeFromDictionary:(NSDictionary *)dict useKeyMapping:(BOOL)useKeyMapping error:(NSError **)error;

@end
