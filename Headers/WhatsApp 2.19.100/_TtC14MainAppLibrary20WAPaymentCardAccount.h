//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC14MainAppLibrary20WAPaymentBaseAccount.h"

@class NSDate, NSString;

@interface _TtC14MainAppLibrary20WAPaymentCardAccount : _TtC14MainAppLibrary20WAPaymentBaseAccount
{
    // Error parsing type: , name: cardType
}

- (void)updateWithResponse:(id)arg1;
- (id)initWithPaymentAccount:(id)arg1;
@property(nonatomic, readonly) NSString *shortNameForDisplay;
@property(nonatomic, readonly) NSString *fullNameForDisplay;
@property(nonatomic, readonly) NSString *nameForDisplay;
@property(nonatomic, readonly) long long network;
@property(nonatomic, readonly) NSDate *dateLastAdded;
@property(nonatomic, readonly) long long expiryYear;
@property(nonatomic, readonly) long long expiryMonth;
@property(nonatomic, readonly) NSString *last4;
@property(nonatomic, readonly) NSString *bankPhoneNumber;
@property(nonatomic, readonly) NSString *bankCode;
@property(nonatomic, readonly) NSString *iconURLString;
@property(nonatomic, readonly) long long cardType; // @synthesize cardType;

@end

