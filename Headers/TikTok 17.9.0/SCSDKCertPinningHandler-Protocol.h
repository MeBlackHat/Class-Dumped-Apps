//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SCSDKCoreKit/NSObject-Protocol.h>

@class NSString, NSURLAuthenticationChallenge;

@protocol SCSDKCertPinningHandler <NSObject>
- (void)didReceiveChallenge:(NSURLAuthenticationChallenge *)arg1 completionHandler:(void (^)(long long, NSURLCredential *))arg2;
- (_Bool)isPinningEnabledHost:(NSString *)arg1;
@end

