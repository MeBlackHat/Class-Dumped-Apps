//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "AWEFeedTableViewCellProtocol-Protocol.h"
#import "IESVideoPlayerDelegate-Protocol.h"

@class AWEAlgoFreeInfoModel, NSString, UIButton, UIImageView, UILabel, UITextView, UIView, UIViewController;
@protocol AWEFeedTableViewCellViewControllerProtocol, IESVideoPlayerProtocol;

@interface AWEFeedMaskViewCellTableViewCell : UITableViewCell <IESVideoPlayerDelegate, AWEFeedTableViewCellProtocol>
{
    long long _indexPath;
    UIViewController<AWEFeedTableViewCellViewControllerProtocol> *_viewController;
    UIViewController *_parentVC;
    NSString *_referString;
    AWEAlgoFreeInfoModel *_model;
    id <IESVideoPlayerProtocol> _player;
    UIImageView *_coverImageView;
    UIImageView *_logoImageView;
    UILabel *_titleLabel;
    UITextView *_contentTextView;
    UIButton *_learnMoreButton;
    double _suggestContentBodyHeight;
    double _suggestTitleLabelHeight;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(nonatomic) double suggestTitleLabelHeight; // @synthesize suggestTitleLabelHeight=_suggestTitleLabelHeight;
@property(nonatomic) double suggestContentBodyHeight; // @synthesize suggestContentBodyHeight=_suggestContentBodyHeight;
@property(retain, nonatomic) UIButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property(retain, nonatomic) UITextView *contentTextView; // @synthesize contentTextView=_contentTextView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) id <IESVideoPlayerProtocol> player; // @synthesize player=_player;
@property(retain, nonatomic) AWEAlgoFreeInfoModel *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *referString; // @synthesize referString=_referString;
@property(nonatomic) __weak UIViewController *parentVC; // @synthesize parentVC=_parentVC;
@property(readonly, nonatomic) UIViewController<AWEFeedTableViewCellViewControllerProtocol> *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) long long indexPath; // @synthesize indexPath=_indexPath;
- (void)reset;
- (void)pause;
- (void)stop;
- (void)play;
- (void)prepareForDisplay;
- (void)configureWithModel:(id)arg1;
- (void)configWithModel:(id)arg1;
- (void)playerDidReadyForDisplay:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)getFirstPreviewFrame:(id)arg1;
- (void)learnMoreButtonClicked;
- (void)_setupUI;
- (void)configCellWithModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UIView *feedTableViewCellMaskView;
@property(nonatomic) _Bool hadPrepareToDisplay;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

