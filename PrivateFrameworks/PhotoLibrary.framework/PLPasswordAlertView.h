/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, UITextField;

@interface PLPasswordAlertView : UIAlertView <UIAlertViewDelegate> {
    UITextField *_accountTextField;
    id _completionHandler;
    UITextField *_passwordTextField;
    int _style;
}

@property(copy) NSString * accountTextFieldPlaceholder;
@property(readonly) int style;

- (id)accountTextFieldPlaceholder;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 title:(id)arg2 message:(id)arg3 completionHandler:(id)arg4;
- (id)initWithTitle:(id)arg1 message:(id)arg2 completionHandler:(id)arg3;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (void)setAccountTextFieldPlaceholder:(id)arg1;
- (int)style;

@end
