#import <Foundation/Foundation.h>
#import <DocuSignSDK/DSESObject.h>

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import <DocuSignSDK/DSESErrorDetails.h>


@protocol DSESUserInfo
@end

@interface DSESUserInfo : DSESObject

/*  [optional]
 */
@property(nonatomic) NSString* userName;
/*  [optional]
 */
@property(nonatomic) NSString* email;
/*  [optional]
 */
@property(nonatomic) NSString* userId;
/*  [optional]
 */
@property(nonatomic) NSString* userType;
/*  [optional]
 */
@property(nonatomic) NSString* userStatus;
/*  [optional]
 */
@property(nonatomic) NSString* uri;

@property(nonatomic) DSESErrorDetails* errorDetails;

@end
