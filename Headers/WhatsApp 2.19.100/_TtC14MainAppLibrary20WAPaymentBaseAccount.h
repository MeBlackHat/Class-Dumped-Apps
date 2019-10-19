//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;
@protocol WAServerDate;

@interface _TtC14MainAppLibrary20WAPaymentBaseAccount : NSObject
{
    // Error parsing type: , name: balance_1000
    // Error parsing type: , name: balanceTimestamp
    // Error parsing type: , name: bankIcon
    // Error parsing type: , name: bankName
    // Error parsing type: , name: countryCode
    // Error parsing type: , name: credentialId
    // Error parsing type: , name: dateCreated
    // Error parsing type: , name: defaultPayment
    // Error parsing type: , name: defaultPayout
    // Error parsing type: , name: subtype
    // Error parsing type: , name: title
    // Error parsing type: , name: type
    // Error parsing type: , name: encodedMetadata
    // Error parsing type: , name: decodedMetadata.storage
}

+ (id)accountFromResponse:(id)arg1;
+ (id)accountFromPaymentAccount:(id)arg1;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (void)updateMetadataWithResponse:(id)arg1;
- (void)updateWithResponse:(id)arg1;
- (id)initWithPaymentAccount:(id)arg1;
@property(nonatomic, readonly) _Bool verified;
@property(nonatomic, readonly) _Bool merchantPaymentEligible;
@property(nonatomic, readonly) _Bool peerPaymentEligible;
@property(nonatomic, readonly) NSString *iconURLString;
@property(nonatomic, readonly) NSString *shortNameForDisplay;
@property(nonatomic, readonly) NSString *fullNameForDisplay;
@property(nonatomic, readonly) NSString *nameForDisplay;
@property(nonatomic) _Bool wasUsedForPayment;
- (id)archivedMetadata;
@property(nonatomic) int type; // @synthesize type;
@property(nonatomic, copy) NSString *title; // @synthesize title;
@property(nonatomic, copy) NSString *subtype; // @synthesize subtype;
@property(nonatomic) _Bool defaultPayout; // @synthesize defaultPayout;
@property(nonatomic) _Bool defaultPayment; // @synthesize defaultPayment;
@property(nonatomic, copy) NSDate *dateCreated; // @synthesize dateCreated;
@property(nonatomic, readonly) NSString *credentialId; // @synthesize credentialId;
@property(nonatomic, copy) NSString *countryCode; // @synthesize countryCode;
@property(nonatomic, copy) NSString *bankName; // @synthesize bankName;
@property(nonatomic, copy) NSString *bankIcon; // @synthesize bankIcon;
@property(nonatomic, retain) NSDate<WAServerDate> *balanceTimestamp; // @synthesize balanceTimestamp;
@property(nonatomic) long long balance_1000; // @synthesize balance_1000;

@end

