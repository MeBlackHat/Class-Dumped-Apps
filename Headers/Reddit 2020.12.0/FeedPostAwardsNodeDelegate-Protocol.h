//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FeedPostAwardsNode, Post;

@protocol FeedPostAwardsNodeDelegate <NSObject>
- (void)feedPostAwardsNode:(FeedPostAwardsNode *)arg1 didTapAwardsForPost:(Post *)arg2;

@optional
- (void)feedPostAwardsNodeNeedsLayoutUpdate:(FeedPostAwardsNode *)arg1;
@end

