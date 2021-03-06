//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GWA2Node.h>

#import <Module_Framework/GWA2ChildFrameSource-Protocol.h>
#import <Module_Framework/GWACameraDelegate-Protocol.h>
#import <Module_Framework/GWACardRecognizerDelegate-Protocol.h>

@class GWACameraView, NSString, ORCH2PhotoCaptureNode, UIImageView, UIView;

@interface GWA2PhotoCaptureNode : GWA2Node <GWACameraDelegate, GWACardRecognizerDelegate, GWA2ChildFrameSource>
{
    UIView *_photoCaptureView;
    UIImageView *_capturedImageView;
    GWACameraView *_cameraView;
    ORCH2PhotoCaptureNode *_photoCaptureNodeExtension;
    GWA2Node *_previewOverlayNode;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GWA2Node *previewOverlayNode; // @synthesize previewOverlayNode=_previewOverlayNode;
- (struct CGRect)childFrame;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)handleOrientation:(long long)arg1;
- (void)dataExecutionStateChanged:(id)arg1;
- (void)cardRecognizer:(id)arg1 foundCardImage:(id)arg2;
- (void)cardRecognizerFailedToFindCard:(id)arg1;
- (void)cardRecognizerReceivedBlurryImage:(id)arg1;
- (void)camera:(id)arg1 didCaptureImage:(id)arg2;
- (void)cameraDidFinishedFocusing:(id)arg1;
- (void)cameraDidReceiveFirstImage:(id)arg1;
- (void)camera:(id)arg1 hasStartedSession:(id)arg2;
- (void)setupAccessibilityProperties;
- (void)applyStyleProperties;
- (void)applyLayoutPropertiesWithForcedRedraw:(_Bool)arg1;
- (struct CGSize)contentSize;
- (id)presentedView;
- (void)replaceChildNode:(id)arg1 withNode:(id)arg2;
- (void)dealloc;
- (id)initWithNode:(id)arg1 pageContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

