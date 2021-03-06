//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class NSMutableArray, NSString;

@interface GMSx_GMTTDealTreatment : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *customCalloutMessage; // @dynamic customCalloutMessage;
@property(nonatomic) int dealType; // @dynamic dealType;
@property(copy, nonatomic) NSString *discountAmount; // @dynamic discountAmount;
@property(nonatomic) int discountPctUpperbound; // @dynamic discountPctUpperbound;
@property(nonatomic) int discountPercent; // @dynamic discountPercent;
@property(nonatomic) _Bool hasCustomCalloutMessage; // @dynamic hasCustomCalloutMessage;
@property(nonatomic) _Bool hasDealType; // @dynamic hasDealType;
@property(nonatomic) _Bool hasDiscountAmount; // @dynamic hasDiscountAmount;
@property(nonatomic) _Bool hasDiscountPctUpperbound; // @dynamic hasDiscountPctUpperbound;
@property(nonatomic) _Bool hasDiscountPercent; // @dynamic hasDiscountPercent;
@property(nonatomic) _Bool hasHiddenPriceMessage; // @dynamic hasHiddenPriceMessage;
@property(nonatomic) _Bool hasRegularPrice; // @dynamic hasRegularPrice;
@property(nonatomic) _Bool hasRequiresLoyaltySignup; // @dynamic hasRequiresLoyaltySignup;
@property(nonatomic) _Bool hasVeType; // @dynamic hasVeType;
@property(copy, nonatomic) NSString *hiddenPriceMessage; // @dynamic hiddenPriceMessage;
@property(retain, nonatomic) NSMutableArray *includedFreeHotelAmenityArray; // @dynamic includedFreeHotelAmenityArray;
@property(readonly, nonatomic) unsigned long long includedFreeHotelAmenityArray_Count; // @dynamic includedFreeHotelAmenityArray_Count;
@property(copy, nonatomic) NSString *regularPrice; // @dynamic regularPrice;
@property(nonatomic) _Bool requiresLoyaltySignup; // @dynamic requiresLoyaltySignup;
@property(nonatomic) int veType; // @dynamic veType;

@end

