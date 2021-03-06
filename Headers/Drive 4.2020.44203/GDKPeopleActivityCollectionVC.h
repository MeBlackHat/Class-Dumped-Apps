//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/QTMCollectionViewController.h>

@class NSArray;
@protocol GDKContactAvatarCaching, GDKContactAvatarFetching, GDKPeopleActivityCollectionVCDelegate, GDKPeopleActivityContentViewDelegate, SSOIdentity;

@interface GDKPeopleActivityCollectionVC : QTMCollectionViewController
{
    _Bool _populousEnabled;
    id <GDKPeopleActivityCollectionVCDelegate> _delegate;
    id <GDKPeopleActivityContentViewDelegate> _contentViewDelegate;
    id <GDKContactAvatarCaching> _avatarCache;
    id <GDKContactAvatarFetching> _avatarFetcher;
    NSArray *_activities;
    id <SSOIdentity> _userIdentity;
}

+ (int)layoutModeForSize:(struct CGSize)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <SSOIdentity> userIdentity; // @synthesize userIdentity=_userIdentity;
@property(readonly, nonatomic) _Bool populousEnabled; // @synthesize populousEnabled=_populousEnabled;
@property(retain, nonatomic) NSArray *activities; // @synthesize activities=_activities;
@property(readonly, nonatomic) id <GDKContactAvatarFetching> avatarFetcher; // @synthesize avatarFetcher=_avatarFetcher;
@property(retain, nonatomic) id <GDKContactAvatarCaching> avatarCache; // @synthesize avatarCache=_avatarCache;
@property(nonatomic) __weak id <GDKPeopleActivityContentViewDelegate> contentViewDelegate; // @synthesize contentViewDelegate=_contentViewDelegate;
@property(nonatomic) __weak id <GDKPeopleActivityCollectionVCDelegate> delegate; // @synthesize delegate=_delegate;
- (void)notifyInteractionWithOpenType:(long long)arg1 email:(id)arg2 baseIndex:(long long)arg3 actionIndex:(long long)arg4;
- (void)loadAvatarImageForCVO:(id)arg1;
- (void)fetchContactInfoForCVO:(id)arg1 activity:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)populatePlaceholders;
- (void)recreateModelWithActivities:(id)arg1;
- (int)currentLayoutMode;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)collectionViewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithUserIdentity:(id)arg1 avatarCache:(id)arg2 avatarFetcher:(id)arg3 populousEnabled:(_Bool)arg4;

@end

