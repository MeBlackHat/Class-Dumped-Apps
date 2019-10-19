//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSSet, NSString, WALabel, WASimpleStackView;

@interface WASearchResultsNonvisualAttachmentTextStackView : UIView
{
    WALabel *_titleLabel;
    WALabel *_descriptionLabel;
    WALabel *_contextLabel;
    NSSet *_searchTokens;
    NSString *_titleString;
    NSString *_descriptionString;
    NSString *_contextString;
    _Bool _titleLabelShouldIncludeStems;
    _Bool _descriptionLabelShouldIncludeStems;
    _Bool _contextLabelShouldIncludeStems;
    WASimpleStackView *_innerStackView;
    WASimpleStackView *_outerStackView;
    NSLayoutConstraint *_stackViewConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *stackViewConstraint; // @synthesize stackViewConstraint=_stackViewConstraint;
@property(readonly, nonatomic) WASimpleStackView *outerStackView; // @synthesize outerStackView=_outerStackView;
@property(readonly, nonatomic) WASimpleStackView *innerStackView; // @synthesize innerStackView=_innerStackView;
@property(nonatomic) _Bool contextLabelShouldIncludeStems; // @synthesize contextLabelShouldIncludeStems=_contextLabelShouldIncludeStems;
@property(nonatomic) _Bool descriptionLabelShouldIncludeStems; // @synthesize descriptionLabelShouldIncludeStems=_descriptionLabelShouldIncludeStems;
@property(nonatomic) _Bool titleLabelShouldIncludeStems; // @synthesize titleLabelShouldIncludeStems=_titleLabelShouldIncludeStems;
- (void).cxx_destruct;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)updateContextLabel;
- (void)updateDescriptionLabel;
- (void)updateTitleLabel;
- (void)updateLabels;
- (void)updateWithSearchTokens:(id)arg1 titleString:(id)arg2 descriptionString:(id)arg3 contextString:(id)arg4;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

