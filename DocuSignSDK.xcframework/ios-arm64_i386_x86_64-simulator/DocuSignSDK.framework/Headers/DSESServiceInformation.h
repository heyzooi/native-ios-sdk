#import <Foundation/Foundation.h>
#import <DocuSignSDK/DSESObject.h>

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import <DocuSignSDK/DSESServiceVersion.h>


@protocol DSESServiceInformation
@end

@interface DSESServiceInformation : DSESObject

/*  [optional]
 */
@property(nonatomic) NSArray<DSESServiceVersion>* serviceVersions;
/* Reserved: TBD [optional]
 */
@property(nonatomic) NSString* buildVersion;
/* Reserved: TBD [optional]
 */
@property(nonatomic) NSString* buildBranch;
/* Reserved: TBD [optional]
 */
@property(nonatomic) NSString* buildSHA;
/* Reserved: TBD [optional]
 */
@property(nonatomic) NSString* buildBranchDeployedDateTime;
/*  [optional]
 */
@property(nonatomic) NSArray* /* NSString */ linkedSites;

@end
