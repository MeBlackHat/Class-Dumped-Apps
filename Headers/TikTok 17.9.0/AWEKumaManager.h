//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEUserMessage-Protocol.h"

@class NSString;

@interface AWEKumaManager : NSObject <AWEUserMessage>
{
}

+ (id)sharedInstance;
+ (void)load;
- (void)didReceiveNotificationTrigger:(id)arg1 identifier:(id)arg2;
- (void)didReceiveLocalNotificationUserInfo:(id)arg1;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)didReceiveLocalNotification:(id)arg1;
- (void)didFinishLogin;
- (void)attractNonLoginUser;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

