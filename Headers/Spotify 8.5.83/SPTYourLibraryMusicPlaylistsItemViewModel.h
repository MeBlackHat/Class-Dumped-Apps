//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTYourLibraryMusicItemViewModel-Protocol.h"

@class NSString, NSURL;

@interface SPTYourLibraryMusicPlaylistsItemViewModel : NSObject <SPTYourLibraryMusicItemViewModel>
{
    _Bool _enabled;
    _Bool _folder;
    _Bool _offlineAvailable;
    _Bool _showDecorationOverlay;
    _Bool showOverlayMask;
    _Bool inCollection;
    _Bool showCollectionQuickActions;
    _Bool quickActionsEnabled;
    _Bool _onDemand;
    NSURL *_imageURL;
    NSString *_subtitle;
    NSString *_title;
    NSURL *_URL;
    long long _icon;
    long long _offlineStatus;
}

+ (long long)iconFromURL:(id)arg1;
+ (long long)offlineSyncStatusForSPTOfflineAvailability:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool onDemand; // @synthesize onDemand=_onDemand;
@property(readonly, nonatomic, getter=isQuickActionsEnabled) _Bool quickActionsEnabled; // @synthesize quickActionsEnabled;
@property(readonly, nonatomic) _Bool showCollectionQuickActions; // @synthesize showCollectionQuickActions;
@property(readonly, nonatomic) _Bool inCollection; // @synthesize inCollection;
@property(readonly, nonatomic) _Bool showOverlayMask; // @synthesize showOverlayMask;
@property(readonly, nonatomic) _Bool showDecorationOverlay; // @synthesize showDecorationOverlay=_showDecorationOverlay;
@property(readonly, nonatomic, getter=isOfflineAvailable) _Bool offlineAvailable; // @synthesize offlineAvailable=_offlineAvailable;
@property(readonly, nonatomic, getter=isFolder) _Bool folder; // @synthesize folder=_folder;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) long long offlineStatus; // @synthesize offlineStatus=_offlineStatus;
@property(readonly, nonatomic) long long icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic, getter=isShuffle) _Bool isShuffle;
- (id)initWithItemModelItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

