//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDirectMessageIndicatorView, IGUser, UIView;
@protocol IGDirectThreadScrollStateDelegate;

@interface IGDirectThreadNewMessageIndicator : NSObject
{
    _Bool _shouldOptimizeMessageIndicatorLayout;
    IGDirectMessageIndicatorView *_indicatorView;
    UIView *_containingView;
    UIView *_referenceView;
    IGUser *_currentUser;
    id <IGDirectThreadScrollStateDelegate> _scrollStateDelegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <IGDirectThreadScrollStateDelegate> scrollStateDelegate; // @synthesize scrollStateDelegate=_scrollStateDelegate;
@property(readonly, nonatomic) IGUser *currentUser; // @synthesize currentUser=_currentUser;
@property(readonly, nonatomic) __weak UIView *referenceView; // @synthesize referenceView=_referenceView;
@property(readonly, nonatomic) __weak UIView *containingView; // @synthesize containingView=_containingView;
@property(readonly, nonatomic) IGDirectMessageIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
- (void)_hideNewMessageIndicator;
- (void)_showNewMessageIndicatorWithProfileImage:(id)arg1;
- (void)_didTapNewMessageIndicatorView:(id)arg1;
- (void)_createNewMessageIndicator;
- (void)hideIndicatorIfNeededForScrolling;
- (_Bool)_shouldHideIndicator;
- (void)toggleIndicatorWithProfileImage:(id)arg1;
- (void)layoutNewMessageIndicatorIfNeeded;
- (id)initWithUserFeatureSets:(id)arg1 containingView:(id)arg2 referenceView:(id)arg3 scrollStateDelegate:(id)arg4;

@end

