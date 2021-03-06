//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GIKBaseForegroundAccountService-Protocol.h"

@class NSObject;
@protocol GIKEventSubscription;

@protocol GIKForegroundAccountService <GIKBaseForegroundAccountService>
- (id <GIKEventSubscription>)subscribeToUpdatesWithTarget:(NSObject *)arg1 selector:(SEL)arg2;
- (id <GIKEventSubscription>)subscribeToUpdatesWithBlock:(void (^)(id <GIPAccountID>))arg1;
- (id <GIKEventSubscription>)subscribeToForegroundAccountUpdatesWithTarget:(NSObject *)arg1 selector:(SEL)arg2;
- (void)setForegroundAccountToRecommendedAccountWithCompletion:(void (^)(id <GIPAccountID>, NSError *))arg1;
@end

