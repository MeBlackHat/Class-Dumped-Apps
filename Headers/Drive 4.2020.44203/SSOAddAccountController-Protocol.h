//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SSOUIFlowPresentation;

@protocol SSOAddAccountController <NSObject>
- (void)cancelFlowAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)startFlowWithPresentation:(SSOUIFlowPresentation *)arg1 userEmail:(NSString *)arg2 callbackOnMainQueue:(void (^)(id <SSOIdentity>, NSError *))arg3;
- (void)startFlowWithPresentation:(SSOUIFlowPresentation *)arg1 callbackOnMainQueue:(void (^)(id <SSOIdentity>, NSError *))arg2;
@end

