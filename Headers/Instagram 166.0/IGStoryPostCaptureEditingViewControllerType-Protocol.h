//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/IGStoryPostCaptureEditingViewControllerProtocol-Protocol.h>

@class NSArray, NSString, UIView;
@protocol IGStoryMediaCompositionEditingControlsOverlayViewProtocol, IGStoryPostCaptureEditingViewControllerDelegate, IGStoryPostCaptureEditingViewControllerFacebookReaderDisclosureDelegate;

@protocol IGStoryPostCaptureEditingViewControllerType <IGStoryPostCaptureEditingViewControllerProtocol>
@property(retain, nonatomic) NSArray *captureToolsForLogging;
@property(copy, nonatomic) NSString *sendButtonText;
@property(readonly, nonatomic) UIView<IGStoryMediaCompositionEditingControlsOverlayViewProtocol> *editingControlsOverlayView;
@property(nonatomic) __weak id <IGStoryPostCaptureEditingViewControllerFacebookReaderDisclosureDelegate> facebookReaderDisclosureDelegate;
@property(nonatomic) __weak id <IGStoryPostCaptureEditingViewControllerDelegate> delegate;
@end

