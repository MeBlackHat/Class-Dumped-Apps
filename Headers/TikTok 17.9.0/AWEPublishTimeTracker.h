//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEPublishTaskMessage-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface AWEPublishTimeTracker : NSObject <AWEPublishTaskMessage>
{
    _Bool _startTracker;
    _Bool _inBackground;
    NSString *_awemeID;
    NSMutableDictionary *_eventBeginDictionary;
    NSMutableDictionary *_eventEndDictionary;
    NSMutableArray *_backgroundEventBeginArray;
    NSMutableArray *_backgroundEventEndArray;
    double _backgroundStart;
    long long _backgroundDuration;
}

- (void).cxx_destruct;
@property(nonatomic) long long backgroundDuration; // @synthesize backgroundDuration=_backgroundDuration;
@property(nonatomic) double backgroundStart; // @synthesize backgroundStart=_backgroundStart;
@property(nonatomic) _Bool inBackground; // @synthesize inBackground=_inBackground;
@property(retain, nonatomic) NSMutableArray *backgroundEventEndArray; // @synthesize backgroundEventEndArray=_backgroundEventEndArray;
@property(retain, nonatomic) NSMutableArray *backgroundEventBeginArray; // @synthesize backgroundEventBeginArray=_backgroundEventBeginArray;
@property(retain, nonatomic) NSMutableDictionary *eventEndDictionary; // @synthesize eventEndDictionary=_eventEndDictionary;
@property(retain, nonatomic) NSMutableDictionary *eventBeginDictionary; // @synthesize eventBeginDictionary=_eventBeginDictionary;
@property(retain, nonatomic) NSString *awemeID; // @synthesize awemeID=_awemeID;
@property(nonatomic) _Bool startTracker; // @synthesize startTracker=_startTracker;
- (void)task:(id)arg1 didWholeEndWithResult:(long long)arg2 error:(id)arg3;
- (void)task:(id)arg1 didEndWithResult:(long long)arg2 error:(id)arg3;
- (void)appDidBecomeActiveNotification;
- (void)appWillResignActiveNotification;
- (void)clear;
- (id)formatBackgroundEventWithArray:(id)arg1;
- (void)trackerTimeForTask:(id)arg1;
- (void)eventEnd:(id)arg1;
- (void)eventBegin:(id)arg1 isForce:(_Bool)arg2;
- (void)eventBegin:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

