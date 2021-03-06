//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPAction.h"

@class NSURL;
@protocol SPTPlaylistModel;

@interface SPTFreeTierPlaylistPrivacyAction : SPAction
{
    _Bool _public;
    id <SPTPlaylistModel> _playlistModel;
    NSURL *_playlistURL;
}

@property(readonly, nonatomic, getter=isPublic) _Bool public; // @synthesize public=_public;
@property(readonly, nonatomic) NSURL *playlistURL; // @synthesize playlistURL=_playlistURL;
@property(readonly, nonatomic) id <SPTPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
- (void).cxx_destruct;
- (id)execute:(id)arg1;
- (long long)style;
- (id)logEventName;
- (long long)icon;
- (id)title;
- (id)initWithPlaylistURL:(id)arg1 playlistModel:(id)arg2 isPublic:(_Bool)arg3 logContext:(id)arg4;

@end

