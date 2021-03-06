//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "AWESearchMerchandiseDoubleColumnCell-Protocol.h"

@class AWEDoubleColumnSearchMerchandiseModel, UIImageView, UILabel, UIView;

@interface AWESearchMerchandiseAwemeVideoCell : UICollectionViewCell <AWESearchMerchandiseDoubleColumnCell>
{
    AWEDoubleColumnSearchMerchandiseModel *_model;
    UIImageView *_imageView;
    UIView *_videoContentView;
    UILabel *_titleLabel;
    UIImageView *_avatarImageView;
    UILabel *_usernameLabel;
    UIImageView *_likeIconImageView;
    UILabel *_diggCountLabel;
}

+ (double)heightForModel:(id)arg1 containerWidth:(double)arg2;
+ (id)identifier;
@property(retain, nonatomic) UILabel *diggCountLabel; // @synthesize diggCountLabel=_diggCountLabel;
@property(retain, nonatomic) UIImageView *likeIconImageView; // @synthesize likeIconImageView=_likeIconImageView;
@property(retain, nonatomic) UILabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *videoContentView; // @synthesize videoContentView=_videoContentView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) AWEDoubleColumnSearchMerchandiseModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)awemeToPlay;
- (id)containerForAwemePlay;
- (id)viewForZoomAnimation;
- (void)configWithModel:(id)arg1;
- (void)p_setupUI;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

