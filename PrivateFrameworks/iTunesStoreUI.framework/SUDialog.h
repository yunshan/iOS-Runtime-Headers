/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class ISDialog, UIAlertView;

@interface SUDialog : NSObject <UIAlertViewDelegate> {
    UIAlertView *_alertView;
    id _completionBlock;
    ISDialog *_dialog;
}

@property(readonly) ISDialog * dialog;

- (id)_alertView;
- (void)_completeWithButtonIndex:(int)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)dealloc;
- (id)dialog;
- (id)initWithDialog:(id)arg1;
- (BOOL)isEquivalent:(id)arg1;
- (void)showWithCompletionBlock:(id)arg1;

@end
