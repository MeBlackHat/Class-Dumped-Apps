//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABSTaskQueue-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface ABSConcurrentTaskQueue : NSObject <ABSTaskQueue>
{
    int key;
    int context;
    NSObject<OS_dispatch_queue> *queue;
}

- (void).cxx_destruct;
- (void)executeBlock:(CDUnknownBlockType)arg1;
- (void)enqueueBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool isCurrent;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

