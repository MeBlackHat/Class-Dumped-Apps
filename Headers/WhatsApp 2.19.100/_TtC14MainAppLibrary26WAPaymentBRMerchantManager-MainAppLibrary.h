//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC14MainAppLibrary26WAPaymentBRMerchantManager.h"

@interface _TtC14MainAppLibrary26WAPaymentBRMerchantManager (MainAppLibrary)
- (void)saveMerchantAccountForResponse:(id)arg1;
- (void)registerHandlersForPersistentRequestManager:(id)arg1;
- (id)requestLinkMerchantWithSerialNumber:(id)arg1 verifyID:(id)arg2 nonce:(id)arg3;
- (id)requestLinkMerchantWithBankToken:(id)arg1 bank:(id)arg2 verifyID:(id)arg3 nonce:(id)arg4;
- (id)requestRegisterMerchantWithTaxID:(id)arg1 nonce:(id)arg2 businessName:(id)arg3 businessAddress:(id)arg4 email:(id)arg5 ownerName:(id)arg6 ownerDOB:(id)arg7 ownerCPF:(id)arg8 bankToken:(id)arg9 payoutBank:(id)arg10;
- (id)requestMerchantGetBanks;
- (id)requestMerchantAccountStatusWithTaxID:(id)arg1;
@end

