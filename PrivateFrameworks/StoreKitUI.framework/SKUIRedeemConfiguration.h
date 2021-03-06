/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSOperationQueue, SKUIClientContext, UIImage;

@interface SKUIRedeemConfiguration : NSObject {
    int _category;
    SKUIClientContext *_clientContext;
    UIImage *_inputImage;
    UIImage *_landingImage;
    NSOperationQueue *_operationQueue;
    UIImage *_successImage;
}

@property(retain) UIImage * inputImage;
@property(retain) UIImage * landingImage;
@property(readonly) NSOperationQueue * operationQueue;
@property(retain) UIImage * successImage;

- (void).cxx_destruct;
- (void)_loadURLsWithDictionary:(id)arg1;
- (id)initWithOperationQueue:(id)arg1 category:(int)arg2 clientContext:(id)arg3;
- (id)inputImage;
- (id)landingImage;
- (void)loadImages;
- (id)operationQueue;
- (void)setInputImage:(id)arg1;
- (void)setLandingImage:(id)arg1;
- (void)setSuccessImage:(id)arg1;
- (id)successImage;

@end
