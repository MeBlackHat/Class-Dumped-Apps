//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTFreeTierArtistEntityImpl.h"

#import "SPTFreeTierArtistAlbum-Protocol.h"

@class NSString, NSURL;
@protocol SPTFreeTierArtistImage;

@interface SPTFreeTierArtistAlbumImpl : SPTFreeTierArtistEntityImpl <SPTFreeTierArtistAlbum>
{
    NSString *_year;
    NSString *_releaseDate;
    unsigned long long _trackCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long trackCount; // @synthesize trackCount=_trackCount;
@property(copy, nonatomic) NSString *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(copy, nonatomic) NSString *year; // @synthesize year=_year;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *fileId;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <SPTFreeTierArtistImage> headerImage;
@property(readonly, nonatomic) id <SPTFreeTierArtistImage> image;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSURL *uri;

@end

