//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class NSError, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol FNFDrmLicenseHandler <NSObject>
- (void)fetchCertificateWithCompletionHandler:(void (^)(NSString *))arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)didUpdateLicense:(NSError *)arg1;
- (void)generateLicense:(NSString *)arg1 request:(NSString *)arg2 videoId:(NSString *)arg3 keyId:(NSString *)arg4 completion:(void (^)(NSString *))arg5;
- (void)generateLicense:(NSString *)arg1 request:(NSString *)arg2 videoId:(NSString *)arg3 completion:(void (^)(NSString *))arg4;
@end

