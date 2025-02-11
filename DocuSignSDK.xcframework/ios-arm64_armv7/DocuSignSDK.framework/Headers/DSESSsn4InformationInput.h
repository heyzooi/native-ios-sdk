#import <Foundation/Foundation.h>
#import <DocuSignSDK/DSESObject.h>

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol DSESSsn4InformationInput
@end

@interface DSESSsn4InformationInput : DSESObject

/* The last four digits of the recipient's Social Security Number (SSN). [optional]
 */
@property(nonatomic) NSString* ssn4;
/* Specifies the display level for the recipient. \nValid values are: \n\n* ReadOnly\n* Editable\n* DoNotDisplay [optional]
 */
@property(nonatomic) NSString* displayLevelCode;
/* When set to **true**, the information needs to be returned in the response. [optional]
 */
@property(nonatomic) NSString* receiveInResponse;

@end
