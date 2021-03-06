//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSObject, NSString, NSURL, SQPBFranklinAppInitiatePaymentRequest, SQPBFranklinCommonTransferFundsRequest, SQPBFranklinUiPaymentHistoryData, SQPBFranklinUiUiPayment;
@protocol OS_dispatch_queue;

@protocol PaymentHistoryDataFactory
- (void)updateBitcoinDisplayUnitPreference:(int)arg1;
- (void)updateFeatureFlags:(NSArray *)arg1;
- (SQPBFranklinUiUiPayment *)uiPaymentWithOfflineTransferFundsRequest:(SQPBFranklinCommonTransferFundsRequest *)arg1;
- (SQPBFranklinUiUiPayment *)uiPaymentWithOfflinePaymentRequest:(SQPBFranklinAppInitiatePaymentRequest *)arg1;
- (SQPBFranklinUiPaymentHistoryData *)historyDataWithPaymentRenderData:(NSString *)arg1 senderRenderData:(NSString *)arg2 recipientRenderData:(NSString *)arg3 receiptRenderData:(NSString *)arg4 loyaltyRenderData:(NSString *)arg5;
- (void)updateFactoryWithJSSourceURL:(NSURL *)arg1;
- (void)executeOnceFactoryIsLoadedOnQueue:(NSObject<OS_dispatch_queue> *)arg1 withBlock:(void (^)(void))arg2;
@end

