//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HMEStereoPairingSetupTaskCoordinator, SetupCastDevice;

@protocol HMEStereoPairingSetupTaskCoordinatorDelegate <NSObject>
- (void)stereoPairingSetupTask:(HMEStereoPairingSetupTaskCoordinator *)arg1 didCompleteWithSuccess:(_Bool)arg2 leftDevice:(SetupCastDevice *)arg3 rightDevice:(SetupCastDevice *)arg4;
@end

