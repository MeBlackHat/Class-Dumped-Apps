//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HTSEventContext, IESLiveMTRoomFinishApi, IESLiveUserModel, LiveRoomModel, NSArray, NSString;
@protocol IESLiveMonitor, IESLiveTracker, IESLiveUserService;

@interface IESLiveMTAudienceFinishViewModel : NSObject
{
    _Bool _enableFeedDrawer;
    _Bool _isFromMSeqRoomClose;
    _Bool _enableUpdateRecommandLives;
    _Bool _updatingRecommandLives;
    _Bool _firstFetchCompleted;
    long long _followStatus;
    IESLiveUserModel *_actualOwner;
    NSString *_toastString;
    NSArray *_recommandLives;
    LiveRoomModel *_roomModel;
    HTSEventContext *_trackContext;
    CDUnknownBlockType _closeVCBlock;
    IESLiveMTRoomFinishApi *_api;
    id <IESLiveUserService> _userService;
    id <IESLiveTracker> _tracker;
    IESLiveUserModel *_channelUser;
    id <IESLiveMonitor> _monitor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IESLiveMonitor> monitor; // @synthesize monitor=_monitor;
@property(nonatomic) _Bool firstFetchCompleted; // @synthesize firstFetchCompleted=_firstFetchCompleted;
@property(retain, nonatomic) IESLiveUserModel *channelUser; // @synthesize channelUser=_channelUser;
@property(nonatomic) _Bool updatingRecommandLives; // @synthesize updatingRecommandLives=_updatingRecommandLives;
@property(nonatomic) _Bool enableUpdateRecommandLives; // @synthesize enableUpdateRecommandLives=_enableUpdateRecommandLives;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) IESLiveMTRoomFinishApi *api; // @synthesize api=_api;
@property(nonatomic) _Bool isFromMSeqRoomClose; // @synthesize isFromMSeqRoomClose=_isFromMSeqRoomClose;
@property(nonatomic) _Bool enableFeedDrawer; // @synthesize enableFeedDrawer=_enableFeedDrawer;
@property(copy, nonatomic) CDUnknownBlockType closeVCBlock; // @synthesize closeVCBlock=_closeVCBlock;
@property(retain, nonatomic) HTSEventContext *trackContext; // @synthesize trackContext=_trackContext;
@property(retain, nonatomic) LiveRoomModel *roomModel; // @synthesize roomModel=_roomModel;
@property(copy, nonatomic) NSArray *recommandLives; // @synthesize recommandLives=_recommandLives;
@property(copy, nonatomic) NSString *toastString; // @synthesize toastString=_toastString;
@property(retain, nonatomic) IESLiveUserModel *actualOwner; // @synthesize actualOwner=_actualOwner;
@property(nonatomic) long long followStatus; // @synthesize followStatus=_followStatus;
- (void)appDidactive;
- (void)appResignActive;
- (void)trackForRecommandLiveRoom:(id)arg1 index:(long long)arg2;
- (void)trackFollowAnchor:(id)arg1;
- (void)registeUserService;
- (void)trackExitFinish:(_Bool)arg1;
- (void)trackEnterUserProfile;
- (void)trackEnterFinishRoom;
- (void)fetchRecommandLives;
- (void)stopUpdateRecommandLives;
- (void)startUpdateRecommandLives;
- (void)followAnchor;
- (void)fetchRoomInfo;
- (void)addNotificationObserver;
- (id)initWithRoomModel:(id)arg1;
- (void)dealloc;

@end

