//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _TtC14MainAppLibrary24XMPPPaymentRetryResponse;

@interface _TtC14MainAppLibrary23XMPPMXResendOTPResponse : NSObject
{
    // Error parsing type: , name: otpNumberMatch
    // Error parsing type: , name: otpLength
    // Error parsing type: , name: credentialId
    // Error parsing type: , name: retryResponse
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) _TtC14MainAppLibrary24XMPPPaymentRetryResponse *retryResponse; // @synthesize retryResponse;
@property(nonatomic, readonly) NSString *credentialId; // @synthesize credentialId;
@property(nonatomic, readonly) NSString *otpLength; // @synthesize otpLength;
@property(nonatomic, readonly) NSString *otpNumberMatch; // @synthesize otpNumberMatch;

@end

