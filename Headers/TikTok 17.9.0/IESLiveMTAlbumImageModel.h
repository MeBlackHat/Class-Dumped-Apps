//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IESLiveMTAssetModel, NSString, UIImage;

@interface IESLiveMTAlbumImageModel : NSObject
{
    _Bool _networkAccessAllowed;
    UIImage *_image;
    NSString *_assetLocalIdentifier;
    IESLiveMTAssetModel *_asset;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool networkAccessAllowed; // @synthesize networkAccessAllowed=_networkAccessAllowed;
@property(retain, nonatomic) IESLiveMTAssetModel *asset; // @synthesize asset=_asset;
@property(copy, nonatomic) NSString *assetLocalIdentifier; // @synthesize assetLocalIdentifier=_assetLocalIdentifier;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;

@end

