//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RAPIScreenConfig.h"

@protocol RAPIMainScreenDelegate;

@interface RAPIMainScreenConfig : RAPIScreenConfig
{
    _Bool _showArtistIcon;
    _Bool _showAlbumIcon;
    _Bool _showTrackIcon;
    id <RAPIMainScreenDelegate> _delegate;
}

- (void).cxx_destruct;
@property _Bool showTrackIcon; // @synthesize showTrackIcon=_showTrackIcon;
@property _Bool showAlbumIcon; // @synthesize showAlbumIcon=_showAlbumIcon;
@property _Bool showArtistIcon; // @synthesize showArtistIcon=_showArtistIcon;
@property(retain) id <RAPIMainScreenDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;

@end

