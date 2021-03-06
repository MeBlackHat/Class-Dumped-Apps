//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView;

@interface HMEAmbientPhotoPreviewTileCell : UICollectionViewCell
{
    UIImageView *_imageView;
}

+ (id)overlayImageView;
+ (id)imageURLFromURLString:(id)arg1;
+ (struct CGSize)sizeOfCellWithMaxWidth:(double)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)prepareForReuse;
- (void)updateCellWithImageURLString:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

