//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEComposerBeautyEffectCategoryWrapper, AWEComposerBeautyEffectViewModel, AWEComposerBeautyEffectWrapper, NSArray, NSDictionary, NSString, RACSignal;

@interface AWEComposerBeautyViewModel : NSObject
{
    _Bool _needUpdate;
    NSArray *_filteredCategories;
    AWEComposerBeautyEffectCategoryWrapper *_currentCategory;
    AWEComposerBeautyEffectWrapper *_selectedEffect;
    AWEComposerBeautyEffectViewModel *_effectViewModel;
    NSDictionary *_referExtra;
    NSString *_businessName;
    CDUnknownBlockType _fetchDataBlock;
    CDUnknownBlockType _downloadStatusChangedBlock;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needUpdate; // @synthesize needUpdate=_needUpdate;
@property(copy, nonatomic) CDUnknownBlockType downloadStatusChangedBlock; // @synthesize downloadStatusChangedBlock=_downloadStatusChangedBlock;
@property(copy, nonatomic) CDUnknownBlockType fetchDataBlock; // @synthesize fetchDataBlock=_fetchDataBlock;
@property(copy, nonatomic) NSString *businessName; // @synthesize businessName=_businessName;
@property(copy, nonatomic) NSDictionary *referExtra; // @synthesize referExtra=_referExtra;
@property(retain, nonatomic) AWEComposerBeautyEffectViewModel *effectViewModel; // @synthesize effectViewModel=_effectViewModel;
@property(retain, nonatomic) AWEComposerBeautyEffectWrapper *selectedEffect; // @synthesize selectedEffect=_selectedEffect;
@property(retain, nonatomic) AWEComposerBeautyEffectCategoryWrapper *currentCategory; // @synthesize currentCategory=_currentCategory;
@property(copy, nonatomic) NSArray *filteredCategories; // @synthesize filteredCategories=_filteredCategories;
- (id)p_findEffect:(id)arg1 withEffectIdentifier:(id)arg2;
- (void)__downloadStatusChanged:(id)arg1;
- (void)fetchBeautyEffects;
- (id)p_defaultAppliedEffectForCategory:(id)arg1;
- (void)p_resetDefaultEffectForCategory:(id)arg1;
- (void)p_resetAppliedChildEffectForEffect:(id)arg1;
- (void)p_resetRatioForEffect:(id)arg1;
- (void)resetAllComposerBeautyEffects;
- (_Bool)shouldDisableResetButton;
- (id)initWithEffectViewModel:(id)arg1 businessName:(id)arg2 referExtra:(id)arg3;
- (void)dealloc;
@property(readonly, nonatomic) RACSignal *selectedEffectSignal;
@property(readonly, nonatomic) RACSignal *currentCategorySignal;

@end

