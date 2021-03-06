//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, WATimeSpentSessionSummaryEvent, WamEventUserActivitySessionSummary;
@protocol OS_dispatch_queue;

@interface WATimeSpentMonitor : NSObject
{
    _Bool _shouldRemoveOverlappedStartTime;
    NSObject<OS_dispatch_queue> *_queue;
    NSNumber *_currentSessionStartTime;
    NSNumber *_lastActivityTime;
    NSNumber *_lastApplicationStopTime;
    WATimeSpentSessionSummaryEvent *_event;
    long long _rolloverTime;
    WamEventUserActivitySessionSummary *_lastSubmittedSessionSummaryEvent;
    NSNumber *_lastActivityTimeOnMainThread;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *lastActivityTimeOnMainThread; // @synthesize lastActivityTimeOnMainThread=_lastActivityTimeOnMainThread;
@property(retain, nonatomic) WamEventUserActivitySessionSummary *lastSubmittedSessionSummaryEvent; // @synthesize lastSubmittedSessionSummaryEvent=_lastSubmittedSessionSummaryEvent;
@property(nonatomic) _Bool shouldRemoveOverlappedStartTime; // @synthesize shouldRemoveOverlappedStartTime=_shouldRemoveOverlappedStartTime;
@property(nonatomic) long long rolloverTime; // @synthesize rolloverTime=_rolloverTime;
@property(retain, nonatomic) WATimeSpentSessionSummaryEvent *event; // @synthesize event=_event;
@property(retain, nonatomic) NSNumber *lastApplicationStopTime; // @synthesize lastApplicationStopTime=_lastApplicationStopTime;
@property(retain, nonatomic) NSNumber *lastActivityTime; // @synthesize lastActivityTime=_lastActivityTime;
@property(retain, nonatomic) NSNumber *currentSessionStartTime; // @synthesize currentSessionStartTime=_currentSessionStartTime;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)userDefaults;
- (void)saveTimeSpentSessionSummaryEventDataToUserDefaults;
- (void)loadSessionSummaryEventDataOnApplicationLaunchAtTime:(long long)arg1;
- (id)ongoingSessionSummaryEvent;
- (void)resetSessionSummaryEventWithNextSequenceNumber;
- (void)sendTimeSpentSessionSummaryFieldStats;
- (_Bool)shouldRecordSessionsSummaryAtTime:(long long)arg1;
- (long long)currentTime;
- (void)updateRolloverTimeWithTime:(long long)arg1;
- (void)updateEventDurationAtTime:(long long)arg1;
- (void)handleSessionEnd;
- (void)recordSessionsSummaryAtTime:(long long)arg1;
- (void)recordApplicationStopAtTime:(long long)arg1;
- (void)recordUserInteractionAtTime:(long long)arg1;
- (void)recordApplicationStartAtTime:(long long)arg1;
- (void)applicationDidSendEventAtTime:(long long)arg1;
- (void)applicationWillTerminateAtTime:(long long)arg1;
- (void)applicationDidEnterBackgroundAtTime:(long long)arg1;
- (void)applicationWillEnterForegroundAtTime:(long long)arg1;
- (void)applicationDidFinishLaunchingAtTime:(long long)arg1;
- (void)applicationDidSendEvent;
- (void)applicationWillTerminate;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)applicationDidFinishLaunching;
- (id)init;

@end

