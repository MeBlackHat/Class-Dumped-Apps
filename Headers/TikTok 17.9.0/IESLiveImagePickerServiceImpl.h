//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveMTImagePickerManagerDelegate-Protocol.h"
#import "IESLiveMTMattingViewProtocol-Protocol.h"
#import "IESLiveStickerPickerService-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class IESLiveMTImagePickerManager, IESLiveMTMattingView, NSString, UIViewController;
@protocol HTSLiveViewHierarchyProvider, IESLiveAlertFactory, IESLiveToastFactory;

@interface IESLiveImagePickerServiceImpl : NSObject <IESLiveMTMattingViewProtocol, UINavigationControllerDelegate, UIImagePickerControllerDelegate, IESLiveMTImagePickerManagerDelegate, IESLiveStickerPickerService>
{
    UIViewController *_rootvc;
    IESLiveMTMattingView *_mattingView;
    UIViewController *_selectAlbumAssetVC;
    CDUnknownBlockType _didSelectcImageHandler;
    id <IESLiveToastFactory> _toastFactory;
    id <IESLiveAlertFactory> _alertFactory;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
    IESLiveMTImagePickerManager *_photoPicker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IESLiveMTImagePickerManager *photoPicker; // @synthesize photoPicker=_photoPicker;
@property(retain, nonatomic) id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(retain, nonatomic) id <IESLiveAlertFactory> alertFactory; // @synthesize alertFactory=_alertFactory;
@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
@property(copy, nonatomic) CDUnknownBlockType didSelectcImageHandler; // @synthesize didSelectcImageHandler=_didSelectcImageHandler;
@property(nonatomic) __weak UIViewController *selectAlbumAssetVC; // @synthesize selectAlbumAssetVC=_selectAlbumAssetVC;
@property(retain, nonatomic) IESLiveMTMattingView *mattingView; // @synthesize mattingView=_mattingView;
@property(retain, nonatomic) UIViewController *rootvc; // @synthesize rootvc=_rootvc;
- (void)imageMTPickerControllerDidCancel:(id)arg1;
- (void)imageMTPickerController:(id)arg1 didFinishPickingWithImage:(id)arg2 asset:(id)arg3;
- (void)showImagePickerViewController;
- (void)didPressPlusButton;
- (void)didChooseImage:(id)arg1 asset:(id)arg2;
- (void)refreshMattingViewWithPhotoLoopEffect:(id)arg1;
- (void)didSelectcImage:(CDUnknownBlockType)arg1;
- (_Bool)isPhotoLoopEffectSticker:(id)arg1;
- (void)resumeCakeDetect;
- (void)mattingViewResetToInitState;
- (_Bool)mattingViewShowing;
- (id)getMattingView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

