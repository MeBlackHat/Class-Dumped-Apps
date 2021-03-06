//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <InstagramAppCoreFramework/IGCameraViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGCameraViewControllerSampleBufferObserver-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryCameraOverlayViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryFormatViewControllerProtocol-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryMultiCaptureViewDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryMultiCaptureViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStorySuperTakeCaptureManagerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStorySuperTakeVideoManagerDelegate-Protocol.h>

@class CAShapeLayer, FBFacialMovementDetector, IGAsyncTask, IGCameraViewController, IGStoryCameraOverlayViewController, IGStoryExtendedGalleryViewController, IGStoryMultiCaptureView, IGStorySuperTakeCaptureManager, IGStorySuperTakeFaceView, IGStorySuperTakeVideoManager, IGUserSession, NSString, UIBezierPath, UILabel, UISlider, UIView;
@protocol IGStoryFormatViewControllerProtocolDelegate;

@interface IGStorySuperTakeFormatViewController : UIViewController <IGCameraViewControllerSampleBufferObserver, IGStorySuperTakeCaptureManagerDelegate, IGCameraViewControllerDelegate, IGStoryCameraOverlayViewControllerDelegate, IGStorySuperTakeVideoManagerDelegate, IGStoryMultiCaptureViewDataSource, IGStoryMultiCaptureViewDelegate, IGStoryFormatViewControllerProtocol>
{
    IGUserSession *_userSession;
    IGStorySuperTakeCaptureManager *_captureManager;
    IGAsyncTask *_videoCreationTask;
    _Bool _facialRecognitionIsFindingBaseline;
    CAShapeLayer *_progressLayer;
    IGStorySuperTakeVideoManager *_videoManager;
    UILabel *_instructionsLabel;
    UIView *_flashView;
    UIView *_debugView;
    UISlider *_thresholdSlider;
    UILabel *_thresholdValueLabel;
    UIView *_graphView;
    UIBezierPath *_graphPath;
    CAShapeLayer *_graphLayout;
    IGStoryMultiCaptureView *_multiCaptureView;
    IGStorySuperTakeFaceView *_faceView;
    _Bool _isReadyForPostCapture;
    FBFacialMovementDetector *_facialMovementDetector;
    double _contentCornerRadius;
    IGCameraViewController *_cameraViewController;
    id <IGStoryFormatViewControllerProtocolDelegate> _delegate;
    IGStoryCameraOverlayViewController *_overlayViewController;
    IGStoryExtendedGalleryViewController *_galleryViewController;
    struct CGRect _contentRegion;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGStoryExtendedGalleryViewController *galleryViewController; // @synthesize galleryViewController=_galleryViewController;
@property(retain, nonatomic) IGStoryCameraOverlayViewController *overlayViewController; // @synthesize overlayViewController=_overlayViewController;
@property(nonatomic) __weak id <IGStoryFormatViewControllerProtocolDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGCameraViewController *cameraViewController; // @synthesize cameraViewController=_cameraViewController;
@property(nonatomic) double contentCornerRadius; // @synthesize contentCornerRadius=_contentCornerRadius;
@property(nonatomic) struct CGRect contentRegion; // @synthesize contentRegion=_contentRegion;
- (id)analyticsModule;
- (void)multiCaptureViewDoneButtonPressed:(id)arg1;
- (struct CGSize)multiCaptureView:(id)arg1 sizeForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsForMultiCaptureView:(id)arg1;
- (id)multiCaptureView:(id)arg1 contentViewForIndex:(long long)arg2;
- (void)superTakeVideoManagerDidFinishProcessingPendingAssets:(id)arg1;
- (void)superTakeVideoManager:(id)arg1 didFinishProcesingAsset:(id)arg2;
- (void)storyCameraOverlayViewControllerDidTapTryIt:(id)arg1 onEffectWithID:(id)arg2 effectName:(id)arg3 effectIconURL:(id)arg4;
- (void)storyCameraOverlayViewControllerTrayDidDisappear:(id)arg1;
- (void)storyCameraOverlayViewControllerTrayDidAppear:(id)arg1;
- (void)storyCameraOverlayViewControllerDidDismissAudioControls:(id)arg1;
- (void)storyCameraOverlayViewController:(id)arg1 didSelectAudioControlOptionIdentifier:(id)arg2;
- (void)storyCameraOverlayViewController:(id)arg1 didSelectMusicClip:(id)arg2;
- (void)storyCameraOverlayViewDidExitTextInput:(id)arg1;
- (void)storyCameraOverlayView:(id)arg1 didChangeText:(id)arg2;
- (void)storyCameraOverlayView:(id)arg1 didChangeSliderWithValue:(double)arg2;
- (void)storyCameraOverlayView:(id)arg1 didChangePickerValueWithIndex:(long long)arg2;
- (void)storyCameraOverlayViewController:(id)arg1 didTapSticker:(id)arg2;
- (_Bool)storyCameraOverlayViewController:(id)arg1 shouldTapSticker:(id)arg2;
- (void)storyCameraOverlayView:(id)arg1 didZoomByPercent:(double)arg2;
- (void)storyCameraOverlayView:(id)arg1 didScaleZoom:(double)arg2;
- (void)storyCameraOverlayViewMoreInfoSheetDidLeaveFullscreenMode:(id)arg1;
- (void)storyCameraOverlayViewMoreInfoSheetDidEnterFullscreenMode:(id)arg1;
- (void)storyCameraOverlayViewDidUpdatePermissions:(id)arg1;
- (void)storyCameraOverlayViewControllerDidTapSettingsButton:(id)arg1;
- (void)storyCameraOverlayViewController:(id)arg1 didToggleMuteButton:(_Bool)arg2;
- (void)storyCameraOverlayViewControllerDidTapLive:(id)arg1;
- (void)storyCameraOverlayViewControllerDidBeginHandsFreeCountdown:(id)arg1;
- (void)storyCameraOverlayViewControllerDialDidStopVideoCapture:(id)arg1;
- (void)storyCameraOverlayViewControllerDialDidStartVideoCapture:(id)arg1;
- (void)storyCameraOverlayViewControllerDialDidFailVideoCapture:(id)arg1;
- (void)storyCameraOverlayViewController:(id)arg1 didSelectAREffectScrollingSelectorItemAtIndex:(long long)arg2;
- (void)storyCameraOverlayViewController:(id)arg1 didFinishHandsFreeCountdown:(_Bool)arg2;
- (void)storyCameraOverlayViewController:(id)arg1 didEndScrollingOnAREffectScrollingSelectorItemIndex:(long long)arg2;
- (void)storyCameraOverlayViewController:(id)arg1 didEndScrollOnCameraMode:(id)arg2;
- (void)storyCameraOverlayViewController:(id)arg1 canvasModeViewControllerDidShareToStory:(long long)arg2 andDirectRecipients:(id)arg3 groupStoriesRecipients:(id)arg4;
- (void)storyCameraOverlayViewController:(id)arg1 didToggleNetworkAccess:(_Bool)arg2;
- (void)storyCameraOverlayViewControllerDidTapGalleryButton:(id)arg1;
- (void)storyCameraOverlayViewController:(id)arg1 didSwitchFromCameraMode:(id)arg2 toCameraMode:(id)arg3;
- (void)storyCameraOverlayViewControllerDidTapSwitchCameras:(id)arg1;
- (void)storyCameraOverlayViewControllerDidTapTrayTitle:(id)arg1;
- (void)storyCameraOverlayViewControllerDidTapMagicButton:(id)arg1;
- (void)storyCameraOverlayViewControllerDidTapLightingButton:(id)arg1;
- (void)storyCameraOverlayViewControllerDidTapCloseButton:(id)arg1;
- (_Bool)storyCameraOverlayViewControllerDialShouldAllowVideoCapture:(id)arg1;
- (void)cameraViewControllerDidResumeRecording:(id)arg1 timestamp:(CDStruct_1b6d18a9)arg2;
- (void)cameraViewControllerDidPauseRecording:(id)arg1 timestamp:(CDStruct_1b6d18a9)arg2;
- (void)cameraViewController:(id)arg1 failedToCapturePhotoWithError:(id)arg2;
- (void)cameraViewController:(id)arg1 didFinishWithInputAssets:(id)arg2;
- (void)cameraViewController:(id)arg1 didFinishWithInputAsset:(id)arg2;
- (void)cameraViewController:(id)arg1 didSwitchToCameraPosition:(long long)arg2 withUserInput:(unsigned long long)arg3;
- (void)cameraViewControllerDidUpdateLightingCapability:(id)arg1;
- (void)cameraViewControllerDidStartCameraSwitch:(id)arg1;
- (void)cameraViewControllerDidReceiveFirstFrame:(id)arg1;
- (void)cameraViewController:(id)arg1 startAudioSessionDidError:(id)arg2;
- (void)cameraViewController:(id)arg1 didStartCaptureSessionWithCameraPosition:(long long)arg2 cameraOrientation:(long long)arg3;
- (void)cameraViewController:(id)arg1 didReceiveFirstFrameAfterSwitchingCamerasWithCameraPosition:(long long)arg2 cameraOrientation:(long long)arg3;
- (void)cameraViewController:(id)arg1 didFinishWithBoomerangManager:(id)arg2;
- (void)cameraViewController:(id)arg1 captureDidBecomeAvailable:(_Bool)arg2;
- (void)cameraViewControllerDidStartRecording:(id)arg1 timestamp:(CDStruct_1b6d18a9)arg2;
- (void)cameraViewControllerDidRequestStartRecording:(id)arg1;
- (void)cameraViewControllerWillStopRecording:(id)arg1;
- (void)cameraViewControllerDidStopRecording:(id)arg1 timestamp:(CDStruct_1b6d18a9)arg2;
- (void)cameraViewController:(id)arg1 willSwitchFromCameraPosition:(long long)arg2;
- (void)cameraViewController:(id)arg1 didUpdateRecordProgress:(double)arg2;
- (void)cameraViewController:(id)arg1 didChangeCameraState:(long long)arg2;
- (void)cameraViewController:(id)arg1 didChangeLightingMode:(long long)arg2;
- (struct UIEdgeInsets)cameraViewControllerSafeAreaInsets:(id)arg1;
- (void)superTakeCaptureManagerDidCancelledDetection:(id)arg1;
- (void)superTakeCaptureManagerSetupStarted:(id)arg1;
- (void)superTakeCaptureManagerSetupComplete:(id)arg1;
- (void)superTakeCaptureManagerDidProcessNewFrame:(id)arg1;
- (void)superTakeCaptureManagerDidStopDetectingChange:(id)arg1;
- (void)superTakeCaptureManagerDidStartDetectingChange:(id)arg1;
- (void)_goToPostCapture;
- (void)_cancelCapture;
- (void)_handleFace:(id)arg1;
- (void)cameraViewController:(id)arg1 didReceiveAudioBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)cameraViewController:(id)arg1 didReceiveVideoBuffer:(struct opaqueCMSampleBuffer *)arg2 metadata:(CDStruct_17631a97)arg3;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)cameraDidStopRecording:(CDStruct_1b6d18a9)arg1;
- (void)cameraWillStopRecording;
- (void)cameraDidStartRecording:(CDStruct_1b6d18a9)arg1;
- (void)cameraWillStartRecording;
- (void)didDismissPostCaptureBySharing;
- (void)didDismissPostCaptureWithoutSharing;
- (void)tearDownAnimated:(_Bool)arg1;
- (void)_graphData:(vector_7584168e)arg1;
@property(readonly, nonatomic) long long prefersBottomLeftButtonType;
- (void)setupAnimated:(_Bool)arg1;
- (void)_thresholdDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

