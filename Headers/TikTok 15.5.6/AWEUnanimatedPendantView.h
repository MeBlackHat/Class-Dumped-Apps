//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEPendantView.h"

@class UIImageView;

@interface AWEUnanimatedPendantView : AWEPendantView
{
    UIImageView *_foldedImageView;
    UIImageView *_expandedImageView;
}

@property(retain, nonatomic) UIImageView *expandedImageView; // @synthesize expandedImageView=_expandedImageView;
@property(retain, nonatomic) UIImageView *foldedImageView; // @synthesize foldedImageView=_foldedImageView;
- (void).cxx_destruct;
- (void)animateWithDuration:(double)arg1 timingFunction:(id)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)playFragmentAnimation;
- (void)performExpandingAnimation;
- (void)performFoldingAnimation;
- (void)switchImageViewWithFolded:(_Bool)arg1;
- (void)performUpdateFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 animated:(_Bool)arg3;
- (id)addImageViewWithImage:(id)arg1 expanded:(_Bool)arg2;
- (id)addImageWithURL:(id)arg1 expanded:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 foldedImageURL:(id)arg2 expandedImageURL:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 foldedImage:(id)arg2 expandedImage:(id)arg3;

@end

