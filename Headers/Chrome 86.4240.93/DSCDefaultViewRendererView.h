//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/DSCContentView.h>

@class UIButton, UILabel;

@interface DSCDefaultViewRendererView : DSCContentView
{
    id _cardData;
    UILabel *_placeHolderLabel;
    UIButton *_dismissButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(readonly, nonatomic) UILabel *placeHolderLabel; // @synthesize placeHolderLabel=_placeHolderLabel;
@property(retain, nonatomic) id cardData; // @synthesize cardData=_cardData;
- (void)dismissPressed:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

