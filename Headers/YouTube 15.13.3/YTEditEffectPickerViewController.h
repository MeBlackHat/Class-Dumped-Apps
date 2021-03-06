//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/UICollectionViewDataSource-Protocol.h>
#import <Module_Framework/UICollectionViewDelegate-Protocol.h>
#import <Module_Framework/YTEditEffectThumbnailSourceDelegate-Protocol.h>
#import <Module_Framework/YTEditFeatureTab-Protocol.h>
#import <Module_Framework/YTVideoEffectsSettingsLoaderObserver-Protocol.h>

@class GIMMe, NSArray, NSIndexPath, NSMutableArray, NSMutableSet, NSString, UIView, YTEditEffectThumbnailSource;
@protocol YTEditEffectPickerDelegate, YTEditEffectPickerViewProtocol;

@interface YTEditEffectPickerViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, YTEditEffectThumbnailSourceDelegate, YTEditFeatureTab, YTVideoEffectsSettingsLoaderObserver>
{
    _Bool _shouldAutorotate;
    int _veType;
    UIView *_containerView;
    GIMMe *_gimme;
    id <YTEditEffectPickerDelegate> _delegate;
    NSString *_currentEffectID;
    NSMutableArray *_enabledEffects;
    NSIndexPath *_selectedCellIndexPath;
    YTEditEffectThumbnailSource *_thumbnailSource;
    NSMutableSet *_readyEffectIDs;
}

@property(retain, nonatomic) NSMutableSet *readyEffectIDs; // @synthesize readyEffectIDs=_readyEffectIDs;
@property(readonly, nonatomic) YTEditEffectThumbnailSource *thumbnailSource; // @synthesize thumbnailSource=_thumbnailSource;
@property(retain, nonatomic) NSIndexPath *selectedCellIndexPath; // @synthesize selectedCellIndexPath=_selectedCellIndexPath;
@property(retain, nonatomic) NSMutableArray *enabledEffects; // @synthesize enabledEffects=_enabledEffects;
@property(copy, nonatomic) NSString *currentEffectID; // @synthesize currentEffectID=_currentEffectID;
@property(nonatomic) __weak id <YTEditEffectPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) _Bool shouldAutorotate; // @synthesize shouldAutorotate=_shouldAutorotate;
@property(readonly, nonatomic) int veType; // @synthesize veType=_veType;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (id)tabAccessibilityIdentifier;
@property(readonly, nonatomic) NSArray *interactionLoggingButtons;
- (long long)featurePresentationStyle;
- (double)desiredViewHeight;
- (id)title;
- (id)imageSelected:(_Bool)arg1;
- (void)thumbnailSource:(id)arg1 didGenerateThumbnailForEffectID:(id)arg2;
- (void)errorLoadingEffectID:(id)arg1;
- (void)finishedLoadingEffectID:(id)arg1;
- (struct CGSize)thumbSize;
- (void)setDrishtiConfig:(id)arg1 effectAssetsDirectoryPath:(id)arg2 enabledEffects:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)selectCellAtIndexPath:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithThumbnailMode:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIView<YTEditEffectPickerViewProtocol> *view; // @dynamic view;

@end

