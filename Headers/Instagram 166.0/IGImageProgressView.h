//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGImageViewDelegate-Protocol.h>

@class IGCircularProgressView, IGImageSpecifier, IGImageView, IGMediaBoundaryTestHelper, NSData, NSString, UIButton, UIImage;
@protocol IGImageProgressViewDelegate;

@interface IGImageProgressView : UIView <IGImageViewDelegate>
{
    UIButton *_failureView;
    _Bool _hideProgressAndFailureViewsIfPlaceholderIsShown;
    _Bool _progressViewEnabled;
    IGImageSpecifier *_imageSpecifier;
    IGImageView *_photoImageView;
    unsigned long long _loadStatus;
    IGCircularProgressView *_progressView;
    id <IGImageProgressViewDelegate> _delegate;
    unsigned long long _style;
    unsigned long long _progressSize;
    struct CGPoint _progressViewPositionOverride;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint progressViewPositionOverride; // @synthesize progressViewPositionOverride=_progressViewPositionOverride;
@property(nonatomic) unsigned long long progressSize; // @synthesize progressSize=_progressSize;
@property(nonatomic) _Bool progressViewEnabled; // @synthesize progressViewEnabled=_progressViewEnabled;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <IGImageProgressViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGCircularProgressView *progressView; // @synthesize progressView=_progressView;
@property(readonly, nonatomic) unsigned long long loadStatus; // @synthesize loadStatus=_loadStatus;
@property(readonly, nonatomic) IGImageView *photoImageView; // @synthesize photoImageView=_photoImageView;
@property(retain, nonatomic) IGImageSpecifier *imageSpecifier; // @synthesize imageSpecifier=_imageSpecifier;
- (void)imageView:(id)arg1 willRequestImageWithURL:(id)arg2;
- (void)imageView:(id)arg1 didUpdateDownloadProgress:(double)arg2;
- (void)imageView:(id)arg1 didFailToLoadImageWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)imageView:(id)arg1 didLoadImageFromSource:(unsigned long long)arg2 networkRequestSummary:(id)arg3;
- (void)imageView:(id)arg1 didUpdateLoadingState:(id)arg2;
- (void)_retryMediaFetch;
- (void)_makeFailureViewIfNeeded;
- (void)_updateProgressFailureView;
- (void)setPlaceholderImageURL:(id)arg1 module:(id)arg2 hideProgressAndFailureViewsIfPlaceholderIsShown:(_Bool)arg3;
- (void)layoutSubviews;
@property(retain, nonatomic) UIImage *preloadedImage;
@property(retain, nonatomic) IGMediaBoundaryTestHelper *mediaBoundaryTestHelper;
@property(retain, nonatomic) NSData *previewImageData;
- (void)setContentMode:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 shouldUseProgressiveJPEG:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

