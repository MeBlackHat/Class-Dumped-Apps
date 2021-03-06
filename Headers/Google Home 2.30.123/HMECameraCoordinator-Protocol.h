//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GHCCameraDetails, HMENavigationController, NSString, UIViewController;
@protocol HMECameraCoordinatorDelegate, HMEUnifiedDevice;

@protocol HMECameraCoordinator <NSObject>
@property(nonatomic) __weak id <HMECameraCoordinatorDelegate> delegate;
- (void)pushCameraControllerForHGSID:(NSString *)arg1 cameraDetails:(GHCCameraDetails *)arg2 navigationController:(HMENavigationController *)arg3;
- (void)presentCameraControllerForHGSID:(NSString *)arg1 cameraDetails:(GHCCameraDetails *)arg2 presentingController:(UIViewController *)arg3;
- (void)presentCameraControllerForUnifiedDevice:(id <HMEUnifiedDevice>)arg1 cameraDetails:(GHCCameraDetails *)arg2 presentingController:(UIViewController *)arg3;
@end

