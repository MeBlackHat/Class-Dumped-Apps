//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BDTrackBaseRealtimeSendingManager : NSObject
{
    double _lastImmediateEventUnavailableTimeStamp;
    unsigned long long _immediateSendingInterval;
}

+ (Class)_helperClass;
+ (id)shareManager;
@property(nonatomic) unsigned long long immediateSendingInterval; // @synthesize immediateSendingInterval=_immediateSendingInterval;
@property(nonatomic) double lastImmediateEventUnavailableTimeStamp; // @synthesize lastImmediateEventUnavailableTimeStamp=_lastImmediateEventUnavailableTimeStamp;
- (void)modifyImmediateSendingInterval;
- (void)modifyImmediateSendingIntervalIfNeeded;
- (id)urlWithIndex:(long long *)arg1;
- (void)handleImmediateSendCallback:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)sendingData:(id)arg1 index:(long long *)arg2;
- (void)sendingData:(id)arg1;
- (id)init;

@end

