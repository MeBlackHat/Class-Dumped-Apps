//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMediaCollectionViewCell.h"

#import "WAMediaPickerAssetPresenting-Protocol.h"

@class NSString, WAMediaPickerAsset;

@interface WAPhotoLibraryCollectionViewCell : WAMediaCollectionViewCell <WAMediaPickerAssetPresenting>
{
    int _pendingRequestID;
    _Bool _showsCheckmarkWhenSelected;
    long long _index;
    NSString *_assetIdentifier;
    WAMediaPickerAsset *_mediaPickerAsset;
    struct CGSize _maximumThumbnailSizeInPixels;
}

@property(retain, nonatomic) WAMediaPickerAsset *mediaPickerAsset; // @synthesize mediaPickerAsset=_mediaPickerAsset;
@property(readonly, nonatomic) NSString *assetIdentifier; // @synthesize assetIdentifier=_assetIdentifier;
@property(nonatomic) struct CGSize maximumThumbnailSizeInPixels; // @synthesize maximumThumbnailSizeInPixels=_maximumThumbnailSizeInPixels;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) _Bool showsCheckmarkWhenSelected; // @synthesize showsCheckmarkWhenSelected=_showsCheckmarkWhenSelected;
- (void).cxx_destruct;
- (void)mediaPickerAssetDidDownloadProgressFinished:(id)arg1;
- (void)mediaPickerAssetDidUpdateDownloadProgress:(id)arg1;
- (void)addAssetDownloadProgressNotifications;
- (void)removeAssetDownloadProgressNotifications;
- (void)configureProgressBar;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

