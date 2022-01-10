#import <Foundation/Foundation.h>
#import <DocuSignSDK/DSESObject.h>

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import <DocuSignSDK/DSESRecipientPhoneAuthentication.h>
#import <DocuSignSDK/DSESIdCheckInformationInput.h>
#import <DocuSignSDK/DSESRecipientEmailNotification.h>
#import <DocuSignSDK/DSESSocialAuthentication.h>
#import <DocuSignSDK/DSESRecipientSAMLAuthentication.h>
#import <DocuSignSDK/DSESErrorDetails.h>
#import <DocuSignSDK/DSESUserInfo.h>
#import <DocuSignSDK/DSESAttachment.h>
#import <DocuSignSDK/DSESAuthenticationStatus.h>
#import <DocuSignSDK/DSESRecipientSMSAuthentication.h>


@protocol DSESCarbonCopy
@end

@interface DSESCarbonCopy : DSESObject

/* Specifies the documents that are not visible to this recipient. Document Visibility must be enabled for the account and the `enforceSignerVisibility` property must be set to **true** for the envelope to use this.\n\nWhen enforce signer visibility is enabled, documents with tabs can only be viewed by signers that have a tab on that document. Recipients that have an administrative role (Agent, Editor, or Intermediaries) or informational role (Certified Deliveries or Carbon Copies) can always see all the documents in an envelope, unless they are specifically excluded using this setting when an envelope is sent. Documents that do not have tabs are always visible to all recipients, unless they are specifically excluded using this setting when an envelope is sent. [optional]
 */
@property(nonatomic) NSArray* /* NSString */ excludedDocuments;
/* legal name of the recipient.\n\nMaximum Length: 100 characters. [optional]
 */
@property(nonatomic) NSString* name;
/* Email id of the recipient. Notification of the document to sign is sent to this email id. \n\nMaximum length: 100 characters. [optional]
 */
@property(nonatomic) NSString* email;
/*  [optional]
 */
@property(nonatomic) NSString* emailRecipientPostSigningURL;
/* When set to **true** and the feature is enabled in the sender's account, the signing recipient is required to draw signatures and initials at each signature/initial tab ( instead of adopting a signature/initial style or only drawing a signature/initial once). [optional]
 */
@property(nonatomic) NSString* signingGroupId;
/* The display name for the signing group. \n\nMaximum Length: 100 characters. [optional]
 */
@property(nonatomic) NSString* signingGroupName;
/* A complex type that contains information about users in the signing group. [optional]
 */
@property(nonatomic) NSArray<DSESUserInfo>* signingGroupUsers;
/* Unique for the recipient. It is used by the tab element to indicate which recipient is to sign the Document. [optional]
 */
@property(nonatomic) NSString* recipientId;
/*  [optional]
 */
@property(nonatomic) NSString* recipientIdGuid;
/* If a value is provided, the recipient must enter the value as the access code to view and sign the envelope. \n\nMaximum Length: 50 characters and must conform to account’s access code format setting.\n\nIf blank, but the signer `accessCode` property is set in the envelope, then that value is used.\n\nIf blank and the signer `accessCode` property is not set, then access code is not required. [optional]
 */
@property(nonatomic) NSString* accessCode;
/* This Optional attribute indicates that the access code will be added to the email sent to the recipient; this nullifies the Security measure of Access Code on the recipient. [optional]
 */
@property(nonatomic) NSString* addAccessCodeToEmail;
/* When set to **true**, the recipient is required to use the specified ID check method (including Phone and SMS authentication) to validate their identity. [optional]
 */
@property(nonatomic) NSString* requireIdLookup;
/* Specifies authentication check by name. The names used here must be the same as the authentication type names used by the account (these name can also be found in the web console sending interface in the Identify list for a recipient,) This overrides any default authentication setting.\n\n*Example*: Your account has ID Check and SMS Authentication available and in the web console Identify list these appear as 'ID Check $' and 'SMS Auth $'. To use ID check in an envelope, the idCheckConfigurationName should be 'ID Check '. If you wanted to use SMS, it would be 'SMS Auth $' and you would need to add you would need to add phone number information to the `smsAuthentication` node. [optional]
 */
@property(nonatomic) NSString* idCheckConfigurationName;
/* Lists the social ID type that can be used for recipient authentication. [optional]
 */
@property(nonatomic) NSArray<DSESSocialAuthentication>* socialAuthentications;

@property(nonatomic) DSESRecipientPhoneAuthentication* phoneAuthentication;

@property(nonatomic) DSESRecipientSAMLAuthentication* samlAuthentication;

@property(nonatomic) DSESRecipientSMSAuthentication* smsAuthentication;
/*  [optional]
 */
@property(nonatomic) NSString* userId;
/* Specifies whether the recipient is embedded or remote. \n\nIf the `clientUserId` property is not null then the recipient is embedded. Note that if the `ClientUserId` property is set and either `SignerMustHaveAccount` or `SignerMustLoginToSign` property of the account settings is set to  **true**, an error is generated on sending.ng. \n\nMaximum length: 100 characters. [optional]
 */
@property(nonatomic) NSString* clientUserId;
/* Specifies a sender provided valid URL string for redirecting an embedded recipient. When using this option, the embedded recipient still receives an email from DocuSign, just as a remote recipient would. When the document link in the email is clicked the recipient is redirected, through DocuSign, to the supplied URL to complete their actions. When routing to the URL, the sender’s system (the server responding to the URL) must request a recipient token to launch a signing session. \n\nIf set to `SIGN_AT_DOCUSIGN`, the recipient is directed to an embedded signing or viewing process directly at DocuSign. The signing or viewing action is initiated by the DocuSign system and the transaction activity and Certificate of Completion records will reflect this. In all other ways the process is identical to an embedded signing or viewing operation that is launched by any partner.\n\nIt is important to remember that in a typical embedded workflow the authentication of an embedded recipient is the responsibility of the sending application, DocuSign expects that senders will follow their own process for establishing the recipient’s identity. In this workflow the recipient goes through the sending application before the embedded signing or viewing process in initiated. However, when the sending application sets `EmbeddedRecipientStartURL=SIGN_AT_DOCUSIGN`, the recipient goes directly to the embedded signing or viewing process bypassing the sending application and any authentication steps the sending application would use. In this case, DocuSign recommends that you use one of the normal DocuSign authentication features (Access Code, Phone Authentication, SMS Authentication, etc.) to verify the identity of the recipient.\n\nIf the `clientUserId` property is NOT set, and the `embeddedRecipientStartURL` is set, DocuSign will ignore the redirect URL and launch the standard signing process for the email recipient. Information can be appended to the embedded recipient start URL using merge fields. The available merge fields items are: envelopeId, recipientId, recipientName, recipientEmail, and customFields. The `customFields` property must be set fort the recipient or envelope. The merge fields are enclosed in double brackets. \n\n*Example*: \n\n`http://senderHost/[[mergeField1]]/ beginSigningSession? [[mergeField2]]&[[mergeField3]]` [optional]
 */
@property(nonatomic) NSString* embeddedRecipientStartURL;
/* An optional array of strings that allows the sender to provide custom data about the recipient. This information is returned in the envelope status but otherwise not used by DocuSign. Each customField string can be a maximum of 100 characters. [optional]
 */
@property(nonatomic) NSArray* /* NSString */ customFields;
/* Specifies the routing order of the recipient in the envelope. [optional]
 */
@property(nonatomic) NSString* routingOrder;

@property(nonatomic) DSESIdCheckInformationInput* idCheckInformationInput;
/* Reserved: [optional]
 */
@property(nonatomic) NSArray<DSESAttachment>* recipientAttachments;
/* Specifies a note that is unique to this recipient. This note is sent to the recipient via the signing email. The note displays in the signing UI near the upper left corner of the document on the signing screen.\n\nMaximum Length: 1000 characters. [optional]
 */
@property(nonatomic) NSString* note;
/* Optional element. Specifies the role name associated with the recipient.<br/><br/>This is required when working with template recipients. [optional]
 */
@property(nonatomic) NSString* roleName;
/* Indicates the envelope status. Valid values are:\n\n* sent - The envelope is sent to the recipients. \n* created - The envelope is saved as a draft and can be modified and sent later. [optional]
 */
@property(nonatomic) NSString* status;
/* Reserved: For DocuSign use only. [optional]
 */
@property(nonatomic) NSString* signedDateTime;
/* Reserved: For DocuSign use only. [optional]
 */
@property(nonatomic) NSString* deliveredDateTime;
/* The date and time the recipient declined the document. [optional]
 */
@property(nonatomic) NSString* declinedDateTime;
/* The date and time the envelope was sent. [optional]
 */
@property(nonatomic) NSString* sentDateTime;
/* The reason the recipient declined the document. [optional]
 */
@property(nonatomic) NSString* declinedReason;
/* Reserved: For DocuSign use only. [optional]
 */
@property(nonatomic) NSString* deliveryMethod;
/* Reserved: [optional]
 */
@property(nonatomic) NSString* faxNumber;
/* When set to **true**, the sender cannot change any attributes of the recipient. Used only when working with template recipients. [optional]
 */
@property(nonatomic) NSString* templateLocked;
/* When set to **true**, the sender may not remove the recipient. Used only when working with template recipients. [optional]
 */
@property(nonatomic) NSString* templateRequired;

@property(nonatomic) DSESRecipientEmailNotification* emailNotification;
/* When set to **true** and the envelope recipient creates a DocuSign account after signing, the Manage Account Email Notification settings are used as the default settings for the recipient's account. [optional]
 */
@property(nonatomic) NSString* inheritEmailNotificationConfiguration;

@property(nonatomic) DSESErrorDetails* errorDetails;

@property(nonatomic) DSESAuthenticationStatus* recipientAuthenticationStatus;
/*  [optional]
 */
@property(nonatomic) NSString* totalTabCount;

@end
