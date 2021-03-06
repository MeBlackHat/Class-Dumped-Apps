//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelegramUI/CBCoubAsset-Protocol.h>

@class CBCoubAudioSource, CBCoubAuthorVO, CBCoubVideoSource, NSArray, NSDate, NSString, NSURL;

@interface CBCoubNew : NSObject <CBCoubAsset>
{
    _Bool _failedDownloadChunks;
    _Bool _isDone;
    _Bool _liked;
    _Bool _recoubed;
    _Bool _cotd;
    _Bool _flagged;
    _Bool _deleted;
    _Bool _isMyCoub;
    _Bool _isCoubSourcesAvailable;
    unsigned short _audioType;
    NSString *_coubID;
    NSString *_permalink;
    NSString *_originalPermalink;
    NSString *_visibility;
    CBCoubAuthorVO *_author;
    CBCoubAuthorVO *_recouber;
    NSString *_title;
    NSDate *_creationDate;
    NSDate *_originalCreationDate;
    NSArray *_tags;
    unsigned long long _viewCount;
    unsigned long long _likeCount;
    unsigned long long _recoubCount;
    NSString *_externalDownloadType;
    NSString *_externalDownloadSource;
    NSURL *_coubWebViewURL;
    NSURL *_customLocalVideoFileURL;
    NSString *_remoteVideoLocation;
    NSString *_remoteAudioLocation;
    NSString *_remoteAudioLocationPattern;
    NSString *_mediumPicture;
    NSString *_largePicture;
    NSString *_creationDateAsString;
    NSString *_originalCreationDateAsString;
    CBCoubAudioSource *_audioSource;
    CBCoubVideoSource *_videoSource;
}

+ (id)coubWithAttributes:(id)arg1;
@property(retain, nonatomic) CBCoubVideoSource *videoSource; // @synthesize videoSource=_videoSource;
@property(retain, nonatomic) CBCoubAudioSource *audioSource; // @synthesize audioSource=_audioSource;
@property(nonatomic) _Bool isCoubSourcesAvailable; // @synthesize isCoubSourcesAvailable=_isCoubSourcesAvailable;
@property(retain, nonatomic) NSString *originalCreationDateAsString; // @synthesize originalCreationDateAsString=_originalCreationDateAsString;
@property(retain, nonatomic) NSString *creationDateAsString; // @synthesize creationDateAsString=_creationDateAsString;
@property(retain, nonatomic) NSString *largePicture; // @synthesize largePicture=_largePicture;
@property(retain, nonatomic) NSString *mediumPicture; // @synthesize mediumPicture=_mediumPicture;
@property(retain, nonatomic) NSString *remoteAudioLocationPattern; // @synthesize remoteAudioLocationPattern=_remoteAudioLocationPattern;
@property(retain, nonatomic) NSString *remoteAudioLocation; // @synthesize remoteAudioLocation=_remoteAudioLocation;
@property(retain, nonatomic) NSString *remoteVideoLocation; // @synthesize remoteVideoLocation=_remoteVideoLocation;
@property(retain, nonatomic) NSURL *customLocalVideoFileURL; // @synthesize customLocalVideoFileURL=_customLocalVideoFileURL;
@property(readonly, nonatomic) _Bool isMyCoub; // @synthesize isMyCoub=_isMyCoub;
@property(readonly, nonatomic) NSURL *coubWebViewURL; // @synthesize coubWebViewURL=_coubWebViewURL;
@property(retain, nonatomic) NSString *externalDownloadSource; // @synthesize externalDownloadSource=_externalDownloadSource;
@property(retain, nonatomic) NSString *externalDownloadType; // @synthesize externalDownloadType=_externalDownloadType;
@property(nonatomic) unsigned short audioType; // @synthesize audioType=_audioType;
@property(nonatomic) _Bool deleted; // @synthesize deleted=_deleted;
@property(nonatomic) _Bool flagged; // @synthesize flagged=_flagged;
@property(nonatomic) _Bool cotd; // @synthesize cotd=_cotd;
@property(nonatomic) _Bool recoubed; // @synthesize recoubed=_recoubed;
@property(nonatomic) _Bool liked; // @synthesize liked=_liked;
@property(nonatomic) unsigned long long recoubCount; // @synthesize recoubCount=_recoubCount;
@property(nonatomic) unsigned long long likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) unsigned long long viewCount; // @synthesize viewCount=_viewCount;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSDate *originalCreationDate; // @synthesize originalCreationDate=_originalCreationDate;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) CBCoubAuthorVO *recouber; // @synthesize recouber=_recouber;
@property(retain, nonatomic) CBCoubAuthorVO *author; // @synthesize author=_author;
@property(nonatomic) _Bool isDone; // @synthesize isDone=_isDone;
@property(retain, nonatomic) NSString *visibility; // @synthesize visibility=_visibility;
@property(retain, nonatomic) NSString *originalPermalink; // @synthesize originalPermalink=_originalPermalink;
@property(retain, nonatomic) NSString *permalink; // @synthesize permalink=_permalink;
@property(retain, nonatomic) NSString *coubID; // @synthesize coubID=_coubID;
- (void).cxx_destruct;
- (void)setFailedDownloadChunk:(_Bool)arg1;
- (_Bool)failedDownloadChunk;
- (id)localAudioChunkWithIdx:(long long)arg1;
- (id)remoteAudioChunkWithIdx:(long long)arg1;
- (_Bool)isEqualToCoub:(id)arg1;
- (_Bool)isAudioAvailable;
@property(readonly, nonatomic) NSString *assetId;
- (id)localAudioFileURL;
@property(readonly, nonatomic) NSURL *localVideoFileURL;
@property(readonly, nonatomic) NSURL *externalAudioURL;
@property(readonly, nonatomic) NSURL *remoteVideoFileURL;
@property(readonly, nonatomic) _Bool isRecoub;
@property(readonly, nonatomic) NSURL *largeImageURL;
@property(readonly, nonatomic) NSURL *mediumImageURL;
- (_Bool)isDraft;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

