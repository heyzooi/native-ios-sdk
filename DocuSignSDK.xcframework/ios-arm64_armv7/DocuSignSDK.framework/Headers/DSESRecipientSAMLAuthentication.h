#import <Foundation/Foundation.h>
#import <DocuSignSDK/DSESObject.h>

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import <DocuSignSDK/DSESSamlAssertionAttribute.h>


@protocol DSESRecipientSAMLAuthentication
@end

@interface DSESRecipientSAMLAuthentication : DSESObject

/*  [optional]
 */
@property(nonatomic) NSArray<DSESSamlAssertionAttribute>* samlAssertionAttributes;

@end
