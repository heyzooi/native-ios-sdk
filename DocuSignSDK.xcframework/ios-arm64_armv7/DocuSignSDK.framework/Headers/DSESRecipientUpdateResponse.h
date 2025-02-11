#import <Foundation/Foundation.h>
#import <DocuSignSDK/DSESObject.h>

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import <DocuSignSDK/DSESErrorDetails.h>
#import <DocuSignSDK/DSESTabs.h>


@protocol DSESRecipientUpdateResponse
@end

@interface DSESRecipientUpdateResponse : DSESObject

/* Unique for the recipient. It is used by the tab element to indicate which recipient is to sign the Document. [optional]
 */
@property(nonatomic) NSString* recipientId;

@property(nonatomic) DSESTabs* tabs;

@property(nonatomic) DSESErrorDetails* errorDetails;

@end
