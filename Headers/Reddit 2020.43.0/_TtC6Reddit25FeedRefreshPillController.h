//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FloatingUpdateView, NSLayoutYAxisAnchor;

@interface _TtC6Reddit25FeedRefreshPillController : NSObject
{
    // Error parsing type: , name: floatingPillController
    // Error parsing type: , name: refreshCoolDownStartTime
    // Error parsing type: , name: refreshPill
    // Error parsing type: , name: backoffInterval
    // Error parsing type: , name: onDidTapRefreshPill
}

- (void).cxx_destruct;
- (id)init;
- (void)dismiss;
- (void)presentIfNecessary;
- (void)resetBackoff;
- (void)didTapPill;
- (id)initWithScrollView:(id)arg1;
@property(nonatomic, retain) NSLayoutYAxisAnchor *headerAnchor;
@property(nonatomic, copy) CDUnknownBlockType onDidTapRefreshPill;
@property(nonatomic) double backoffInterval; // @synthesize backoffInterval;
@property(nonatomic, readonly) FloatingUpdateView *refreshPill; // @synthesize refreshPill;

@end

