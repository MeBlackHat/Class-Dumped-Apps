//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSString;
@protocol FBCancelable;

@protocol IGGiphyFetching <NSObject>
- (id <FBCancelable>)searchWithTerm:(NSString *)arg1 sessionId:(NSString *)arg2 completion:(void (^)(NSString *, IGGiphyResponse *, NSError *))arg3;
- (id <FBCancelable>)fetchTrendingWithSessionId:(NSString *)arg1 mediaId:(NSString *)arg2 completion:(void (^)(IGGiphyResponse *, NSError *))arg3;
@end

