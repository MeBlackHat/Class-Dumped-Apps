//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGUserSessionEndingObject-Protocol.h>

@class NSMutableDictionary;

@interface IGLiveBroadcastStore : NSObject <IGUserSessionEndingObject>
{
    NSMutableDictionary *_cache;
    NSMutableDictionary *_broadcastIdByOwnerId;
}

- (void).cxx_destruct;
- (void)userSessionWillEnd;
- (void)removeBroadcast:(id)arg1;
- (id)broadcastForPk:(id)arg1;
- (void)updateBroadcast:(id)arg1;
- (id)cacheBroadcast:(id)arg1;
- (id)init;

@end

