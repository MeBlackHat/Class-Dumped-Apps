//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/SMAMediaView.h>

@class UIImageView;
@protocol SMAFileLoading;

@interface SMAMediaImageView : SMAMediaView
{
    UIImageView *_imageView;
    Class _fileFetcher;
    id <SMAFileLoading> _fileLoader;
}

@property(retain, nonatomic) id <SMAFileLoading> fileLoader; // @synthesize fileLoader=_fileLoader;
@property(retain, nonatomic) Class fileFetcher; // @synthesize fileFetcher=_fileFetcher;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)handleResult:(id)arg1;
- (void)handleError:(id)arg1;
- (void)fetchImageByURL:(id)arg1;
- (void)resetOservableStates;
- (void)customUISetup;
- (void)renderImageWithURL:(id)arg1;
- (void)renderImage:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

