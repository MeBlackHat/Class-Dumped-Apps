//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVCaptureDevice, OCRPaymentCardInputView, SQTextField, UIImage;

@protocol OCRPaymentCardInputViewDelegate <NSObject>
- (void)OCRPaymentCardInputView:(OCRPaymentCardInputView *)arg1 completionStatusDidChange:(_Bool)arg2;
- (void)OCRPaymentCardInputView:(OCRPaymentCardInputView *)arg1 didChangeState:(unsigned long long)arg2 activeTextField:(SQTextField *)arg3;
- (void)OCRPaymentCardInputView:(OCRPaymentCardInputView *)arg1 didDetectCardImage:(UIImage *)arg2 device:(AVCaptureDevice *)arg3;
@end

