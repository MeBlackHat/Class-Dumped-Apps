//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastPlayerDelegate-Protocol.h"

@interface _TtC27PodcastStorylineFeatureImpl18PSStoriesViewModel : NSObject <SPTPodcastPlayerDelegate>
{
    // Error parsing type: , name: dataSource
    // Error parsing type: , name: showURIStrings
    // Error parsing type: , name: initialIndex
    // Error parsing type: , name: podcastPlayer
    // Error parsing type: , name: player
    // Error parsing type: , name: shareEntityDataFactory
    // Error parsing type: , name: shareCallback
    // Error parsing type: , name: collectionPlatform
    // Error parsing type: , name: logger
    // Error parsing type: , name: delegate
    // Error parsing type: , name: currentIndex
    // Error parsing type: , name: viewModels
}

- (void).cxx_destruct;
- (id)init;
- (void)podcastPlayer:(id)arg1 didUpdateProgressForTrackURL:(id)arg2;
- (double)podcastPlayer:(id)arg1 updateProgressIntervalForTrackURL:(id)arg2;
- (void)podcastPlayerStateDidChange:(id)arg1;
- (void)podcastPlayer:(id)arg1 didChangePlayingTrackURL:(id)arg2 fromTrackURL:(id)arg3;

@end

