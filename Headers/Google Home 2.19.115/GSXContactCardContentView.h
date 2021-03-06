//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentView.h"

#import "GSXContentViewWithWidth-Protocol.h"

@class GSXNetworkImageView, NSString, UILabel;

@interface GSXContactCardContentView : GOOBaseContentView <GSXContentViewWithWidth>
{
    GSXNetworkImageView *_image;
    UILabel *_title;
}

+ (double)widthForObject:(id)arg1 carouselObject:(id)arg2 visibleWidth:(double)arg3;
+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)updateViewWithObject:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

