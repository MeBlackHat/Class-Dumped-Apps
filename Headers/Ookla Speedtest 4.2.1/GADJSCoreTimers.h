//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpeedTestEngine/GADJSCoreTimersProtocol-Protocol.h>

@class GADJSCoreJSContext, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface GADJSCoreTimers : NSObject <GADJSCoreTimersProtocol>
{
    GADJSCoreJSContext *_JSCoreJSContext;
    int _counter;
    NSMutableDictionary *_timers;
    NSObject<OS_dispatch_queue> *_lockQueue;
}

- (void).cxx_destruct;
- (id)getClearInterval;
- (id)getClearTimeout;
- (id)JSFunctionForClearTimer;
- (id)getSetInterval;
- (id)getSetTimeout;
- (id)JSFunctionForSetTimerWithRepeats:(_Bool)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithJSCoreJSContext:(id)arg1;

@end

