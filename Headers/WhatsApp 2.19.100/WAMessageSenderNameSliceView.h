//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageContainerSliceView.h"

@class UIImage, UIImageView, WAMessageSenderNameSlice, _WAMessageSenderNameContentView;

@interface WAMessageSenderNameSliceView : WAMessageContainerSliceView
{
    UIImage *_bubbleImage;
    UIImage *_highlightedBubbleImage;
    UIImageView *_bubbleImageView;
    _WAMessageSenderNameContentView *_contentView;
}

- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)reloadSliceAfterChange:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) WAMessageSenderNameSlice *slice; // @dynamic slice;

@end

