//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface IGRearrangeOverlayView : UIView
{
    long long _type;
    UILabel *_removeLabel;
    UIImageView *_removeImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *removeImageView; // @synthesize removeImageView=_removeImageView;
@property(retain, nonatomic) UILabel *removeLabel; // @synthesize removeLabel=_removeLabel;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)_updateRemoveText;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

