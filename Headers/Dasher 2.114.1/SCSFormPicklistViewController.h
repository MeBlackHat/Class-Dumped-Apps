//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ServiceChat/SCAppearanceApplicator-Protocol.h>
#import <ServiceChat/SCSFormFieldViewController-Protocol.h>
#import <ServiceChat/UIPickerViewDataSource-Protocol.h>
#import <ServiceChat/UIPickerViewDelegate-Protocol.h>
#import <ServiceChat/UITextViewDelegate-Protocol.h>

@class MultiCastDelegateManager, NSMutableArray, NSMutableDictionary, NSObject, NSString, SCSFormFieldViewModel, SCSFormPicklistView;
@protocol SCSFormFieldViewControllerDelegate;

@interface SCSFormPicklistViewController : UIViewController <UITextViewDelegate, UIPickerViewDataSource, UIPickerViewDelegate, SCAppearanceApplicator, SCSFormFieldViewController>
{
    _Bool _valid;
    NSObject<SCSFormFieldViewControllerDelegate> *_delegate;
    SCSFormFieldViewModel *_fieldViewModel;
    NSMutableDictionary *_picklistDictionary;
    NSMutableArray *_picklistLabelArray;
    MultiCastDelegateManager *_delegateManager;
}

+ (void)applyAppearanceForConfiguration:(id)arg1;
@property(retain, nonatomic) MultiCastDelegateManager *delegateManager; // @synthesize delegateManager=_delegateManager;
@property(retain, nonatomic) NSMutableArray *picklistLabelArray; // @synthesize picklistLabelArray=_picklistLabelArray;
@property(retain, nonatomic) NSMutableDictionary *picklistDictionary; // @synthesize picklistDictionary=_picklistDictionary;
@property(retain, nonatomic) SCSFormFieldViewModel *fieldViewModel; // @synthesize fieldViewModel=_fieldViewModel;
@property(nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(nonatomic) __weak NSObject<SCSFormFieldViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)picklistLabelForValue:(id)arg1;
- (id)picklistValueForLabel:(id)arg1;
- (void)resetFieldData;
- (id)fieldName;
- (id)fieldValue;
- (void)validateField;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)isFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)loadView;
- (void)registerDelegates;
- (id)initWithField:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SCSFormPicklistView *view; // @dynamic view;

@end

