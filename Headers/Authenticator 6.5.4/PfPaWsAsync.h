//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SoapWebService.h"

@interface PfPaWsAsync : SoapWebService
{
}

+ (id)service;
- (void)ConfirmActivation:(id)arg1;
- (void)onConfirmActivationReceived:(id)arg1;
- (void)ActivateNew:(id)arg1;
- (void)onActivateNewReceived:(id)arg1;
- (void)Activate:(id)arg1 deviceToken:(id)arg2 deviceName:(id)arg3;
- (void)onActivateReceived:(id)arg1;
- (void)TestPfWsSdkConnection;
- (void)onTestPfWsSdkConnectionReceived:(id)arg1;
- (void)TestSecurity;
- (void)onTestSecurityReceived:(id)arg1;
- (id)getNamespaces;
- (id)init;

@end

