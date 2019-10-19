//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAPaymentRequest.h"

@class NSString;

@interface WAPaymentUPIBindDeviceRequest : WAPaymentRequest
{
    _Bool _cancelSubsequentRetries;
    NSString *_bankCode;
    NSString *_deviceId;
    NSString *_providerType;
    NSString *_smsPhoneNumber;
    double _smsTime;
    NSString *_verificationData;
}

+ (id)deviceBindingRetryDelayIntervals;
+ (id)identifier;
@property(readonly, copy, nonatomic) NSString *verificationData; // @synthesize verificationData=_verificationData;
@property(readonly, nonatomic) double smsTime; // @synthesize smsTime=_smsTime;
@property(readonly, copy, nonatomic) NSString *smsPhoneNumber; // @synthesize smsPhoneNumber=_smsPhoneNumber;
@property(readonly, copy, nonatomic) NSString *providerType; // @synthesize providerType=_providerType;
@property(readonly, copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(readonly, copy, nonatomic) NSString *bankCode; // @synthesize bankCode=_bankCode;
- (void).cxx_destruct;
- (void)cancelSubsequentRetries;
- (double)internalDelayBeforeRetry;
- (_Bool)canBegin;
- (void)executeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithDeviceId:(id)arg1 verificationData:(id)arg2 bankCode:(id)arg3 providerType:(id)arg4 smsPhoneNumber:(id)arg5 smsTime:(double)arg6;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

