//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGUserSessionEndingObject-Protocol.h>

@class IGObjectDiskStorage, IGUserStore, NSMutableOrderedSet;

@interface IGRecentUserStore : NSObject <IGUserSessionEndingObject>
{
    IGUserStore *_userStore;
    IGObjectDiskStorage *_storedPks;
    NSMutableOrderedSet *_userPks;
    NSMutableOrderedSet *_users;
}

- (void).cxx_destruct;
- (void)userSessionWillEnd;
- (void)_archive;
- (void)addUser:(id)arg1;
- (id)recentUsersWithFilterBlock:(CDUnknownBlockType)arg1;
- (id)recentUsers;
- (id)initWithUserStore:(id)arg1 diskManager:(id)arg2 fileName:(id)arg3;

@end

