#import <Foundation/Foundation.h>
#import <DocuSignSDK/DSESObject.h>

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol DSESRecipientPhoneAuthentication
@end

@interface DSESRecipientPhoneAuthentication : DSESObject

/* Boolean. When set to **true**, the recipient can supply a phone number their choice. [optional]
 */
@property(nonatomic) NSString* recipMayProvideNumber;
/* Reserved. [optional]
 */
@property(nonatomic) NSString* validateRecipProvidedNumber;
/* Reserved. [optional]
 */
@property(nonatomic) NSString* recordVoicePrint;
/* An Array containing a list of phone numbers the recipient may use for SMS text authentication. [optional]
 */
@property(nonatomic) NSArray* /* NSString */ senderProvidedNumbers;

@end
