//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNCustomStatusUnderlineView.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, UITextField;
@protocol DYNColorSchemeService, DYNCustomStatusTextFieldDelegate;

@interface DYNCustomStatusTextField : DYNCustomStatusUnderlineView <UITextFieldDelegate>
{
    id <DYNColorSchemeService> _colorService;
    UIButton *_emojiButton;
    UIButton *_cancelButton;
    UIButton *_checkmarkButton;
    UILabel *_emojiLabel;
    UIImageView *_emojiIcon;
    UITextField *_textField;
    NSString *_emoji;
    NSString *_message;
    id <DYNCustomStatusTextFieldDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <DYNCustomStatusTextFieldDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *emoji; // @synthesize emoji=_emoji;
- (id)textFieldAttributesForPlaceholder:(_Bool)arg1;
- (void)updateClearButton;
- (void)hideClearButton;
- (id)configuredTextField;
- (void)updateCursorPosition:(id)arg1 range:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)exceedsMaxCharacterLimit:(id)arg1 range:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)updateAttributedTextField:(id)arg1 range:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)didHandleBackspaceCharacter:(id)arg1 replacementString:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)cancelButtonTapped;
- (void)emojiButtonTapped;
- (void)setUpSubviews;
- (_Bool)resignFirstResponder;
- (_Bool)isFirstResponder;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

