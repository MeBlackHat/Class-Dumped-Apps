//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NFDTarget, NFDTargetMetadata, NSMutableArray;

@interface CHMAccountState : NSObject
{
    _Bool _hasMoreNotificationThreadsToFetch;
    NFDTarget *_target;
    NSMutableArray *_notificationThreads;
    long long _synchronizationVersion;
    long long _pagingVersion;
}

@property(nonatomic) long long pagingVersion; // @synthesize pagingVersion=_pagingVersion;
@property(nonatomic) long long synchronizationVersion; // @synthesize synchronizationVersion=_synchronizationVersion;
@property(nonatomic) _Bool hasMoreNotificationThreadsToFetch; // @synthesize hasMoreNotificationThreadsToFetch=_hasMoreNotificationThreadsToFetch;
@property(readonly, nonatomic) NSMutableArray *notificationThreads; // @synthesize notificationThreads=_notificationThreads;
@property(retain, nonatomic) NFDTarget *target; // @synthesize target=_target;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NFDTargetMetadata *targetMetadata;
- (id)init;

@end

