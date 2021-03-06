//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUGSThemableComponentView.h"

#import "HUBComponentViewWithEvents-Protocol.h"

@class SPTEncoreNewFeatureTooltipListeningHistoryPresenter, SPTHomeUIComponentDependencies, SPTHomeUIDimmedView, UIView;
@protocol HUBComponentEventHandler;

@interface SPTHomeUIDimmedViewComponentView : HUGSThemableComponentView <HUBComponentViewWithEvents>
{
    id <HUBComponentEventHandler> _eventHandler;
    SPTHomeUIComponentDependencies *_dependencies;
    SPTHomeUIDimmedView *_dimmedView;
    UIView *_anchorView;
    SPTEncoreNewFeatureTooltipListeningHistoryPresenter *_presenter;
    long long _entryPointType;
}

+ (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2 theme:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long entryPointType; // @synthesize entryPointType=_entryPointType;
@property(readonly, nonatomic) SPTEncoreNewFeatureTooltipListeningHistoryPresenter *presenter; // @synthesize presenter=_presenter;
@property(readonly, nonatomic) UIView *anchorView; // @synthesize anchorView=_anchorView;
@property(readonly, nonatomic) SPTHomeUIDimmedView *dimmedView; // @synthesize dimmedView=_dimmedView;
@property(readonly, nonatomic) SPTHomeUIComponentDependencies *dependencies; // @synthesize dependencies=_dependencies;
@property(retain, nonatomic) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void)anchorTooltipToView:(id)arg1;
- (void)configureWithModel:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithDependencies:(id)arg1 frame:(struct CGRect)arg2;

@end

