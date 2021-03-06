//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGAssetModel, NSDictionary;

@interface _IGARApplicatorStateController : NSObject
{
    IGAssetModel *_selectedAssetModel;
    IGAssetModel *_appliedAssetModel;
    NSDictionary *_cameraShareArguments;
    _Bool _isEffectSelected;
    _Bool _isEffectApplied;
}

- (void).cxx_destruct;
- (id)arEffectIDForAssetModel:(id)arg1;
- (id)selectedCameraShareArguments;
- (id)persistedCameraShareArguments;
- (id)appliedAssetModel;
- (id)selectedAssetModel;
- (id)persistedAssetModel;
- (void)selectEffectWithAssetModel:(id)arg1 cameraShareArguments:(id)arg2;
- (void)selectNoEffect;
- (void)activateEffect;
- (void)deactivateEffect;

@end

