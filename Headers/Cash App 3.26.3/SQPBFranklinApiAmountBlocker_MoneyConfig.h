//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SQPBCommonMoney;

@interface SQPBFranklinApiAmountBlocker_MoneyConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMaximumAmount; // @dynamic hasMaximumAmount;
@property(nonatomic) _Bool hasMinimumAmount; // @dynamic hasMinimumAmount;
@property(retain, nonatomic) SQPBCommonMoney *maximumAmount; // @dynamic maximumAmount;
@property(retain, nonatomic) SQPBCommonMoney *minimumAmount; // @dynamic minimumAmount;

@end

