//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIApplicationDelegate-Protocol.h"

@class NSMutableDictionary, NSString, UIWindow;

@interface FIRMessagingRemoteNotificationsProxy : NSObject <UIApplicationDelegate>
{
    _Bool _didSwizzleMethods;
    _Bool _hasSwizzledUserNotificationDelegate;
    _Bool _isObservingUserNotificationDelegateChanges;
    NSMutableDictionary *_originalAppDelegateImps;
    NSMutableDictionary *_swizzledSelectorsByClass;
    id _userNotificationCenter;
    id _currentUserNotificationCenterDelegate;
    NSString *_appDelegateInterceptorID;
}

+ (id)sharedProxy;
+ (_Bool)canSwizzleMethods;
@property(retain, nonatomic) NSString *appDelegateInterceptorID; // @synthesize appDelegateInterceptorID=_appDelegateInterceptorID;
@property(retain, nonatomic) id currentUserNotificationCenterDelegate; // @synthesize currentUserNotificationCenterDelegate=_currentUserNotificationCenterDelegate;
@property(retain, nonatomic) id userNotificationCenter; // @synthesize userNotificationCenter=_userNotificationCenter;
@property(nonatomic) _Bool isObservingUserNotificationDelegateChanges; // @synthesize isObservingUserNotificationDelegateChanges=_isObservingUserNotificationDelegateChanges;
@property(nonatomic) _Bool hasSwizzledUserNotificationDelegate; // @synthesize hasSwizzledUserNotificationDelegate=_hasSwizzledUserNotificationDelegate;
@property(nonatomic) _Bool didSwizzleMethods; // @synthesize didSwizzleMethods=_didSwizzleMethods;
@property(retain, nonatomic) NSMutableDictionary *swizzledSelectorsByClass; // @synthesize swizzledSelectorsByClass=_swizzledSelectorsByClass;
@property(retain, nonatomic) NSMutableDictionary *originalAppDelegateImps; // @synthesize originalAppDelegateImps=_originalAppDelegateImps;
- (void).cxx_destruct;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (CDUnknownFunctionPointerType)nonExistantMethodImplementationForClass:(Class)arg1;
- (void)unswizzleSelector:(SEL)arg1 inClass:(Class)arg2;
- (void)swizzleSelector:(SEL)arg1 inClass:(Class)arg2 withImplementation:(CDUnknownFunctionPointerType)arg3 inProtocol:(id)arg4;
- (void)removeImplementationForSelector:(SEL)arg1;
- (void)trackSwizzledSelector:(SEL)arg1 ofClass:(Class)arg2;
- (CDUnknownFunctionPointerType)originalImplementationForSelector:(SEL)arg1;
- (void)saveOriginalImplementation:(CDUnknownFunctionPointerType)arg1 forSelector:(SEL)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeUserNotificationCenterDelegateObserver;
- (void)addDelegateObserverToUserNotificationCenter:(id)arg1;
- (void)unswizzleUserNotificationCenterDelegate:(id)arg1;
- (void)swizzleUserNotificationCenterDelegate:(id)arg1;
- (void)listenForDelegateChangesInUserNotificationCenter:(id)arg1;
- (void)unswizzleAllMethods;
- (void)swizzleMethodsIfPossible;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

