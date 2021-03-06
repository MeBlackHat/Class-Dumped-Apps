//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class AWEIndexViewConfiguration, NSArray, NSMutableArray, UILabel, UITableView;
@protocol AWEIndexViewDelegate;

@interface AWEIndexView : UIControl
{
    _Bool _isTouchingIndexView;
    _Bool _isIndicatorShowingAnimated;
    id <AWEIndexViewDelegate> _delegate;
    NSArray *_iconDataSource;
    NSArray *_textDataSource;
    long long _currentSection;
    AWEIndexViewConfiguration *_configuration;
    NSArray *_indexRelations;
    NSMutableArray *_subIconLayers;
    NSMutableArray *_subTextLayers;
    UILabel *_indicator;
    UITableView *_tableView;
    id _generator;
    unsigned long long _layers;
    struct CGRect _indexViewFrame;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long layers; // @synthesize layers=_layers;
@property(retain, nonatomic) id generator; // @synthesize generator=_generator;
@property(nonatomic) _Bool isIndicatorShowingAnimated; // @synthesize isIndicatorShowingAnimated=_isIndicatorShowingAnimated;
@property(nonatomic) _Bool isTouchingIndexView; // @synthesize isTouchingIndexView=_isTouchingIndexView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UILabel *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) NSMutableArray *subTextLayers; // @synthesize subTextLayers=_subTextLayers;
@property(retain, nonatomic) NSMutableArray *subIconLayers; // @synthesize subIconLayers=_subIconLayers;
@property(retain, nonatomic) NSArray *indexRelations; // @synthesize indexRelations=_indexRelations;
@property(nonatomic) struct CGRect indexViewFrame; // @synthesize indexViewFrame=_indexViewFrame;
@property(readonly, nonatomic) AWEIndexViewConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) long long currentSection; // @synthesize currentSection=_currentSection;
@property(copy, nonatomic) NSArray *textDataSource; // @synthesize textDataSource=_textDataSource;
@property(copy, nonatomic) NSArray *iconDataSource; // @synthesize iconDataSource=_iconDataSource;
@property(nonatomic) __weak id <AWEIndexViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)refreshLayer:(_Bool)arg1;
- (void)hideIndicator:(_Bool)arg1;
- (void)showIndicator:(_Bool)arg1;
- (id)drawIndicatorPath;
- (void)onActionWithScroll;
- (void)onActionWithDidSelect;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)configCurrentSection;
- (void)configSubLayersAndSubviews:(_Bool)arg1;
- (void)dealloc;
- (id)initWithTableView:(id)arg1 configuration:(id)arg2;

@end

