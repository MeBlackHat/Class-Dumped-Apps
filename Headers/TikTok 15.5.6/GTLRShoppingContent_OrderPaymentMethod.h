//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRShoppingContent_OrderAddress, NSNumber, NSString;

@interface GTLRShoppingContent_OrderPaymentMethod : GTLRObject
{
}


// Remaining properties
@property(retain, nonatomic) GTLRShoppingContent_OrderAddress *billingAddress; // @dynamic billingAddress;
@property(retain, nonatomic) NSNumber *expirationMonth; // @dynamic expirationMonth;
@property(retain, nonatomic) NSNumber *expirationYear; // @dynamic expirationYear;
@property(copy, nonatomic) NSString *lastFourDigits; // @dynamic lastFourDigits;
@property(copy, nonatomic) NSString *phoneNumber; // @dynamic phoneNumber;
@property(copy, nonatomic) NSString *type; // @dynamic type;
@end

