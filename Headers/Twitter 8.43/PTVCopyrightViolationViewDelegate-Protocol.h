//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/NSObject-Protocol.h>

@class PTVCopyrightViolationView;

@protocol PTVCopyrightViolationViewDelegate <NSObject>

@optional
- (void)copyrightViolationViewDidSelectDismiss:(PTVCopyrightViolationView *)arg1;
- (void)copyrightViolationViewDidSelectHasBroadcastingRights:(PTVCopyrightViolationView *)arg1;
- (void)copyrightViolationViewDidSelectDisputeViolation:(PTVCopyrightViolationView *)arg1;
- (void)copyrightViolationViewDidSelectConfirmViolation:(PTVCopyrightViolationView *)arg1;
@end

