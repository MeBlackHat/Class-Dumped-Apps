//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Smooch/SKTSOMessageCell.h>

#import <Smooch/UITextViewDelegate-Protocol.h>

@class NSMutableArray, NSString, SKTTextViewVendingMachine, UITextView;

@interface SKTSOTextMessageCell : SKTSOMessageCell <UITextViewDelegate>
{
    SKTTextViewVendingMachine *_vendingMachine;
    NSMutableArray *_actionButtons;
    UITextView *_textView;
}

+ (id)fontForAction:(id)arg1;
+ (_Bool)isPurchasedAction:(id)arg1;
+ (id)textForAction:(id)arg1;
+ (id)measurementLabelView;
+ (double)extraHeightForMessage:(id)arg1 withWidth:(double)arg2;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain) NSMutableArray *actionButtons; // @synthesize actionButtons=_actionButtons;
@property(retain) SKTTextViewVendingMachine *vendingMachine; // @synthesize vendingMachine=_vendingMachine;
- (void).cxx_destruct;
- (void)adjustContentBelowFrame:(struct CGRect)arg1;
- (_Bool)hasLocationRequestAction;
- (_Bool)hasReplyActions;
- (_Bool)isLocationRequestAction:(id)arg1;
- (_Bool)isReplyAction:(id)arg1;
- (void)actionButtonTapped:(id)arg1;
- (id)newButton;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)layoutBubbleWithFixedWidth:(_Bool)arg1 withFrame:(struct CGRect)arg2;
- (void)layoutContentWithFixedWidth:(_Bool)arg1 value:(double)arg2;
- (void)layoutContentWithFixedWidth:(double)arg1;
- (void)layoutContent;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 vendingMachine:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

