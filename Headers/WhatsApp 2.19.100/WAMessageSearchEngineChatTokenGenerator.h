//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WASearchEngineTokenGenerator-Protocol.h"

@class NSString;

@interface WAMessageSearchEngineChatTokenGenerator : NSObject <WASearchEngineTokenGenerator>
{
}

+ (id)columnName;
+ (id)searchTermRestrictionForChatJIDs:(id)arg1;
- (void)returnJIDsFromChatSessions:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool sufficientForIndexing;
@property(readonly, nonatomic) long long minimumSearchQueryLength;
- (void)searchTokensForSearchQueryWord:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)tokensForObject:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

