//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/NSObject-Protocol.h>

@class NSURL, UIView, UIViewController;
@protocol ASMSessionInternal, SSOIdentity, SSOService;

@protocol GIDAuthBrowserOpener <NSObject>
- (void)openURL:(NSURL *)arg1 auth:(_Bool)arg2 identity:(id <SSOIdentity>)arg3 SSOService:(id <SSOService>)arg4 view:(UIView *)arg5 viewController:(UIViewController *)arg6 animated:(_Bool)arg7 userInterfaceStyle:(unsigned long long)arg8 usePageSheetPresentation:(_Bool)arg9 session:(id <ASMSessionInternal>)arg10 completionHandler:(void (^)(NSError *))arg11;
- (void)openURL:(NSURL *)arg1 auth:(_Bool)arg2 identity:(id <SSOIdentity>)arg3 SSOService:(id <SSOService>)arg4 view:(UIView *)arg5 viewController:(UIViewController *)arg6 animated:(_Bool)arg7 completionHandler:(void (^)(NSError *))arg8;
@end

