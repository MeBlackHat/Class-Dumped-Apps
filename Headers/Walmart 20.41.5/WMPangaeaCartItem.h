//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WalmartCore/PangaeaCartItem-Protocol.h>

@class NSNumber, NSString;

@interface WMPangaeaCartItem : NSObject <PangaeaCartItem>
{
    NSString *_offerId;
    NSNumber *_quantity;
    NSString *_careplanOfferId;
    NSString *_careplanGroupId;
    NSString *_homeServiceGroupId;
    NSString *_homeServiceOfferId;
    NSString *_whiteGloveServiceCode;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *whiteGloveServiceCode; // @synthesize whiteGloveServiceCode=_whiteGloveServiceCode;
@property(copy, nonatomic) NSString *homeServiceOfferId; // @synthesize homeServiceOfferId=_homeServiceOfferId;
@property(copy, nonatomic) NSString *homeServiceGroupId; // @synthesize homeServiceGroupId=_homeServiceGroupId;
@property(copy, nonatomic) NSString *careplanGroupId; // @synthesize careplanGroupId=_careplanGroupId;
@property(copy, nonatomic) NSString *careplanOfferId; // @synthesize careplanOfferId=_careplanOfferId;
@property(retain, nonatomic) NSNumber *quantity; // @synthesize quantity=_quantity;
@property(copy, nonatomic) NSString *offerId; // @synthesize offerId=_offerId;
- (id)toDictionary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

