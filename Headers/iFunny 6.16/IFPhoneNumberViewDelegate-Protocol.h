//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSError, NSObject, NSString;
@protocol IFCountryCodeModelDelegate;

@protocol IFPhoneNumberViewDelegate
- (void)showAlertWithError:(NSError *)arg1;
- (void)confirmPhoneNumber:(NSString *)arg1 useCase:(unsigned long long)arg2;
- (void)showTermsOfService;
- (void)chooseCountryForDelegate:(NSObject<IFCountryCodeModelDelegate> *)arg1;
- (void)updateNextButton;
- (void)dismissActivityView;
- (void)displayActivityView;
@end

