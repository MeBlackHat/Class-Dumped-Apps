//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SQPBCommonMoney, SQPBFranklinApiInstrument, SQPBFranklinCommonRequestContext;

@interface SQPBFranklinCommonTransferFundsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SQPBCommonMoney *acceptedFeeAmount; // @dynamic acceptedFeeAmount;
@property(retain, nonatomic) SQPBCommonMoney *amount; // @dynamic amount;
@property(copy, nonatomic) NSString *contractToken; // @dynamic contractToken;
@property(nonatomic) int depositPreference; // @dynamic depositPreference;
@property(copy, nonatomic) NSString *externalId; // @dynamic externalId;
@property(nonatomic) _Bool hasAcceptedFeeAmount; // @dynamic hasAcceptedFeeAmount;
@property(nonatomic) _Bool hasAmount; // @dynamic hasAmount;
@property(nonatomic) _Bool hasContractToken; // @dynamic hasContractToken;
@property(nonatomic) _Bool hasDepositPreference; // @dynamic hasDepositPreference;
@property(nonatomic) _Bool hasExternalId; // @dynamic hasExternalId;
@property(nonatomic) _Bool hasPasscode; // @dynamic hasPasscode;
@property(nonatomic) _Bool hasPasscodeToken; // @dynamic hasPasscodeToken;
@property(nonatomic) _Bool hasPullCurrency; // @dynamic hasPullCurrency;
@property(nonatomic) _Bool hasPushCurrency; // @dynamic hasPushCurrency;
@property(nonatomic) _Bool hasRequestContext; // @dynamic hasRequestContext;
@property(nonatomic) _Bool hasSource; // @dynamic hasSource;
@property(nonatomic) _Bool hasTarget; // @dynamic hasTarget;
@property(copy, nonatomic) NSString *passcode; // @dynamic passcode;
@property(copy, nonatomic) NSString *passcodeToken; // @dynamic passcodeToken;
@property(nonatomic) int pullCurrency; // @dynamic pullCurrency;
@property(nonatomic) int pushCurrency; // @dynamic pushCurrency;
@property(retain, nonatomic) SQPBFranklinCommonRequestContext *requestContext; // @dynamic requestContext;
@property(retain, nonatomic) SQPBFranklinApiInstrument *source; // @dynamic source;
@property(retain, nonatomic) SQPBFranklinApiInstrument *target; // @dynamic target;

@end

