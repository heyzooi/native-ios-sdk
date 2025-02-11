#import <Foundation/Foundation.h>
#import <DocuSignSDK/DSESObject.h>

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol DSESFilter
@end

@interface DSESFilter : DSESObject

/* Access token information. [optional]
 */
@property(nonatomic) NSString* actionRequired;
/*  [optional]
 */
@property(nonatomic) NSString* expires;
/*  [optional]
 */
@property(nonatomic) NSString* isTemplate;
/* Indicates the envelope status. Valid values are:\n\n* sent - The envelope is sent to the recipients. \n* created - The envelope is saved as a draft and can be modified and sent later. [optional]
 */
@property(nonatomic) NSString* status;
/*  [optional]
 */
@property(nonatomic) NSString* fromDateTime;
/* Must be set to \"bearer\". [optional]
 */
@property(nonatomic) NSString* toDateTime;
/*  [optional]
 */
@property(nonatomic) NSString* searchTarget;
/*  [optional]
 */
@property(nonatomic) NSString* searchText;
/*  [optional]
 */
@property(nonatomic) NSString* folderIds;
/*  [optional]
 */
@property(nonatomic) NSString* orderBy;
/*  [optional]
 */
@property(nonatomic) NSString* order;

@end
