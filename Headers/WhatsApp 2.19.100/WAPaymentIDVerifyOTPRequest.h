//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAPaymentRequest.h"

@interface WAPaymentIDVerifyOTPRequest : WAPaymentRequest
{
    // Error parsing type: , name: providerId
    // Error parsing type: , name: otp
    // Error parsing type: , name: otpRefId
    // Error parsing type: , name: otpType
    // Error parsing type: , name: deviceId
}

+ (id)identifierWithProviderId:(id)arg1 otpType:(id)arg2 otpRefId:(id)arg3;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 input:(id)arg2;
- (id)initWithDefaultInputAndIdentifier:(id)arg1;
- (void)executeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProviderId:(id)arg1 otp:(id)arg2 otpRefId:(id)arg3 otpType:(id)arg4 deviceId:(id)arg5;

@end

