//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SMASHLoadingIndicatorGradientView;

@interface SMASHLoadingIndicatorBarView : UIView
{
    SMASHLoadingIndicatorGradientView *_highlight;
}

@property(retain, nonatomic) SMASHLoadingIndicatorGradientView *highlight; // @synthesize highlight=_highlight;
- (void).cxx_destruct;
- (void)dismissAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)fillRect:(struct CGRect)arg1 withColor:(id)arg2;
- (void)doHighlightReelAnimationFirstRun:(_Bool)arg1;
- (void)presentAnimated:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

