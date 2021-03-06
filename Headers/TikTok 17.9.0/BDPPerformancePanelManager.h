//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BDPCleanWarmCacheMessage-Protocol.h"

@class BDPPerformancePanelView, BDPTrackerTimingEvent, BDPUniqueID, NSMutableDictionary, NSString;

@interface BDPPerformancePanelManager : NSObject <BDPCleanWarmCacheMessage>
{
    _Bool _isShowing;
    BDPUniqueID *_observerUniqueID;
    BDPPerformancePanelView *_panelView;
    BDPTrackerTimingEvent *_launchEvent;
    BDPTrackerTimingEvent *_pageRenderEvent;
    BDPTrackerTimingEvent *_pageSwitchEvent;
    NSMutableDictionary *_performanceDic;
}

+ (void)closePanel;
+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *performanceDic; // @synthesize performanceDic=_performanceDic;
@property(retain, nonatomic) BDPTrackerTimingEvent *pageSwitchEvent; // @synthesize pageSwitchEvent=_pageSwitchEvent;
@property(retain, nonatomic) BDPTrackerTimingEvent *pageRenderEvent; // @synthesize pageRenderEvent=_pageRenderEvent;
@property(retain, nonatomic) BDPTrackerTimingEvent *launchEvent; // @synthesize launchEvent=_launchEvent;
@property(retain, nonatomic) BDPPerformancePanelView *panelView; // @synthesize panelView=_panelView;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(retain, nonatomic) BDPUniqueID *observerUniqueID; // @synthesize observerUniqueID=_observerUniqueID;
- (void).cxx_destruct;
- (void)cleanWarmCacheWithUniqueID:(id)arg1;
- (void)removeDataWithUniqueID:(id)arg1;
- (void)updatePerformanceDic:(id)arg1 withUniqueID:(id)arg2;
- (void)recordAppClickTime:(double)arg1 withUniqueID:(id)arg2;
- (void)recordPKGDownloadStartTime:(double)arg1 endTime:(double)arg2 withUniqueID:(id)arg3;
- (id)getPerformanceTimingArrayWithUniqueID:(id)arg1;
- (void)resetLabelText;
- (void)stopEventWithType:(long long)arg1;
- (void)startEventWithType:(long long)arg1;
- (void)setReRenderTime:(double)arg1;
- (void)setFirstRenderTime:(double)arg1;
- (void)setStorage;
- (void)setDownloadTime:(double)arg1;
- (void)setCPUUsage:(double)arg1 MemoryUsage:(double)arg2 FPS:(double)arg3;
- (void)showPanel;
- (void)dealloc;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

