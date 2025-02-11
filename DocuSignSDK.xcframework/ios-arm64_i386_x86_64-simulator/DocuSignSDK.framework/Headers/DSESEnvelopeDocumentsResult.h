#import <Foundation/Foundation.h>
#import <DocuSignSDK/DSESObject.h>

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import <DocuSignSDK/DSESEnvelopeDocument.h>


@protocol DSESEnvelopeDocumentsResult
@end

@interface DSESEnvelopeDocumentsResult : DSESObject

/* The envelope ID of the envelope status that failed to post. [optional]
 */
@property(nonatomic) NSString* envelopeId;
/*  [optional]
 */
@property(nonatomic) NSArray<DSESEnvelopeDocument>* envelopeDocuments;

@end
