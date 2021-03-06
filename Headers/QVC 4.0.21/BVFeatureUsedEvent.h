//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BVSDK/BVAnalyticEvent-Protocol.h>

@class NSDictionary, NSString;

@interface BVFeatureUsedEvent : NSObject <BVAnalyticEvent>
{
    NSDictionary *additionalParams;
    NSString *_productId;
    NSString *_brand;
    long long _bvProduct;
    long long _eventName;
}

@property(readonly, nonatomic) long long eventName; // @synthesize eventName=_eventName;
@property(readonly, nonatomic) long long bvProduct; // @synthesize bvProduct=_bvProduct;
@property(readonly, nonatomic) NSString *brand; // @synthesize brand=_brand;
@property(readonly, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSDictionary *additionalParams; // @synthesize additionalParams;
- (void).cxx_destruct;
- (id)toRaw;
- (id)initWithProductId:(id)arg1 withBrand:(id)arg2 withProductType:(long long)arg3 withEventName:(long long)arg4 withAdditionalParams:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

