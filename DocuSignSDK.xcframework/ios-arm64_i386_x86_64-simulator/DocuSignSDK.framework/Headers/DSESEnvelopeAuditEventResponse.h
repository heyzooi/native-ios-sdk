#import <Foundation/Foundation.h>
#import <DocuSignSDK/DSESObject.h>

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import <DocuSignSDK/DSESEnvelopeAuditEvent.h>


@protocol DSESEnvelopeAuditEventResponse
@end

@interface DSESEnvelopeAuditEventResponse : DSESObject

/* Reserved: TBD [optional]
 */
@property(nonatomic) NSArray<DSESEnvelopeAuditEvent>* auditEvents;

@end
