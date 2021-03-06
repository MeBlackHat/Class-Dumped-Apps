//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEIMNoticeListDataController.h"

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface AWEIMNotificationListDataController : AWEIMNoticeListDataController
{
    NSObject<OS_dispatch_queue> *_executeQueue;
    _Bool _notClearOfficialChatUnreadCount;
    _Bool _showActivityOverdueToast;
    double _width;
    long long _lastReadTime;
    long long _unreadCount;
    NSString *_vcdToastText;
    long long _noticeGroup;
    long long _topGroup;
    long long _count;
    long long _maxTime;
    long long _minTime;
}

+ (id)atDescWithType:(long long)arg1 name:(id)arg2;
+ (id)commentDescWithType:(long long)arg1;
+ (void)preCaculateLayoutForAt:(id)arg1 width:(double)arg2;
+ (void)preCaculateLayoutForComment:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool showActivityOverdueToast; // @synthesize showActivityOverdueToast=_showActivityOverdueToast;
@property(nonatomic) long long minTime; // @synthesize minTime=_minTime;
@property(nonatomic) long long maxTime; // @synthesize maxTime=_maxTime;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) long long topGroup; // @synthesize topGroup=_topGroup;
@property(nonatomic) long long noticeGroup; // @synthesize noticeGroup=_noticeGroup;
@property(copy, nonatomic) NSString *vcdToastText; // @synthesize vcdToastText=_vcdToastText;
@property(nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(nonatomic) long long lastReadTime; // @synthesize lastReadTime=_lastReadTime;
@property(nonatomic) _Bool notClearOfficialChatUnreadCount; // @synthesize notClearOfficialChatUnreadCount=_notClearOfficialChatUnreadCount;
@property(nonatomic) double width; // @synthesize width=_width;
- (void)processCommentAndAtNotice:(id)arg1 completion:(CDUnknownBlockType)arg2 refresh:(_Bool)arg3;
- (void)processCommentNotice:(id)arg1 completion:(CDUnknownBlockType)arg2 refresh:(_Bool)arg3;
- (id)getExpectedSizeInfo;
- (void)processFansPushNotice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)processAtNotice:(id)arg1 completion:(CDUnknownBlockType)arg2 refresh:(_Bool)arg3;
- (void)processNoticeArray:(id)arg1;
- (id)_getParamsForLoadMore:(_Bool)arg1;
- (void)loadMoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setIsUnreadToNotiModel:(id)arg1 type:(long long)arg2;
- (void)p_addEmptyListMonitorWithResponse:(id)arg1 group:(long long)arg2 error:(id)arg3;
- (void)p_addMonitorWithRequestID:(id)arg1 group:(long long)arg2 isError:(_Bool)arg3;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)initFetchWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithNoticeGroup:(long long)arg1 topGroup:(long long)arg2 count:(long long)arg3 maxTime:(double)arg4 minTime:(double)arg5 showActivityOverdueToast:(_Bool)arg6;
- (id)initWithNoticeGroup:(long long)arg1 topGroup:(long long)arg2 count:(long long)arg3 maxTime:(double)arg4 minTime:(double)arg5;
- (id)init;

@end

