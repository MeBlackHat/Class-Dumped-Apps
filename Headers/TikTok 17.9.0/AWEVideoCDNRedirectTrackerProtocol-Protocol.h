//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol AWEVideoCDNRedirectTrackerProtocol <NSObject>
- (void)getCDNRequestRecords:(NSString *)arg1 urlList:(NSArray *)arg2 completion:(void (^)(NSArray *, NSArray *))arg3;
- (void)associatedVideoItemId:(NSString *)arg1 withURLArray:(NSArray *)arg2;
@end

