//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class RobotPing, SystemInformation;

@protocol RobotPingDelegate <NSObject>
- (void)robotPingCertificateError:(RobotPing *)arg1;
- (void)robotPingTimedOut:(RobotPing *)arg1;
- (void)robotPing:(RobotPing *)arg1 didReceiveResponse:(SystemInformation *)arg2;
@end

