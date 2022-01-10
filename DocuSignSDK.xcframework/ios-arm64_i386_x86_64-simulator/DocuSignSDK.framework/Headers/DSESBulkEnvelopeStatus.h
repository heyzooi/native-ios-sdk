#import <Foundation/Foundation.h>
#import <DocuSignSDK/DSESObject.h>

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import <DocuSignSDK/DSESBulkEnvelope.h>


@protocol DSESBulkEnvelopeStatus
@end

@interface DSESBulkEnvelopeStatus : DSESObject

/*  [optional]
 */
@property(nonatomic) NSString* batchSize;
/*  [optional]
 */
@property(nonatomic) NSString* batchId;
/* Reserved: TBD [optional]
 */
@property(nonatomic) NSString* bulkEnvelopesBatchUri;
/* Entries with a failed status. [optional]
 */
@property(nonatomic) NSString* failed;
/* Retrieves entries with a status of queued. [optional]
 */
@property(nonatomic) NSString* queued;
/*  [optional]
 */
@property(nonatomic) NSString* sent;
/*  [optional]
 */
@property(nonatomic) NSString* submittedDate;
/* The number of results returned in this response. [optional]
 */
@property(nonatomic) NSString* resultSetSize;
/* Starting position of the current result set. [optional]
 */
@property(nonatomic) NSString* startPosition;
/* The last position in the result set. [optional]
 */
@property(nonatomic) NSString* endPosition;
/* The total number of items available in the result set. This will always be greater than or equal to the value of the `resultSetSize` property. [optional]
 */
@property(nonatomic) NSString* totalSetSize;
/* The URI to the next chunk of records based on the search request. If the endPosition is the entire results of the search, this is null. [optional]
 */
@property(nonatomic) NSString* nextUri;
/* The postal code for the billing address. [optional]
 */
@property(nonatomic) NSString* previousUri;
/* Reserved: TBD [optional]
 */
@property(nonatomic) NSArray<DSESBulkEnvelope>* bulkEnvelopes;

@end
