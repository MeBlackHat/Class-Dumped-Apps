//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol GDKChangelogPolling;

@interface GDKCelloPollingTimer : NSObject
{
    int _pollingIntervalMS;
    id <GDKChangelogPolling> _changelogPoller;
    NSTimer *_timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak id <GDKChangelogPolling> changelogPoller; // @synthesize changelogPoller=_changelogPoller;
@property(readonly, nonatomic) int pollingIntervalMS; // @synthesize pollingIntervalMS=_pollingIntervalMS;
- (void)timerDidFire;
- (void)invalidate;
- (id)initWithChangelogPoller:(id)arg1 pollingIntervalMS:(int)arg2;

@end

