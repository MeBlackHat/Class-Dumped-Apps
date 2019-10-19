//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSManagedObjectID, NSSet, UILabel, UIView, WALabel;

@interface WASearchResultTableViewCell : UITableViewCell
{
    UIView *_containerView;
    NSSet *_searchTokens;
    UILabel *_titleLabel;
    WALabel *_snippetLabel;
    UILabel *_dateLabel;
    NSManagedObjectID *_messageIDForAccessibilityLabel;
}

+ (id)messageTextFormatter;
+ (double)preferredHeight;
@property(retain, nonatomic) NSManagedObjectID *messageIDForAccessibilityLabel; // @synthesize messageIDForAccessibilityLabel=_messageIDForAccessibilityLabel;
@property(readonly, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(readonly, nonatomic) WALabel *snippetLabel; // @synthesize snippetLabel=_snippetLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)configureWithSearchResultMessage:(id)arg1 searchTokens:(id)arg2;
- (void)configureFonts;
- (void)setUpPlaceholderForSizing;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithReuseIdentifier:(id)arg1;

@end

