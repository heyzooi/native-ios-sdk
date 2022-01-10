#import <Foundation/Foundation.h>
#import <DocuSignSDK/DSESObject.h>

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import <DocuSignSDK/DSESErrorDetails.h>


@protocol DSESRadio
@end

@interface DSESRadio : DSESObject

/* Specifies the page number on which the tab is located. [optional]
 */
@property(nonatomic) NSString* pageNumber;
/* This indicates the horizontal offset of the object on the page. DocuSign uses 72 DPI when determining position. [optional]
 */
@property(nonatomic) NSString* xPosition;
/* This indicates the vertical offset of the object on the page. DocuSign uses 72 DPI when determining position. [optional]
 */
@property(nonatomic) NSString* yPosition;
/* Anchor text information for a radio button. [optional]
 */
@property(nonatomic) NSString* anchorString;
/* Specifies the X axis location of the tab, in achorUnits, relative to the anchorString. [optional]
 */
@property(nonatomic) NSString* anchorXOffset;
/* Specifies the Y axis location of the tab, in achorUnits, relative to the anchorString. [optional]
 */
@property(nonatomic) NSString* anchorYOffset;
/* Specifies units of the X and Y offset. Units could be pixels, millimeters, centimeters, or inches. [optional]
 */
@property(nonatomic) NSString* anchorUnits;
/* When set to **true**, this tab is ignored if anchorString is not found in the document. [optional]
 */
@property(nonatomic) NSString* anchorIgnoreIfNotPresent;
/*  [optional]
 */
@property(nonatomic) NSString* anchorCaseSensitive;
/*  [optional]
 */
@property(nonatomic) NSString* anchorMatchWholeWord;
/*  [optional]
 */
@property(nonatomic) NSString* anchorHorizontalAlignment;
/* Specifies the value of the tab. [optional]
 */
@property(nonatomic) NSString* value;
/* When set to **true**, the radio button is selected. [optional]
 */
@property(nonatomic) NSString* selected;
/* The unique identifier for the tab. The tabid can be retrieved with the [ML:GET call]. [optional]
 */
@property(nonatomic) NSString* tabId;
/* When set to **true**, the signer is required to fill out this tab [optional]
 */
@property(nonatomic) NSString* required;
/* When set to **true**, the signer cannot change the data of the custom tab. [optional]
 */
@property(nonatomic) NSString* locked;

@property(nonatomic) DSESErrorDetails* errorDetails;

@end
