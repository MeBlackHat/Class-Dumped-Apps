//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, XMPPPaymentMethodsResponse, _TtC14MainAppLibrary29XMPPPaymentErrorRetryResponse;

@interface _TtC14MainAppLibrary24XMPPMXVerifyCardResponse : NSObject
{
    // Error parsing type: , name: verifyType
    // Error parsing type: , name: credentialId
    // Error parsing type: , name: errorRetryResponse
    // Error parsing type: , name: methodsResponse
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) XMPPPaymentMethodsResponse *methodsResponse; // @synthesize methodsResponse;
@property(nonatomic, readonly) _TtC14MainAppLibrary29XMPPPaymentErrorRetryResponse *errorRetryResponse; // @synthesize errorRetryResponse;
@property(nonatomic, readonly) NSString *credentialId; // @synthesize credentialId;
@property(nonatomic, readonly) long long verifyType; // @synthesize verifyType;

@end

