//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FBPayCVVRouter : NSObject
{
    NSString *_authenticationFlowType;
}

- (void).cxx_destruct;
- (void)dismissController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentPaymentCVVViewControllerFrom:(id)arg1 fbpayCVVContext:(id)arg2 authParams:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithAuthenticationFlowType:(id)arg1;

@end

