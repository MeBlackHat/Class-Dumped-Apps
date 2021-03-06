//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/PRMSchedule-Protocol.h>

@class NSMutableSet, NSSet, NSString, PRMApplicationStateListener;

@interface PRMSchedule : NSObject <PRMSchedule>
{
    PRMApplicationStateListener *_applicationStateListener;
    _Bool _activated;
    _Bool _invalidated;
    NSMutableSet *_mutableCallbacks;
}

- (void).cxx_destruct;
- (void)registerCallback:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (_Bool)activate;
@property(readonly) NSSet *callbacks;
@property(readonly) _Bool activated;
- (id)initWithApplicationStateListener:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

