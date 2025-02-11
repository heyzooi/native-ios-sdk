#import <Foundation/Foundation.h>
#import <DocuSignSDK/DSESObject.h>

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol DSESExpirations
@end

@interface DSESExpirations : DSESObject

/* When set to **true**, the envelope expires (is no longer available for signing) in the set number of days. If false, the account default setting is used. If the account does not have an expiration setting, the DocuSign default value of 120 days is used. [optional]
 */
@property(nonatomic) NSString* expireEnabled;
/* An integer that sets the number of days the envelope is active. [optional]
 */
@property(nonatomic) NSString* expireAfter;
/* An integer that sets the number of days before envelope expiration that an expiration warning email is sent to the recipient. If set to 0 (zero), no warning email is sent. [optional]
 */
@property(nonatomic) NSString* expireWarn;

@end
