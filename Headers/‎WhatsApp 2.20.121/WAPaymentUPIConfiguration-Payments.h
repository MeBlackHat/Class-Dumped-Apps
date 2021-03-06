//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Payments/WAPaymentUPIConfiguration.h>

@class NSArray, NSString, WAPaymentMoney;

@interface WAPaymentUPIConfiguration (Payments)
@property(nonatomic, readonly) WAPaymentMoney *amountForCLPayUI;
@property(nonatomic, readonly) NSString *updatedMandateAmountWithCurrency;
- (id)copyWithZone:(void *)arg1;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) NSArray *payInfo;
@property(nonatomic, readonly) _Bool isPayToHandle;
- (void)updateToPayToHandle;
@property(nonatomic, readonly) _Bool sendable;
@property(nonatomic, readonly) _Bool canAttachNote;
@property(nonatomic, readonly) _Bool canChangeReceiver;
- (id)initWithSettingsData:(id)arg1 qrCode:(id)arg2 error:(id *)arg3;
- (id)getQRAmountOrRange;
@property(nonatomic, readonly) NSString *encodedInteropURLString;
- (id)initWithSettingsData:(id)arg1 interopURL:(id)arg2 error:(id *)arg3;
- (id)initWithSettingsData:(id)arg1 bharatQRString:(id)arg2 error:(id *)arg3;
- (id)initWithSettingsData:(id)arg1 upiCollectRequestTransaction:(id)arg2;
- (id)initWithSettingsData:(id)arg1 upiMandateWithUpdate:(id)arg2;
- (id)initWithSettingsData:(id)arg1 upiMandateToCancel:(id)arg2;
@end

