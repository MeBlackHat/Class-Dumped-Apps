//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1CameraServiceAuthorizationViewController;

@protocol T1CameraServiceAuthorizationViewControllerDelegate <NSObject>

@optional
- (void)cameraServiceAuthorizationViewController:(T1CameraServiceAuthorizationViewController *)arg1 didChangeAuthorizationState:(unsigned long long)arg2;
- (void)cameraServiceAuthorizationViewControllerDidTapDismiss:(T1CameraServiceAuthorizationViewController *)arg1;
@end

