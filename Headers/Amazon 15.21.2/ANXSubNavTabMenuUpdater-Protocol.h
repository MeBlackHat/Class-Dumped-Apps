//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ANXBarComponentState, NSArray, RDCPage, UIViewController;

@protocol ANXSubNavTabMenuUpdater <NSObject>
- (void)requestUpdateForBarWithNewRDCPageAndResetBar:(RDCPage *)arg1;
- (_Bool)requestUpdateForBarWithNewRDCData:(NSArray *)arg1 newViewController:(UIViewController *)arg2;
- (_Bool)requestUpdateForBarWithNewRDCPage:(RDCPage *)arg1 newViewController:(UIViewController *)arg2;
- (void)requestUpdateForBarWithNewState:(ANXBarComponentState *)arg1;
- (void)requestUpdateForBarWithNewRegistrationStatus:(_Bool)arg1 currentViewController:(UIViewController *)arg2;
@end

