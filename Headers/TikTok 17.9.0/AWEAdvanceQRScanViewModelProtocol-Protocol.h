//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEScanGuideModel, NSDictionary, NSString;

@protocol AWEAdvanceQRScanViewModelProtocol <NSObject>
@property(readonly) _Bool isHandlingResult;
@property(readonly) _Bool needRemoveCamerawhenPushed;
@property(readonly) _Bool needRemoveSelfWhenFinishLogin;
@property(readonly) _Bool needRemoveSelfWhenPushed;
@property(copy, nonatomic) NSString *feature;
@property(readonly, copy) NSString *routerURL;
@property(readonly) AWEScanGuideModel *scanGuideModel;
@property(readonly) long long cameraType;
- (_Bool)isCompanyCouponVerification;
- (void)clearNeedRemoveSelfWhenPushed;
- (void)handleScanEntityResult:(NSString *)arg1 extraInfo:(NSDictionary *)arg2;
- (void)handleScanResult:(NSString *)arg1 isShapedType:(_Bool)arg2 enterFrom:(NSString *)arg3;
- (void)handleScanResult:(NSString *)arg1 enterFrom:(NSString *)arg2;
@end

