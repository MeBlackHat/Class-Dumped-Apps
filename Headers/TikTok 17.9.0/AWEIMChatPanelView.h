//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWEIMChatPanelCollectionViewHorizontalLayoutDataSource-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class AWEIMChatPanelModel, NSArray, NSString, UICollectionView;
@protocol AWEIMChatPanelViewDelegate;

@interface AWEIMChatPanelView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, AWEIMChatPanelCollectionViewHorizontalLayoutDataSource>
{
    id <AWEIMChatPanelViewDelegate> _delegate;
    NSArray *_chatPanelModelArray;
    UICollectionView *_collectionView;
    UIView *_seperator;
    AWEIMChatPanelModel *_redpacketModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AWEIMChatPanelModel *redpacketModel; // @synthesize redpacketModel=_redpacketModel;
@property(retain, nonatomic) UIView *seperator; // @synthesize seperator=_seperator;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSArray *chatPanelModelArray; // @synthesize chatPanelModelArray=_chatPanelModelArray;
@property(nonatomic) __weak id <AWEIMChatPanelViewDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)numberOfItemsInChatPanel;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)voipButtonClicked;
- (void)redpacketButtonClicked;
- (void)galleryButtonClicked;
- (void)cameraButtonClicked;
- (void)configChatPanelModelArrayWithFunction:(id)arg1;
- (void)p_setupDataWithFunctions:(id)arg1;
- (void)p_setupUI;
- (void)updatePanelForInputViewType:(long long)arg1 oldType:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 functions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

