/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@class LSApplicationProxy, NSArray, NSData, NSDate, NSDictionary, NSError, NSMutableDictionary, NSNumber, NSString, NSURL;

@interface SFAirDropTransferData : NSObject {
    NSMutableDictionary *_contentTypes;
    NSMutableDictionary *_fileExtensionsToTypes;
    BOOL _nonFileItem;
    NSArray *_possibleApplicationDestinations;
    NSString *_recordID;
    LSApplicationProxy *_selectedApplicationDestination;
    NSString *_transferCompleteMessage;
    NSMutableDictionary *_transferData;
    BOOL _undesiredMixOfItems;
    BOOL _unknownFileType;
    BOOL _unknownScheme;
}

@property(readonly) NSString * appBundleID;
@property(readonly) NSNumber * bytesCopied;
@property(readonly) NSDictionary * contentTypes;
@property(readonly) NSError * error;
@property(readonly) struct CGImage { }* fileIcon;
@property(readonly) NSData * fileIconData;
@property(readonly) NSArray * files;
@property(readonly) NSNumber * filesCopied;
@property(readonly) NSString * firstFileExtension;
@property(readonly) NSString * firstFileName;
@property(readonly) NSString * firstFileTypeDescription;
@property(readonly) NSURL * firstURL;
@property(readonly) NSArray * items;
@property(readonly) NSString * itemsDescription;
@property(readonly) NSDictionary * itemsDescriptionAdvanced;
@property(getter=isNonFileItem,readonly) BOOL nonFileItem;
@property(retain) NSArray * possibleApplicationDestinations;
@property(readonly) NSString * progressMessage;
@property(readonly) NSString * recordID;
@property(readonly) NSString * rejectedMessage;
@property(readonly) NSString * searchAppStoreMessage;
@property(readonly) NSString * selectAppMessage;
@property(retain) LSApplicationProxy * selectedApplicationDestination;
@property(readonly) NSString * senderComputerName;
@property(readonly) NSString * senderEmail;
@property(readonly) NSString * senderEmailHash;
@property(readonly) NSString * senderFirstName;
@property(readonly) NSString * senderID;
@property(readonly) NSString * senderLastName;
@property(readonly) NSString * senderName;
@property BOOL soundPlayed;
@property NSDate * timeLastUserInteraction;
@property(readonly) NSNumber * timeRemaining;
@property(readonly) NSNumber * totalBytes;
@property(readonly) NSString * transferCompleteMessage;
@property BOOL transferCompleted;
@property int transferState;
@property(getter=isTrustedPerson,readonly) BOOL trustedPerson;
@property(getter=isUndesiredMixOfItems,readonly) BOOL undesiredMixOfItems;
@property(getter=isUnknownFileType,readonly) BOOL unknownFileType;
@property(getter=isUnknownScheme,readonly) BOOL unknownScheme;
@property(getter=isValid,readonly) BOOL valid;

+ (id)airDropTransferDataWithRecordID:(id)arg1 dictionary:(id)arg2;
+ (id)airDropTransferDataWithRecordID:(id)arg1;
+ (id)archivedTransferPlistName;
+ (id)archivedTransfers;
+ (id)archivedTransfersBaseURL;
+ (void)cleanupTransferWithRecordID:(id)arg1;
+ (id)transferURLForRecordID:(id)arg1;
+ (id)validateTransferFolder:(id)arg1 withRecordID:(id)arg2;

- (void).cxx_destruct;
- (id)appBundleID;
- (void)archive;
- (id)bytesCopied;
- (id)contentTypes;
- (id)description;
- (id)error;
- (struct CGImage { }*)fileIcon;
- (id)fileIconData;
- (id)files;
- (id)filesCopied;
- (id)firstFileExtension;
- (id)firstFileName;
- (id)firstFileTypeDescription;
- (id)firstURL;
- (id)initWithRecordID:(id)arg1;
- (BOOL)isNonFileItem;
- (BOOL)isTrustedPerson;
- (BOOL)isUndesiredMixOfItems;
- (BOOL)isUnknownFileType;
- (BOOL)isUnknownScheme;
- (BOOL)isValid;
- (id)items;
- (id)itemsDescription;
- (id)itemsDescriptionAdvanced;
- (id)messageAndButtonTitle:(id*)arg1;
- (id)messageInProgress:(BOOL)arg1 buttonTitle:(id*)arg2;
- (id)messageLocalizedKeyWithTypes:(id)arg1 isTrustedPerson:(BOOL)arg2 isInProgress:(BOOL)arg3;
- (id)possibleApplicationDestinations;
- (id)progressMessage;
- (id)recordID;
- (id)rejectedMessage;
- (void)removeItem:(id)arg1;
- (void)resetTransferState;
- (id)searchAppStoreMessage;
- (id)selectAppMessage;
- (id)selectedApplicationDestination;
- (id)senderComputerName;
- (id)senderEmail;
- (id)senderEmailHash;
- (id)senderFirstName;
- (id)senderID;
- (id)senderLastName;
- (id)senderName;
- (void)setPossibleApplicationDestinations:(id)arg1;
- (void)setSelectedApplicationDestination:(id)arg1;
- (void)setSoundPlayed:(BOOL)arg1;
- (void)setTimeLastUserInteraction:(id)arg1;
- (void)setTransferCompleted:(BOOL)arg1;
- (void)setTransferState:(int)arg1;
- (BOOL)soundPlayed;
- (id)timeLastUserInteraction;
- (id)timeRemaining;
- (id)totalBytes;
- (id)transferCompleteMessage;
- (BOOL)transferCompleted;
- (int)transferState;
- (id)typeForFileExtension:(id)arg1;
- (void)updateWithDictionary:(id)arg1;

@end
