/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABContactAction, ABPropertyGroupItem;

@interface ABContactAddFavoriteActionDelegate : NSObject <UIActionSheetDelegate> {
    ABPropertyGroupItem *_propertyItem;
    ABContactAction *_sendingAction;
}

@property(retain) ABPropertyGroupItem * propertyItem;
@property(retain) ABContactAction * sendingAction;

- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)propertyItem;
- (void)saveFavoriteWithType:(int)arg1;
- (id)sendingAction;
- (void)setPropertyItem:(id)arg1;
- (void)setSendingAction:(id)arg1;

@end
