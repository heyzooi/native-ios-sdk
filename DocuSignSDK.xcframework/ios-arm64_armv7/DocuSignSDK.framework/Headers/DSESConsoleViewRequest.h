#import <Foundation/Foundation.h>
#import <DocuSignSDK/DSESObject.h>

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol DSESConsoleViewRequest
@end

@interface DSESConsoleViewRequest : DSESObject

/* The envelope ID of the envelope status that failed to post. [optional]
 */
@property(nonatomic) NSString* envelopeId;
/* The URL to be redirected to after the console view session has ended. [optional]
 */
@property(nonatomic) NSString* returnUrl;

@end
