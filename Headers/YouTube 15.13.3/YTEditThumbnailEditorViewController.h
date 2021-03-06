//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTStyledViewController.h>

#import <Module_Framework/YTEditThumbnailPickerViewControllerDelegate-Protocol.h>
#import <Module_Framework/YTGraftingViewController-Protocol.h>
#import <Module_Framework/YTPermissionsDelegate-Protocol.h>
#import <Module_Framework/YTStyleContextResponderProvider-Protocol.h>
#import <Module_Framework/YTTopController-Protocol.h>

@class GIMMe, NSArray, NSString, UIImage, YTCommandResponderEvent, YTEditThumbnailEditorPermissionsViewController, YTEditThumbnailEditorView, YTEditThumbnailPickerViewController, YTICommand, YTQTMButton;
@protocol YTEditThumbnailEditorViewControllerDelegate, YTResponder;

@interface YTEditThumbnailEditorViewController : YTStyledViewController <YTEditThumbnailPickerViewControllerDelegate, YTPermissionsDelegate, YTStyleContextResponderProvider, YTTopController, YTGraftingViewController>
{
    id <YTResponder> _parentResponder;
    id <YTEditThumbnailEditorViewControllerDelegate> _delegate;
    YTQTMButton *_selectButton;
    YTEditThumbnailPickerViewController *_thumbnailPickerViewController;
    YTEditThumbnailEditorView *_thumbnailEditorView;
    YTICommand *_navigationEndpoint;
    NSArray *_defaultThumbnailImages;
    UIImage *_selectedThumbnailImage;
    NSString *_videoID;
    YTEditThumbnailEditorPermissionsViewController *_permissionsViewController;
}

@property(retain, nonatomic) YTEditThumbnailEditorPermissionsViewController *permissionsViewController; // @synthesize permissionsViewController=_permissionsViewController;
@property(copy, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
@property(retain, nonatomic) UIImage *selectedThumbnailImage; // @synthesize selectedThumbnailImage=_selectedThumbnailImage;
@property(retain, nonatomic) NSArray *defaultThumbnailImages; // @synthesize defaultThumbnailImages=_defaultThumbnailImages;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @synthesize navigationEndpoint=_navigationEndpoint;
@property(retain, nonatomic) YTEditThumbnailEditorView *thumbnailEditorView; // @synthesize thumbnailEditorView=_thumbnailEditorView;
@property(retain, nonatomic) YTEditThumbnailPickerViewController *thumbnailPickerViewController; // @synthesize thumbnailPickerViewController=_thumbnailPickerViewController;
@property(retain, nonatomic) YTQTMButton *selectButton; // @synthesize selectButton=_selectButton;
@property(nonatomic) __weak id <YTEditThumbnailEditorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)updatePermissions;
- (_Bool)initializePermissions;
- (void)dismiss;
- (void)setupNavigationItems;
@property(readonly, nonatomic) NSString *styleContext;
- (void)permissionsUpdated:(id)arg1 forType:(long long)arg2 status:(long long)arg3;
- (void)didSelectThumbnailImage:(id)arg1;
- (_Bool)isEqualTopController:(id)arg1;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (id)navEndpoint;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1 thumbnailImages:(id)arg2 videoID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak GIMMe *gimme;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTCommandResponderEvent *sourceEvent;
@property(readonly) Class superclass;

@end

