//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAPaymentBaseHandler.h"

@protocol WAPaymentBaseHandlerDelegate;

@interface WAPaymentIDWalletVerificationHandler : WAPaymentBaseHandler
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: isUserInitiated
    // Error parsing type: , name: currentHandler
    // Error parsing type: , name: errorHandler
    // Error parsing type: , name: mediaUploader
    // Error parsing type: , name: paymentManager
    // Error parsing type: , name: credentialId
    // Error parsing type: , name: provider
    // Error parsing type: , name: providerKeyManager
    // Error parsing type: , name: providerKey
    // Error parsing type: , name: encryptedMotherMaidenName
    // Error parsing type: , name: ktpImageDirectPath
    // Error parsing type: , name: selfieImageDirectPath
    // Error parsing type: , name: mediaKey
    // Error parsing type: , name: clientPublicKey
}

- (void).cxx_destruct;
- (id)initWithRootViewController:(id)arg1 paymentManager:(id)arg2 credentialId:(id)arg3 provider:(id)arg4 mediaUploader:(id)arg5;
@property(nonatomic) __weak id <WAPaymentBaseHandlerDelegate> delegate; // @synthesize delegate;

@end

