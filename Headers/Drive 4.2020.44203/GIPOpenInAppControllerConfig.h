//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface GIPOpenInAppControllerConfig : NSObject
{
    _Bool areAllAppsEnabled_;
    NSMutableSet *whitelistAppName_;
    NSMutableSet *whitelistStoreIDs_;
    NSMutableSet *whitelistTags_;
    NSMutableSet *blacklistAppName_;
    NSMutableSet *blacklistStoreIDs_;
    NSMutableSet *blacklistTags_;
}

- (void).cxx_destruct;
- (_Bool)isGIPAppEnabled:(id)arg1;
- (void)blacklistAppWithTags:(id)arg1;
- (void)blacklistAppWithStoreIDs:(id)arg1;
- (void)blacklistAppWithNames:(id)arg1;
- (void)whitelistAppWithTags:(id)arg1;
- (void)whitelistAppWithStoreIDs:(id)arg1;
- (void)whitelistAppWithNames:(id)arg1;
- (id)initWithAllAppsEnabled:(_Bool)arg1;
- (id)init;

@end

