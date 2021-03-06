//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUGSThemableComponentView.h"

#import "HUBComponentViewWithEvents-Protocol.h"

@class GLUEEntityRowView;
@protocol HUBComponentEventHandler;

@interface HUGS2CalendarRowComponentView : HUGSThemableComponentView <HUBComponentViewWithEvents>
{
    id <HUBComponentEventHandler> _eventHandler;
    GLUEEntityRowView *_entityRowView;
}

+ (_Bool)trailingButtonForComponentModel:(id)arg1;
+ (long long)accessoryRightIconForComponentModel:(id)arg1;
+ (id)styleForComponentModel:(id)arg1 theme:(id)arg2;
+ (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2 theme:(id)arg3;
@property(readonly, nonatomic) GLUEEntityRowView *entityRowView; // @synthesize entityRowView=_entityRowView;
@property(retain, nonatomic) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (_Bool)modelContainsCalendarWithModel:(id)arg1;
- (void)configureCalendarView:(id)arg1 withModel:(id)arg2;
- (void)configureTrailingViewWithModel:(id)arg1;
- (void)addCalendarViewIfNeededToView:(id)arg1 model:(id)arg2;
- (void)handleAccessoryButtonTap:(id)arg1;
- (void)sendSelectionEvent;
- (void)applyThemeLayout;
- (void)prepareForReuse;
- (void)configureWithModel:(id)arg1;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;

@end

