//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIButton;
@protocol SPTBarButtonItemManager, SPTLinkDispatcher;

@interface SPTPremiumDestinationNavigationItemDecorator : NSObject
{
    id <SPTBarButtonItemManager> _barButtonItemManager;
    id <SPTLinkDispatcher> _linkDispatcher;
    UIButton *_settingsButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *settingsButton; // @synthesize settingsButton=_settingsButton;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <SPTBarButtonItemManager> barButtonItemManager; // @synthesize barButtonItemManager=_barButtonItemManager;
- (void)settingsButtonPressed:(id)arg1;
- (id)rightItems;
- (void)updateNavigationItemDecoratorAlpha:(double)arg1;
- (void)decoratePageController:(id)arg1;
- (id)initWithBarButtonItemManager:(id)arg1 linkDispatcher:(id)arg2;

@end

