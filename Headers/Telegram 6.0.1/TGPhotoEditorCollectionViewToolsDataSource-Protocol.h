//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelegramUI/NSObject-Protocol.h>

@class PGPhotoTool, TGPhotoEditorCollectionView;

@protocol TGPhotoEditorCollectionViewToolsDataSource <NSObject>
- (void (^)(void))interactionEndedForCollectionView:(TGPhotoEditorCollectionView *)arg1;
- (void (^)(PGPhotoTool *, id, _Bool))changeBlockForCollectionView:(TGPhotoEditorCollectionView *)arg1;
- (PGPhotoTool *)collectionView:(TGPhotoEditorCollectionView *)arg1 toolAtIndex:(long long)arg2;
- (long long)numberOfToolsInCollectionView:(TGPhotoEditorCollectionView *)arg1;
@end

