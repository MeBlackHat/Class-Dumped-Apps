//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMediaBrowserZoomableMediaCell.h"

@class UIImageView, WAProductCatalogSingleImageLoader;

@interface WAMediaBrowserProductCell : WAMediaBrowserZoomableMediaCell
{
    UIImageView *_imageView;
    WAProductCatalogSingleImageLoader *_imageLoader;
}

- (void).cxx_destruct;
- (void)setAccessibilityLabelForContent:(id)arg1;
- (void)copy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)didDownloadImage:(id)arg1 stage:(long long)arg2;
- (void)didChangeObjectAtStage:(long long)arg1;
- (void)loadFullSizeImageAtStage:(long long)arg1;
- (id)viewForZooming;
- (void)didChangeObject;
- (void)layoutSubviewsInCell;
- (id)initWithFrame:(struct CGRect)arg1;

@end

