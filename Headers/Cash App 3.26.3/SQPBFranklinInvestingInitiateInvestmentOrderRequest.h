//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SQPBCommonMoney, SQPBFranklinCommonRequestContext, SQPBFranklinInvestingResourcesCustomOrder, SQPBRepeatedlyCommonRecurringSchedule;

@interface SQPBFranklinInvestingInitiateInvestmentOrderRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SQPBCommonMoney *amount; // @dynamic amount;
@property(retain, nonatomic) SQPBFranklinInvestingResourcesCustomOrder *customOrder; // @dynamic customOrder;
@property(nonatomic) _Bool hasCustomOrder; // @dynamic hasCustomOrder;
@property(nonatomic) _Bool hasIdempotenceToken; // @dynamic hasIdempotenceToken;
@property(nonatomic) _Bool hasInstrumentToken; // @dynamic hasInstrumentToken;
@property(nonatomic) _Bool hasInvestmentEntityToken; // @dynamic hasInvestmentEntityToken;
@property(nonatomic) _Bool hasInvestmentIncentiveToken; // @dynamic hasInvestmentIncentiveToken;
@property(nonatomic) _Bool hasOrderType; // @dynamic hasOrderType;
@property(nonatomic) _Bool hasRecurringSchedule; // @dynamic hasRecurringSchedule;
@property(nonatomic) _Bool hasRequestContext; // @dynamic hasRequestContext;
@property(nonatomic) _Bool hasSide; // @dynamic hasSide;
@property(copy, nonatomic) NSString *idempotenceToken; // @dynamic idempotenceToken;
@property(copy, nonatomic) NSString *instrumentToken; // @dynamic instrumentToken;
@property(copy, nonatomic) NSString *investmentEntityToken; // @dynamic investmentEntityToken;
@property(copy, nonatomic) NSString *investmentIncentiveToken; // @dynamic investmentIncentiveToken;
@property(nonatomic) int orderType; // @dynamic orderType;
@property(retain, nonatomic) SQPBRepeatedlyCommonRecurringSchedule *recurringSchedule; // @dynamic recurringSchedule;
@property(retain, nonatomic) SQPBFranklinCommonRequestContext *requestContext; // @dynamic requestContext;
@property(readonly, nonatomic) int requestValueOneOfCase; // @dynamic requestValueOneOfCase;
@property(nonatomic) int side; // @dynamic side;
@property(copy, nonatomic) NSString *units; // @dynamic units;

@end

