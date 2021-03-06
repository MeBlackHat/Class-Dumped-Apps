//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWSectionedTableViewController.h"

#import "AWFormController-Protocol.h"

@class AWForm, NSDictionary, NSString;

@interface AWTextFieldViewController : AWSectionedTableViewController <AWFormController>
{
    AWForm *form;
    NSDictionary *properties;
    NSString *saveButtonText;
    _Bool valueChanged;
    NSString *headerTitle;
    NSString *footerTitle;
}

@property(readonly, nonatomic) _Bool valueChanged; // @synthesize valueChanged;
- (void).cxx_destruct;
- (void)form:(id)arg1 shouldFocusInputNamed:(id)arg2;
- (void)form:(id)arg1 didBecomeComplete:(_Bool)arg2;
- (void)loadView;
- (void)textFieldChanged:(id)arg1;
- (void)updateRightBarButton;
- (void)save;
@property(readonly, nonatomic) NSString *value;
- (void)dealloc;
- (id)initWithValue:(id)arg1 validation:(id)arg2 properties:(id)arg3 saveButtonText:(id)arg4;
- (id)initWithValue:(id)arg1 validation:(id)arg2 properties:(id)arg3 saveButtonText:(id)arg4 headerTitle:(id)arg5 footerTitle:(id)arg6;

@end

