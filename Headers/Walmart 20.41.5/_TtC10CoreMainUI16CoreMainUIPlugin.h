//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface _TtC10CoreMainUI16CoreMainUIPlugin : NSObject
{
    // Error parsing type: , name: identifier
    // Error parsing type: , name: dependencies
    // Error parsing type: , name: coreMainUIAPI
    // Error parsing type: , name: foregroundWorkflow
    // Error parsing type: , name: checkinWithStoreIdAfterAuth
    // Error parsing type: , name: shouldCheckinAfterAuth
}

+ (id)tabBarController;
- (void).cxx_destruct;
- (id)init;
- (id)pluginAPI;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)applicationDidBecomeActive;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)applicationWillResignActive;
- (void)applicationDidReceiveMemoryWarning;
- (void)applicationWillTerminate;
- (void)startup:(id)arg1;
- (id)initWithContainerBundleID:(id)arg1;
@property(nonatomic, readonly) NSArray *dependencies;
@property(nonatomic, readonly) NSString *identifier;

@end

