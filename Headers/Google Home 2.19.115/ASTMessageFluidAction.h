//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTCommunicationFluidAction.h"

@class ASTAPIMessageParams, ASTAPIShowNativeFormArgs_FormField;

@interface ASTMessageFluidAction : ASTCommunicationFluidAction
{
    ASTAPIMessageParams *_messageParam;
    ASTAPIShowNativeFormArgs_FormField *_textField;
}

@property(readonly, nonatomic) ASTAPIShowNativeFormArgs_FormField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) ASTAPIMessageParams *messageParam; // @synthesize messageParam=_messageParam;
- (void).cxx_destruct;
- (id)executionClientOp;
- (void)fulfillmentConfirmationCardActionField:(id)arg1;
- (id)clientOpsForSendMessageConfirmation;
- (id)clientOpsForSetMessage;
- (id)communicationFluidActionData;
- (id)clientOpsForCurrentState;
- (void)updateFluidActionState;
- (void)updateButtonContent:(id)arg1 forField:(id)arg2;
- (id)initWithForm:(id)arg1 params:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) ASTAPIShowNativeFormArgs_FormField *cancelButton; // @dynamic cancelButton;
@property(readonly, nonatomic) ASTAPIShowNativeFormArgs_FormField *confirmationButton; // @dynamic confirmationButton;

@end

