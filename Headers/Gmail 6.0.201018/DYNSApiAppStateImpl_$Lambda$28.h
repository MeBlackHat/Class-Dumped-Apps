//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNSApiAppSequence_AppSequenceExecutable-Protocol.h"

@class NSString;
@protocol DYNSSyncv2ApiWorldSyncEngine;

@interface DYNSApiAppStateImpl_$Lambda$28 : NSObject <DYNSApiAppSequence_AppSequenceExecutable>
{
    id <DYNSSyncv2ApiWorldSyncEngine> target$_;
}

- (void)dealloc;
- (void)execute;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

