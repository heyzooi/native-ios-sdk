#import <Foundation/Foundation.h>
#import <DocuSignSDK/DSESObject.h>

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import <DocuSignSDK/DSESEventResult.h>


@protocol DSESAuthenticationStatus
@end

@interface DSESAuthenticationStatus : DSESObject


@property(nonatomic) DSESEventResult* accessCodeResult;

@property(nonatomic) DSESEventResult* phoneAuthResult;

@property(nonatomic) DSESEventResult* idLookupResult;

@property(nonatomic) DSESEventResult* idQuestionsResult;

@property(nonatomic) DSESEventResult* ageVerifyResult;

@property(nonatomic) DSESEventResult* sTANPinResult;

@property(nonatomic) DSESEventResult* ofacResult;

@property(nonatomic) DSESEventResult* liveIDResult;

@property(nonatomic) DSESEventResult* facebookResult;

@property(nonatomic) DSESEventResult* googleResult;

@property(nonatomic) DSESEventResult* linkedinResult;

@property(nonatomic) DSESEventResult* salesforceResult;

@property(nonatomic) DSESEventResult* twitterResult;

@property(nonatomic) DSESEventResult* openIDResult;

@property(nonatomic) DSESEventResult* anySocialIDResult;

@property(nonatomic) DSESEventResult* yahooResult;

@property(nonatomic) DSESEventResult* smsAuthResult;

@end
