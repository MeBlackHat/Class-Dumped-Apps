//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "AWEFeedRefreshAnimationProtocol-Protocol.h"

@class NSString, UIViewController;

@interface AWEFeedRefreshAnimation_Loading : UIImageView <AWEFeedRefreshAnimationProtocol>
{
    _Bool _isRefreshing;
    UIViewController *_controller;
}

+ (id)animationWithController:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isRefreshing; // @synthesize isRefreshing=_isRefreshing;
@property(nonatomic) __weak UIViewController *controller; // @synthesize controller=_controller;
- (void)adjustFrame;
- (void)stopRefreshing;
- (void)beginRefreshing;
- (void)beginRefreshingAfterDragEnd;
- (void)dragToEndWithProgress:(double)arg1 refreshBlock:(CDUnknownBlockType)arg2;
- (void)dragCancellation;
- (void)dragWithProgress:(double)arg1;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

