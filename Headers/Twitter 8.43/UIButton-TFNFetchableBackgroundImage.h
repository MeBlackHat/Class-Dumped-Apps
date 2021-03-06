//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <TFNUI/TFNMenuSupport-Protocol.h>
#import <TFNUI/TIPImageFetchable-Protocol.h>

@class NSString, TIPImageContainer, UIImage;

@interface UIButton (TFNFetchableBackgroundImage) <TIPImageFetchable, TFNMenuSupport>
@property(retain, nonatomic) UIImage *tip_fetchedImage;
- (void)_tfn_menu_touchUp;
- (void)_tfn_menu_touchUpInside;
- (void)_tfn_menu_touchDown;
- (void)_tfn_menu_menuActionTriggered;
- (void)_tfn_menu_populateMenuWithTitle:(id)arg1 actionItems:(id)arg2;
- (void)populateMenuWithActionItems:(id)arg1;
- (void)populateMenuWithTitle:(id)arg1 actionItems:(id)arg2;
- (void)_tfn_setWillDisplayMenuOnPrimaryActionBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) CDUnknownBlockType willDisplayMenuOnPrimaryActionBlock;
@property(readonly, nonatomic) _Bool isPreparedToDisplayMenuOnPrimaryAction;
- (void)_tfn_prepareToDisplayMenuOnPrimaryActionWhen:(CDUnknownBlockType)arg1;
- (void)prepareToDisplayMenuOnPrimaryActionWhen:(CDUnknownBlockType)arg1;
- (void)prepareToDisplayMenuOnPrimaryAction;
- (void)tfn_removePointerInteraction;
- (void)tfn_setupPointerInteractionsWithStyleProvider:(CDUnknownBlockType)arg1;
@property(nonatomic, getter=tfn_isPointerInteractionEnabled) _Bool tfn_pointerInteractionEnabled;
- (void)tfn_convertToAttributedTitleLinkForState:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) TIPImageContainer *tip_fetchedImageContainer;
@end

