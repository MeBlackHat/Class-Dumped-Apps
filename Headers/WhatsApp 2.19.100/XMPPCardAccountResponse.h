//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPPAccountResponse.h"

@class NSString;

@interface XMPPCardAccountResponse : XMPPAccountResponse
{
    int _type;
    NSString *_bankCode;
    NSString *_bankName;
    NSString *_bankPhoneNumber;
    NSString *_expiryMonth;
    NSString *_expiryYear;
    NSString *_last4;
    NSString *_typeValue;
    NSString *_dateLastAdded;
    NSString *_networkTypeValue;
}

+ (id)responseFromStanza:(id)arg1;
@property(copy, nonatomic) NSString *networkTypeValue; // @synthesize networkTypeValue=_networkTypeValue;
@property(copy, nonatomic) NSString *dateLastAdded; // @synthesize dateLastAdded=_dateLastAdded;
@property(copy, nonatomic) NSString *typeValue; // @synthesize typeValue=_typeValue;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *last4; // @synthesize last4=_last4;
@property(copy, nonatomic) NSString *expiryYear; // @synthesize expiryYear=_expiryYear;
@property(copy, nonatomic) NSString *expiryMonth; // @synthesize expiryMonth=_expiryMonth;
@property(copy, nonatomic) NSString *bankPhoneNumber; // @synthesize bankPhoneNumber=_bankPhoneNumber;
@property(copy, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
@property(copy, nonatomic) NSString *bankCode; // @synthesize bankCode=_bankCode;
- (void).cxx_destruct;
- (id)description;
- (id)initWithStanza:(id)arg1;

@end

