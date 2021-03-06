//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import <Module_Framework/GSCImageAnimatorDelegate-Protocol.h>

@class CALayer, GSCImageAnimator, GSCImageCacheItem, GSCImageIconSpec, GSCImageUrl, GSCImageUrlOptions, NSError, UIImage;
@protocol GSCImageFetcherAsyncRequest, GSCImageViewDelegate;

@interface GSCImageView : UIImageView <GSCImageAnimatorDelegate>
{
    UIImageView *_animatedIconView;
    CALayer *_animationLayer;
    struct CGSize _animationLayerSize;
    GSCImageAnimator *_animator;
    _Bool _reloadFlushedAnimationOnForeground;
    _Bool _skipNextTransition;
    UIImage *_errorIcon;
    long long _errorIconSaveContentMode;
    int _phImageRequestID;
    int _phAnimatedImageRequestID;
    _Bool _imageFetcherRequestOffscreenCanceled;
    GSCImageUrl *_imageUrl;
    GSCImageUrl *_imageUrlToPrefetch;
    GSCImageUrlOptions *_options;
    unsigned short _initialRequestFlags;
    _Bool _receivedRequestedImage;
    unsigned short _completedResultType;
    double _loadingStartedTime;
    double _loadingDuration;
    _Bool _proxyWasShownWhileLoading;
    GSCImageUrl *_proxyImageUrlLoaded;
    _Bool _animatedImageWasFlushed;
    _Bool _animationDisabled;
    _Bool _animationPaused;
    _Bool _animationsOnCacheHit;
    _Bool _clearImageOnNewRequestReuseOtherwise;
    _Bool _disableDefaultErrorIcon;
    _Bool _keepOffscreen;
    _Bool _disableDiscardableImages;
    _Bool _onlyLoadProxy;
    _Bool _animateLocalAssetGIFs;
    UIImage *_loadingPlaceHolder;
    long long _loadingState;
    NSError *_loadingError;
    double _proxyLoadingDuration;
    long long _animationType;
    id <GSCImageViewDelegate> _delegate;
    GSCImageIconSpec *_animatedIconSpec;
    UIImage *_animatedIcon;
    unsigned long long _animationPlaybackAmount;
    GSCImageIconSpec *_errorIconSpec;
    long long _imageOrientation;
    double _localAssetProxyDelay;
    GSCImageCacheItem *_discardableCacheItem;
    GSCImageCacheItem *_heldCacheItem;
    id <GSCImageFetcherAsyncRequest> _imageFetcherRequest;
}

+ (id)scaleImage:(id)arg1 toSize:(struct CGSize)arg2;
+ (void)setDefaultAnimationType:(long long)arg1;
+ (void)setDefaultErrorIconSpec:(id)arg1;
+ (void)setDefaultAnimatedIconSpec:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) id <GSCImageFetcherAsyncRequest> imageFetcherRequest; // @synthesize imageFetcherRequest=_imageFetcherRequest;
@property(retain, nonatomic) GSCImageCacheItem *heldCacheItem; // @synthesize heldCacheItem=_heldCacheItem;
@property(retain, nonatomic) GSCImageCacheItem *discardableCacheItem; // @synthesize discardableCacheItem=_discardableCacheItem;
@property(nonatomic) _Bool animateLocalAssetGIFs; // @synthesize animateLocalAssetGIFs=_animateLocalAssetGIFs;
@property(nonatomic) double localAssetProxyDelay; // @synthesize localAssetProxyDelay=_localAssetProxyDelay;
@property(nonatomic) long long imageOrientation; // @synthesize imageOrientation=_imageOrientation;
@property(nonatomic) _Bool onlyLoadProxy; // @synthesize onlyLoadProxy=_onlyLoadProxy;
@property(nonatomic) _Bool disableDiscardableImages; // @synthesize disableDiscardableImages=_disableDiscardableImages;
@property(nonatomic) _Bool keepOffscreen; // @synthesize keepOffscreen=_keepOffscreen;
@property(retain, nonatomic) GSCImageIconSpec *errorIconSpec; // @synthesize errorIconSpec=_errorIconSpec;
@property(nonatomic) _Bool disableDefaultErrorIcon; // @synthesize disableDefaultErrorIcon=_disableDefaultErrorIcon;
@property(nonatomic) _Bool clearImageOnNewRequestReuseOtherwise; // @synthesize clearImageOnNewRequestReuseOtherwise=_clearImageOnNewRequestReuseOtherwise;
@property(nonatomic) _Bool animationsOnCacheHit; // @synthesize animationsOnCacheHit=_animationsOnCacheHit;
@property(nonatomic) unsigned long long animationPlaybackAmount; // @synthesize animationPlaybackAmount=_animationPlaybackAmount;
@property(nonatomic) _Bool animationPaused; // @synthesize animationPaused=_animationPaused;
@property(nonatomic) _Bool animationDisabled; // @synthesize animationDisabled=_animationDisabled;
@property(readonly, nonatomic) _Bool animatedImageWasFlushed; // @synthesize animatedImageWasFlushed=_animatedImageWasFlushed;
@property(retain, nonatomic) UIImage *animatedIcon; // @synthesize animatedIcon=_animatedIcon;
@property(retain, nonatomic) GSCImageIconSpec *animatedIconSpec; // @synthesize animatedIconSpec=_animatedIconSpec;
@property(nonatomic) __weak id <GSCImageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long animationType; // @synthesize animationType=_animationType;
@property(readonly, nonatomic) double proxyLoadingDuration; // @synthesize proxyLoadingDuration=_proxyLoadingDuration;
@property(readonly, nonatomic) _Bool proxyWasShownWhileLoading; // @synthesize proxyWasShownWhileLoading=_proxyWasShownWhileLoading;
@property(readonly, nonatomic) double loadingDuration; // @synthesize loadingDuration=_loadingDuration;
@property(readonly, nonatomic) NSError *loadingError; // @synthesize loadingError=_loadingError;
@property(readonly, nonatomic) long long loadingState; // @synthesize loadingState=_loadingState;
@property(retain, nonatomic) UIImage *loadingPlaceHolder; // @synthesize loadingPlaceHolder=_loadingPlaceHolder;
@property(readonly, nonatomic) GSCImageUrl *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void)imageAnimatorCreatedLayer:(id)arg1 layer:(id)arg2;
- (void)imageAnimatorFlushMemory:(id)arg1;
- (void)imageAnimatorDidAdvance:(id)arg1 image:(id)arg2;
- (void)handleProxyImageResult:(id)arg1;
- (void)setLoadingState:(long long)arg1;
- (void)restoreAnimatedImageOnForeground;
- (void)crossfadeToImage:(id)arg1;
- (void)doTransition:(id)arg1 resultType:(unsigned short)arg2;
- (void)cacheItemHandleScreenChange:(_Bool)arg1;
- (_Bool)attachDiscardableItem;
- (void)releaseCacheItems;
- (void)holdCacheItem:(id)arg1;
- (void)requestImageFromCurrentUrlAndOptions;
- (void)assetResourceLoadingCompletedForLocalAssetUrl:(id)arg1;
- (void)attachAnimatedImage:(id)arg1 forLocalAssetUrl:(id)arg2;
- (void)loadAnimationIfAssetIsGIF:(id)arg1 forLocalAssetUrl:(id)arg2;
- (void)loadVideoThumbnailForAVAsset:(id)arg1 requestSize:(struct CGSize)arg2 forLocalAssetUrl:(id)arg3 fallbackBlock:(CDUnknownBlockType)arg4;
- (_Bool)loadLocalAssetWithProxyLoading:(_Bool)arg1;
- (void)cancelExistingRequest;
- (_Bool)skipOrDeferRequestCheck:(id)arg1;
- (void)layoutAnimationLayer;
- (void)offscreenChange:(_Bool)arg1;
- (_Bool)isOnscreenAndNotHidden;
- (_Bool)isOnscreen;
- (void)reloadIfOnlyProxyWasLoaded;
- (void)imageFetcherResult:(id)arg1 resultType:(unsigned short)arg2 cacheItem:(id)arg3 error:(id)arg4;
@property(readonly, nonatomic, getter=hasLoadedAnimation) _Bool loadedAnimation;
- (void)setReloadFlushedAnimationOnForeground:(_Bool)arg1;
@property(nonatomic, getter=getErrorIconVisible) _Bool errorIconVisible;
@property(nonatomic, getter=isAnimatedIconVisible) _Bool animatedIconVisible;
- (_Bool)connectToCachedImageByUrlString:(id)arg1;
- (void)setCompletedImage:(id)arg1;
- (void)loadImageUrl:(id)arg1 withOptions:(id)arg2;
- (void)setImageUrl:(id)arg1 withOptions:(id)arg2;
- (void)setImageUrl:(id)arg1;
- (void)cancelPendingLoad;
- (void)changePrefetchImageUrlForProxySizeOption;
- (void)updateUrlToPrefetch;
- (void)setImage:(id)arg1;
@property(readonly, nonatomic) long long resultSource;
- (void)layoutSubviews;
- (void)setHidden:(_Bool)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

