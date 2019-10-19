//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class _WACustomSeparatorView;

@interface WANotificationSoundPickerCell : UITableViewCell
{
    _WACustomSeparatorView *_separator;
    _Bool _soundSelected;
    _Bool _doubleSeparator;
    double _textMargin;
}

@property(nonatomic) _Bool doubleSeparator; // @synthesize doubleSeparator=_doubleSeparator;
@property(nonatomic) _Bool soundSelected; // @synthesize soundSelected=_soundSelected;
@property(nonatomic) double textMargin; // @synthesize textMargin=_textMargin;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

