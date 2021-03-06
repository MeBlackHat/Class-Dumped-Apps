//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GBTMaterialInfoView.h"

@class GBTPlainButton;
@protocol GBTItemListCardViewDelegate;

@interface GBTItemListCardView : GBTMaterialInfoView
{
    GBTPlainButton *_overflowButton;
}

+ (double)heightWithTitle:(id)arg1 subtitle:(id)arg2 cardWidth:(double)arg3 bottomViewHeight:(double)arg4 showsOverflowButton:(_Bool)arg5;
+ (double)availableContentWidthWithinCardWidth:(double)arg1;
- (void).cxx_destruct;
- (void)didTapOverflowButton:(id)arg1;
@property(nonatomic) _Bool showsOverflowButton;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) __weak id <GBTItemListCardViewDelegate> delegate; // @dynamic delegate;

@end

