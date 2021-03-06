//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class GIPCreditCardRecognizer, NSDate, NSString, UIImage;

@protocol GIPCreditCardRecognizerDelegate <NSObject>

@optional
- (void)cardRecognizer:(GIPCreditCardRecognizer *)arg1 foundCardImage:(UIImage *)arg2;
- (void)creditCardRecognizerFailedToRecognizeCard:(GIPCreditCardRecognizer *)arg1;
- (void)creditCardRecognizer:(GIPCreditCardRecognizer *)arg1 recognizedCardWithNumber:(NSString *)arg2 expirationDate:(NSDate *)arg3;
- (void)creditCardRecognizerFoundCard:(GIPCreditCardRecognizer *)arg1;
- (void)creditCardRecognizerFailedToFindCard:(GIPCreditCardRecognizer *)arg1;
- (void)creditCardRecognizerReceivedBlurryImage:(GIPCreditCardRecognizer *)arg1;
@end

