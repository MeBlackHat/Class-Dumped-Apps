//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ODETimelineDirecting-Protocol.h"

@class NSString, UIView, UIViewController;

@interface ODETransitionDirector : NSObject <ODETimelineDirecting>
{
    UIViewController *_leftViewController;
    UIViewController *_rightViewController;
    UIView *_contextView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *contextView; // @synthesize contextView=_contextView;
@property(retain, nonatomic) UIViewController *rightViewController; // @synthesize rightViewController=_rightViewController;
@property(retain, nonatomic) UIViewController *leftViewController; // @synthesize leftViewController=_leftViewController;
- (void)registerIntentionsForPerformanceOnStage:(id)arg1;
- (double)durationOfPerformanceOnStage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

