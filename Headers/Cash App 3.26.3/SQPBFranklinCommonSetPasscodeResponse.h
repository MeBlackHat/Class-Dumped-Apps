//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SQPBFranklinApiInstrument, SQPBFranklinApiTransfer, SQPBFranklinCommonIssuedCard, SQPBFranklinCommonResponseContext, SQPBFranklinCommonScenariosScenarioPlan, SQPBFranklinStatusResult;

@interface SQPBFranklinCommonSetPasscodeResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SQPBFranklinApiInstrument *balanceInstrument; // @dynamic balanceInstrument;
@property(nonatomic) _Bool hasBalanceInstrument; // @dynamic hasBalanceInstrument;
@property(nonatomic) _Bool hasIssuedCard; // @dynamic hasIssuedCard;
@property(nonatomic) _Bool hasMessage; // @dynamic hasMessage;
@property(nonatomic) _Bool hasPasscodeToken; // @dynamic hasPasscodeToken;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(nonatomic) _Bool hasScenarioPlan; // @dynamic hasScenarioPlan;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasStatusResult; // @dynamic hasStatusResult;
@property(nonatomic) _Bool hasTransfer; // @dynamic hasTransfer;
@property(retain, nonatomic) SQPBFranklinCommonIssuedCard *issuedCard; // @dynamic issuedCard;
@property(copy, nonatomic) NSString *message; // @dynamic message;
@property(copy, nonatomic) NSString *passcodeToken; // @dynamic passcodeToken;
@property(retain, nonatomic) NSMutableArray *paymentsArray; // @dynamic paymentsArray;
@property(readonly, nonatomic) unsigned long long paymentsArray_Count; // @dynamic paymentsArray_Count;
@property(retain, nonatomic) SQPBFranklinCommonResponseContext *responseContext; // @dynamic responseContext;
@property(retain, nonatomic) SQPBFranklinCommonScenariosScenarioPlan *scenarioPlan; // @dynamic scenarioPlan;
@property(nonatomic) int status; // @dynamic status;
@property(retain, nonatomic) SQPBFranklinStatusResult *statusResult; // @dynamic statusResult;
@property(retain, nonatomic) SQPBFranklinApiTransfer *transfer; // @dynamic transfer;

@end

