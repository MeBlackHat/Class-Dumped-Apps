//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BraintreeUI/NSObject-Protocol.h>

@class BTDropInViewController, BTPaymentMethodNonce;

@protocol BTDropInViewControllerDelegate <NSObject>
- (void)dropInViewControllerDidCancel:(BTDropInViewController *)arg1;
- (void)dropInViewController:(BTDropInViewController *)arg1 didSucceedWithTokenization:(BTPaymentMethodNonce *)arg2;

@optional
- (void)dropInViewControllerWillComplete:(BTDropInViewController *)arg1;
- (void)dropInViewControllerDidLoad:(BTDropInViewController *)arg1;
@end

