//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAssistedCurationTrackModelEntity-Protocol.h"

@class NSArray, NSString, NSURL;

@interface SPTAssistedCurationTopGenreTrack : NSObject <SPTAssistedCurationTrackModelEntity>
{
    _Bool _ratedExplicit;
    _Bool _is19PlusOnly;
    NSString *_name;
    NSURL *_URL;
    NSArray *_artists;
    NSURL *_imageURL;
    NSString *_previewId;
}

+ (_Bool)is19PlusOnlyFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool is19PlusOnly; // @synthesize is19PlusOnly=_is19PlusOnly;
@property(readonly, nonatomic, getter=isRatedExplicit) _Bool ratedExplicit; // @synthesize ratedExplicit=_ratedExplicit;
@property(readonly, nonatomic) NSString *previewId; // @synthesize previewId=_previewId;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic) NSArray *artists; // @synthesize artists=_artists;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

