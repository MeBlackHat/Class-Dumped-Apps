//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WABasicCameraViewController.h"

@class NSString, UIActivityIndicatorView, UIView, UIViewController;
@protocol WAQRCodeScannerViewControllerDelegate;

@interface WABasicQRCodeScannerViewController : WABasicCameraViewController
{
    NSString *_lastQRCode;
    unsigned long long _scanID;
    UIView *_shutterView;
    UIActivityIndicatorView *_spinner;
    UIViewController *_initialTopPresentedViewController;
    id <WAQRCodeScannerViewControllerDelegate> _delegate;
}

+ (long long)cameraMode;
@property(nonatomic) __weak id <WAQRCodeScannerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleTapToFocus:(id)arg1;
- (void)retry;
- (void)restart;
- (void)retry:(_Bool)arg1;
- (void)didAcceptQRCode;
- (void)willAcceptQRCode;
@property(readonly, nonatomic) struct CGRect cameraPreviewRect;
- (void)cameraController:(id)arg1 didDetectQRCode:(id)arg2;
- (void)cameraControllerSessionDidBeginRunning:(id)arg1;
- (void)didCreateCameraController;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)wa_applicationDidEnterBackground;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

