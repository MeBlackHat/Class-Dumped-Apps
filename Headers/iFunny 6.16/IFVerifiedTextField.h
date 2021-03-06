//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IFTextField.h>

@class NSObject, UIActivityIndicatorView, UIImageView;
@protocol IFTextFieldValidatorProtocol, IFVerifiedTextFieldDelegate;

@interface IFVerifiedTextField : IFTextField
{
    NSObject<IFVerifiedTextFieldDelegate> *_verifyDelegate;
    unsigned long long _verifyState;
    NSObject<IFTextFieldValidatorProtocol> *_validator;
    UIImageView *_verifiedImageView;
    UIActivityIndicatorView *_activityIndicator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIImageView *verifiedImageView; // @synthesize verifiedImageView=_verifiedImageView;
@property(nonatomic) __weak NSObject<IFTextFieldValidatorProtocol> *validator; // @synthesize validator=_validator;
@property(nonatomic) unsigned long long verifyState; // @synthesize verifyState=_verifyState;
@property(nonatomic) __weak NSObject<IFVerifiedTextFieldDelegate> *verifyDelegate; // @synthesize verifyDelegate=_verifyDelegate;
- (void)setTextValue:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)textFieldDidChanged:(id)arg1;
- (void)setup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

