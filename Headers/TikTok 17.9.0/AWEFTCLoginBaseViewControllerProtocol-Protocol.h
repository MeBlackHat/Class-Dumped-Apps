//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIViewController;

@protocol AWEFTCLoginBaseViewControllerProtocol <NSObject>
+ (UIViewController *)ftc_newThanksViewControllerWithExportedVideo:(_Bool)arg1;
+ (UIViewController *)ftc_thanksViewControllerWithExportedVideo:(_Bool)arg1;
+ (UIViewController *)ftc_exportVideoViewController:(_Bool)arg1;
+ (UIViewController *)ftc_confirmExportAllVideosViewController:(_Bool)arg1;
+ (UIViewController *)ftc_confirmExportAllVideosViewController;
+ (UIViewController *)ftc_confirmExportVideoViewController;
+ (UIViewController *)ftc_passwordInputViewController:(_Bool)arg1;
+ (UIViewController *)ftc_usernameInputViewController:(_Bool)arg1;
+ (UIViewController *)ftc_ageGateViewControllerWithPlatform:(NSString *)arg1 isDuringRegistering:(_Bool)arg2 completionBlock:(void (^)(NSError *))arg3;
@end

