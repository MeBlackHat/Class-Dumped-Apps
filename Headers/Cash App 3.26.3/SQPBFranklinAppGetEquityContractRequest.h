//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SQPBFranklinCommonRequestContext;

@interface SQPBFranklinAppGetEquityContractRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long amount; // @dynamic amount;
@property(nonatomic) int amountType; // @dynamic amountType;
@property(nonatomic) _Bool hasAmount; // @dynamic hasAmount;
@property(nonatomic) _Bool hasAmountType; // @dynamic hasAmountType;
@property(nonatomic) _Bool hasRequestContext; // @dynamic hasRequestContext;
@property(nonatomic) _Bool hasSymbol; // @dynamic hasSymbol;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) _Bool hasUsdStoredValueToken; // @dynamic hasUsdStoredValueToken;
@property(retain, nonatomic) SQPBFranklinCommonRequestContext *requestContext; // @dynamic requestContext;
@property(copy, nonatomic) NSString *symbol; // @dynamic symbol;
@property(nonatomic) int type; // @dynamic type;
@property(copy, nonatomic) NSString *usdStoredValueToken; // @dynamic usdStoredValueToken;

@end

