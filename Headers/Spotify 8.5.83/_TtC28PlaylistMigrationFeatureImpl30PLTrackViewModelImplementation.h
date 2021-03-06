//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistTrackViewModel-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSString, NSURL;

@interface _TtC28PlaylistMigrationFeatureImpl30PLTrackViewModelImplementation : NSObject <SPTFreeTierPlaylistTrackViewModel>
{
    // Error parsing type: , name: trackEntity
    // Error parsing type: , name: premiumOnlyFeatureEnabled
    // Error parsing type: , name: isPlayingTrack
    // Error parsing type: , name: isTrackPaused
    // Error parsing type: , name: showTrackOwner
    // Error parsing type: , name: $__lazy_storage_$_imageURL
    // Error parsing type: , name: $__lazy_storage_$_offlineSyncStatus
    // Error parsing type: , name: $__lazy_storage_$_artists
}

- (void).cxx_destruct;
- (id)init;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, readonly) long long hash;
@property(nonatomic, copy) NSArray *artists;
@property(nonatomic, readonly) NSURL *ownerThumbnailURL;
@property(nonatomic, readonly) NSString *ownerName;
@property(nonatomic, readonly) NSString *rowId;
@property(nonatomic, readonly) NSDictionary *formatListAttributes;
@property(nonatomic, readonly) double duration;
@property(nonatomic, readonly) NSArray *musicAndTalkArtists;
@property(nonatomic, readonly) _Bool isMusicAndTalk;
@property(nonatomic, readonly) _Bool isPlayed;
@property(nonatomic, readonly) double timeLeft;
@property(nonatomic, readonly) NSDate *publishDate;
@property(nonatomic, readonly) NSString *podcastTitle;
@property(nonatomic) long long offlineSyncStatus;
@property(nonatomic, readonly) NSString *freeformDescription;
@property(nonatomic, readonly) NSURL *videoThumbnailURL;
- (_Bool)isInYourEpisodes;
- (_Bool)isEpisode;
- (_Bool)isVideo;
- (_Bool)isBanned;
- (_Bool)isLiked;
- (_Bool)isEnabled;
- (_Bool)isPaused;
- (_Bool)isActive;
@property(nonatomic, readonly) unsigned long long restriction;
- (_Bool)isPremiumOnly;
@property(nonatomic, readonly) NSArray *artistNames;
@property(nonatomic, readonly) NSURL *albumURL;
@property(nonatomic, readonly) NSString *albumName;
@property(nonatomic, copy) NSURL *imageURL;
@property(nonatomic, readonly) NSURL *URL;
@property(nonatomic, readonly) NSString *title;

// Remaining properties
@property(nonatomic, readonly) _Bool active;
@property(nonatomic, readonly) _Bool banned;
@property(nonatomic, readonly) _Bool enabled;
@property(nonatomic, readonly) _Bool episode;
@property(nonatomic, readonly) _Bool inYourEpisodes;
@property(nonatomic, readonly) _Bool liked;
@property(nonatomic, readonly) _Bool paused;
@property(nonatomic, readonly) _Bool premiumOnly;
@property(nonatomic, readonly) _Bool video;

@end

