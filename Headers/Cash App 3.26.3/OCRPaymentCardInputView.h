//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "PCCCameraViewDelegate-Protocol.h"
#import "SQTextFieldDelegate-Protocol.h"

@class NSString, PCCCameraView, SCCheckmarkView, SQNumericTextField, SQTextField, UILabel, _TtC10UIControls29RotatingActivityIndicatorView;
@protocol OCRPaymentCardInputViewDelegate, OCRPaymentCardInputViewThemingSource;

@interface OCRPaymentCardInputView : UIView <SQTextFieldDelegate, PCCCameraViewDelegate>
{
    _Bool _charactersDidChange;
    _Bool _animatingBetweenInputStates;
    PCCCameraView *_videoPreviewView;
    id <OCRPaymentCardInputViewThemingSource> _themingSource;
    id <OCRPaymentCardInputViewDelegate> _delegate;
    unsigned long long _inputState;
    UILabel *_messageLabel;
    SQNumericTextField *_expirationField;
    SQNumericTextField *_CVVField;
    SQNumericTextField *_postalCodeField;
    UIView *_cardOverlayContainerView;
    UIView *_cardInputsContainerView;
    _TtC10UIControls29RotatingActivityIndicatorView *_loadingSpinner;
    SCCheckmarkView *_checkmarkView;
    SQTextField *_invalidTextField;
    NSString *_stringToForwardToNextTextField;
    NSString *_countryCode;
}

+ (id)_overlayTranslucentWhiteStrokeColor;
+ (id)overlayPlaceholderTextColor;
+ (id)newOCRPaymentCardInputView;
@property(nonatomic, getter=isAnimatingBetweenInputStates) _Bool animatingBetweenInputStates; // @synthesize animatingBetweenInputStates=_animatingBetweenInputStates;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(nonatomic) _Bool charactersDidChange; // @synthesize charactersDidChange=_charactersDidChange;
@property(retain, nonatomic) NSString *stringToForwardToNextTextField; // @synthesize stringToForwardToNextTextField=_stringToForwardToNextTextField;
@property(retain, nonatomic) SQTextField *invalidTextField; // @synthesize invalidTextField=_invalidTextField;
@property(retain, nonatomic) SCCheckmarkView *checkmarkView; // @synthesize checkmarkView=_checkmarkView;
@property(retain, nonatomic) _TtC10UIControls29RotatingActivityIndicatorView *loadingSpinner; // @synthesize loadingSpinner=_loadingSpinner;
@property(retain, nonatomic) UIView *cardInputsContainerView; // @synthesize cardInputsContainerView=_cardInputsContainerView;
@property(retain, nonatomic) UIView *cardOverlayContainerView; // @synthesize cardOverlayContainerView=_cardOverlayContainerView;
@property(retain, nonatomic) SQNumericTextField *postalCodeField; // @synthesize postalCodeField=_postalCodeField;
@property(retain, nonatomic) SQNumericTextField *CVVField; // @synthesize CVVField=_CVVField;
@property(retain, nonatomic) SQNumericTextField *expirationField; // @synthesize expirationField=_expirationField;
@property(readonly, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(readonly, nonatomic) unsigned long long inputState; // @synthesize inputState=_inputState;
@property(nonatomic) __weak id <OCRPaymentCardInputViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <OCRPaymentCardInputViewThemingSource> themingSource; // @synthesize themingSource=_themingSource;
@property(retain, nonatomic) PCCCameraView *videoPreviewView; // @synthesize videoPreviewView=_videoPreviewView;
- (void).cxx_destruct;
- (void)cameraView:(id)arg1 didDetectCardImage:(id)arg2 device:(id)arg3;
- (_Bool)_isUserInputCompleted;
- (void)_didUpdateInputState;
- (void)_textFieldTextDidChange:(id)arg1;
- (id)_textFieldToRetreatToFromTextField:(id)arg1;
- (_Bool)_shouldRetreatFromTextField:(id)arg1;
- (void)_retreatToPreviousTextField;
- (id)textFieldToAdvanceToFromTextField:(id)arg1 skipCompleted:(_Bool)arg2;
- (_Bool)shouldAdvanceToTextFieldAfterTextField:(id)arg1;
- (void)_advanceToNextIncompleteTextField;
- (void)_updatePostalCodeFieldKeyboard;
- (void)textField:(id)arg1 didFailToValidatePartialString:(id)arg2 error:(id)arg3;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textField:(id)arg1 didDeleteBackwardWithSelectedTextRange:(id)arg2;
- (void)_addResizingConstraintsToView:(id)arg1 withView:(id)arg2;
- (id)_allFields;
- (id)_allThemableViews;
- (void)_applyThemingSource;
- (void)_applyDefaultTheme;
- (id)_activeViewForInputState:(unsigned long long)arg1;
- (void)_fallBackToPreviousState;
- (void)setInputState:(unsigned long long)arg1;
- (void)advanceToSuccessState;
- (void)advanceToExpirationState;
- (void)advanceToPostalCodeState;
- (void)advanceToCaptureCardState;
- (void)advanceToCaptureDisabledState;
- (void)advanceToNextState;
- (id)firstResponderTextField;
- (void)showInvalidStateForTextField:(id)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

