#import <Foundation/Foundation.h>
#import <DocuSignSDK/DSESObject.h>

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import <DocuSignSDK/DSESGroup.h>


@protocol DSESGroupInformation
@end

@interface DSESGroupInformation : DSESObject

/* A collection group objects containing information about the groups returned. [optional]
 */
@property(nonatomic) NSArray<DSESGroup>* groups;
/* The number of results returned in this response. [optional]
 */
@property(nonatomic) NSString* resultSetSize;
/* The total number of items available in the result set. This will always be greater than or equal to the value of the `resultSetSize` property. [optional]
 */
@property(nonatomic) NSString* totalSetSize;
/* Starting position of the current result set. [optional]
 */
@property(nonatomic) NSString* startPosition;
/* The last position in the result set. [optional]
 */
@property(nonatomic) NSString* endPosition;
/* The URI to the next chunk of records based on the search request. If the endPosition is the entire results of the search, this is null. [optional]
 */
@property(nonatomic) NSString* nextUri;
/* The postal code for the billing address. [optional]
 */
@property(nonatomic) NSString* previousUri;

@end
