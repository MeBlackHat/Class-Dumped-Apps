//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMIAppEventsRegistrarProtocol-Protocol.h"

@class AMIAppStartupPriorityQueue, NSString;

@interface AMIAppEventsRegistrarImpl : NSObject <AMIAppEventsRegistrarProtocol>
{
    AMIAppStartupPriorityQueue *_queue;
}

@property(retain, nonatomic) AMIAppStartupPriorityQueue *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)triggerAppDidFinishStartup;
- (void)registerModuleforEvents:(id)arg1;
- (long long)priorityForListener:(id)arg1;
- (void)registerModuleForAppDidFinishStartup:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

