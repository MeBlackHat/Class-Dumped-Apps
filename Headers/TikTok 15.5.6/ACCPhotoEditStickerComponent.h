//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCPhotoEditClipMessageProtocol-Protocol.h"
#import "ACCPhotoEditFilterMessageProtocol-Protocol.h"
#import "ACCPhotoEditStickerProtocol-Protocol.h"

@class AWEPhotoStickerContainerView, AWEPhotoStickersViewController, NSString, UIView;
@protocol ACCComponentBusProtocol, ACCComponentProtocol, ACCComponentViewModelProvider, ACCPhotoEditContainerProtocol, ACCPhotoEditRootComponentProtocol;

@interface ACCPhotoEditStickerComponent : NSObject <ACCPhotoEditClipMessageProtocol, ACCPhotoEditFilterMessageProtocol, ACCPhotoEditStickerProtocol>
{
    id <ACCComponentBusProtocol> componentBus;
    AWEPhotoStickerContainerView *_stickerContainerView;
    UIView *_stickerPickerCoverView;
    AWEPhotoStickersViewController *_stickerPicker;
    UIView *_stickerAnchorView;
    id <ACCPhotoEditRootComponentProtocol> _rootComponent;
    id <ACCPhotoEditContainerProtocol> _containerComponent;
}

@property(readonly, nonatomic) __weak id <ACCPhotoEditContainerProtocol> containerComponent; // @synthesize containerComponent=_containerComponent;
@property(readonly, nonatomic) __weak id <ACCPhotoEditRootComponentProtocol> rootComponent; // @synthesize rootComponent=_rootComponent;
@property(retain, nonatomic) UIView *stickerAnchorView; // @synthesize stickerAnchorView=_stickerAnchorView;
@property(retain, nonatomic) AWEPhotoStickersViewController *stickerPicker; // @synthesize stickerPicker=_stickerPicker;
@property(retain, nonatomic) UIView *stickerPickerCoverView; // @synthesize stickerPickerCoverView=_stickerPickerCoverView;
@property(retain, nonatomic) AWEPhotoStickerContainerView *stickerContainerView; // @synthesize stickerContainerView=_stickerContainerView;
@property(nonatomic) __weak id <ACCComponentBusProtocol> componentBus; // @synthesize componentBus;
- (void).cxx_destruct;
- (void)msg_didClickFilterButton;
- (void)msg_didClickCropAndRotateButton;
- (id)filterComponent;
- (id)p_rootVC;
- (void)handleTapOnCoverView:(id)arg1;
- (void)p_stickersClicked;
- (void)p_addSticker:(id)arg1 underView:(id)arg2;
- (void)p_showActionButtons;
- (void)stickersPickerDidDismiss:(id)arg1;
- (void)stickersPicker:(id)arg1 didPickSticker:(id)arg2;
- (void)updateStickerContainer;
- (_Bool)hasEditingSticker;
- (id)photoStickerEditAndPublishViewData;
- (void)containerViewControllerDidAppear;
- (void)containerViewControllerPostDidLoad;
- (id)autoInjectComponentDictionaryOfcontainerComponent;
- (id)autoInjectComponentDictionaryOfrootComponent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <ACCComponentProtocol> superComponent;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <ACCComponentViewModelProvider> viewModelProvider;

@end

