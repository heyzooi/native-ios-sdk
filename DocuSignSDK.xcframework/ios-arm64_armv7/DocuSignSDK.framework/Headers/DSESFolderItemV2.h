#import <Foundation/Foundation.h>
#import <DocuSignSDK/DSESObject.h>

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import <DocuSignSDK/DSESRecipients.h>


@protocol DSESFolderItemV2
@end

@interface DSESFolderItemV2 : DSESObject

/*  [optional]
 */
@property(nonatomic) NSString* ownerName;
/* The envelope ID of the envelope status that failed to post. [optional]
 */
@property(nonatomic) NSString* envelopeId;
/* Contains a URI for an endpoint that you can use to retrieve the envelope or envelopes. [optional]
 */
@property(nonatomic) NSString* envelopeUri;
/* Indicates the envelope status. Valid values are:\n\n* sent - The envelope is sent to the recipients. \n* created - The envelope is saved as a draft and can be modified and sent later. [optional]
 */
@property(nonatomic) NSString* status;
/* The date and time the item was last modified. [optional]
 */
@property(nonatomic) NSString* lastModifiedDateTime;
/*  [optional]
 */
@property(nonatomic) NSString* senderUserId;
/*  [optional]
 */
@property(nonatomic) NSString* senderName;
/*  [optional]
 */
@property(nonatomic) NSString* senderEmail;
/*  [optional]
 */
@property(nonatomic) NSString* senderCompany;
/* Indicates the date and time the item was created. [optional]
 */
@property(nonatomic) NSString* createdDateTime;
/* The date and time the envelope was sent. [optional]
 */
@property(nonatomic) NSString* sentDateTime;
/* Specifies the date and time this item was completed. [optional]
 */
@property(nonatomic) NSString* completedDateTime;
/*  [optional]
 */
@property(nonatomic) NSString* subject;
/* The date and time the envelope is set to expire. [optional]
 */
@property(nonatomic) NSString* expireDateTime;
/*  [optional]
 */
@property(nonatomic) NSString* folderId;
/*  [optional]
 */
@property(nonatomic) NSString* folderUri;

@property(nonatomic) DSESRecipients* recipients;
/* Contains a URI for an endpoint that you can use to retrieve the recipients. [optional]
 */
@property(nonatomic) NSString* recipientsUri;
/* When set to **true**, indicates that this module is enabled on the account. [optional]
 */
@property(nonatomic) NSString* is21CFRPart11;

@end
