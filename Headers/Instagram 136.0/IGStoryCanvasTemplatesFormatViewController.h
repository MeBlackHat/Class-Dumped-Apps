//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <InstagramAppCoreFramework/IGCanvasControlsOverlayViewToolbarDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryCanvasFormatGradientHandler-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryCanvasFormatViewControllerType-Protocol.h>
#import <InstagramAppCoreFramework/IGTemplatesStickerListViewControllerDelegate-Protocol.h>

@class IGStoryCanvasToolbarConfig, IGStoryStickerContainerView, IGTemplateStickerModel, IGTemplateStickerView, IGTooltipView, IGUserSession, NSArray, NSString, UISelectionFeedbackGenerator;
@protocol IGStoryCanvasCompositionProvider, IGStoryCanvasFormatViewControllerDelegate;

@interface IGStoryCanvasTemplatesFormatViewController : UIViewController <IGTemplatesStickerListViewControllerDelegate, IGStoryCanvasFormatViewControllerType, IGCanvasControlsOverlayViewToolbarDelegate, IGStoryCanvasFormatGradientHandler>
{
    NSArray *_templates;
    IGUserSession *_userSession;
    IGTemplateStickerModel *_currentTemplateStickerModel;
    IGStoryStickerContainerView *_stickerContainerView;
    IGTemplateStickerView *_templateStickerView;
    IGTooltipView *_postCaptureTooltipView;
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
    id <IGStoryCanvasFormatViewControllerDelegate> _delegate;
    id <IGStoryCanvasCompositionProvider> _compositionProvider;
}

@property(nonatomic) __weak id <IGStoryCanvasCompositionProvider> compositionProvider; // @synthesize compositionProvider=_compositionProvider;
@property(nonatomic) __weak id <IGStoryCanvasFormatViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleGradientChange:(id)arg1;
- (void)_didTapPostCaptureAddStickerButton;
- (void)restoreCompositionState;
- (void)handleCapture;
- (void)templatesStickerListViewController:(id)arg1 didSelectTemplatesSticker:(id)arg2;
- (void)canvasControlsOverlayViewDidTapToolbarButton:(id)arg1;
- (id)createModeSubformatForLogging;
@property(readonly, nonatomic) long long presentationAnimationStyle;
@property(readonly, nonatomic) IGStoryCanvasToolbarConfig *toolbarConfig;
@property(readonly, nonatomic) IGStoryStickerContainerView *stickerContainerView;
- (void)_displayNextTemplate;
- (void)_handleTap;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithTemplates:(id)arg1 modelFromAttribution:(id)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

