//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GPCPromise, NSArray, NSString, NSURL;

@protocol GSCAuthorizationService <NSObject>
- (GPCPromise *)authURLForGaiaId:(NSString *)arg1 withRedirectURL:(NSURL *)arg2;
- (GPCPromise *)accessTokenForGaiaId:(NSString *)arg1 withScopes:(NSArray *)arg2;
- (GPCPromise *)authorizationForGaiaId:(NSString *)arg1 withScopes:(NSArray *)arg2;
@end

