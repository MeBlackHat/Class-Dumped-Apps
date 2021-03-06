//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HTSLiveApi, IESLiveRoomFilter, LiveRoomModel, RACDisposable;
@protocol HTSLiveCameraEffectProvider, HTSLiveDetailRouter, IESLiveApplyCakeStickerRouter, IESLiveRoomProfileRouter, IESLiveSettings;

@interface HTSLiveCameraConfigService : NSObject
{
    unsigned long long _currentFilterIndex;
    IESLiveRoomFilter *_selectedFilter;
    LiveRoomModel *_room;
    HTSLiveApi *_api;
    id <HTSLiveCameraEffectProvider> _effectProvider;
    id <IESLiveSettings> _liveSettings;
    RACDisposable *_disposable;
    id <HTSLiveDetailRouter> _detailRouter;
    id <IESLiveRoomProfileRouter> _roomProfileRouter;
    id <IESLiveApplyCakeStickerRouter> _cakeStickerRouter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IESLiveApplyCakeStickerRouter> cakeStickerRouter; // @synthesize cakeStickerRouter=_cakeStickerRouter;
@property(retain, nonatomic) id <IESLiveRoomProfileRouter> roomProfileRouter; // @synthesize roomProfileRouter=_roomProfileRouter;
@property(retain, nonatomic) id <HTSLiveDetailRouter> detailRouter; // @synthesize detailRouter=_detailRouter;
@property(retain, nonatomic) RACDisposable *disposable; // @synthesize disposable=_disposable;
@property(retain, nonatomic) id <IESLiveSettings> liveSettings; // @synthesize liveSettings=_liveSettings;
@property(retain, nonatomic) id <HTSLiveCameraEffectProvider> effectProvider; // @synthesize effectProvider=_effectProvider;
@property(retain, nonatomic) HTSLiveApi *api; // @synthesize api=_api;
@property(retain, nonatomic) LiveRoomModel *room; // @synthesize room=_room;
@property(retain, nonatomic) IESLiveRoomFilter *selectedFilter; // @synthesize selectedFilter=_selectedFilter;
@property(nonatomic) unsigned long long currentFilterIndex; // @synthesize currentFilterIndex=_currentFilterIndex;
- (void)changeFilterIndex:(unsigned long long)arg1 isDraw:(_Bool)arg2;
- (_Bool)isUnusedEffect;
- (void)applyFilter:(id)arg1;
@property(nonatomic) long long cheekValue;
@property(nonatomic) long long bigEyeValue;
@property(nonatomic) long long smoothValue;
@property(nonatomic) long long whiteValue;
- (id)init;
- (id)paramsForUpload;
- (void)setNeedsUpload;
- (void)setup;
- (void)didSetAttachingDIContext;

@end

