//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTDownloadsPageVideoEntityModel.h>

#import <Module_Framework/YTMutableEntity-Protocol.h>

@class NSData, NSDictionary, NSString, YTDownloadStatusEntityModel, YTThumbnailDetailsModel;

@interface YTMutableDownloadsPageVideoEntityModel : YTDownloadsPageVideoEntityModel <YTMutableEntity>
{
}

- (void)parseAndExtractFieldsFromProtoIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSDictionary *entityMetadata; // @dynamic entityMetadata;
@property(copy, nonatomic) NSData *data; // @dynamic data;
@property(retain, nonatomic) NSString *publishedTimeText; // @dynamic publishedTimeText;
@property(retain, nonatomic) NSString *viewCountText; // @dynamic viewCountText;
@property(nonatomic) int uiType; // @dynamic uiType;
@property(nonatomic) _Bool isLargeFormFactor; // @dynamic isLargeFormFactor;
@property(nonatomic) _Bool isAndroid; // @dynamic isAndroid;
@property(retain, nonatomic) NSString *videoId; // @dynamic videoId;
@property(nonatomic) int playbackPositionSeconds; // @dynamic playbackPositionSeconds;
@property(retain, nonatomic) NSString *videoLengthAccessibilityText; // @dynamic videoLengthAccessibilityText;
@property(nonatomic) int videoLengthSeconds; // @dynamic videoLengthSeconds;
@property(retain, nonatomic) NSString *channelOwner; // @dynamic channelOwner;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) YTThumbnailDetailsModel *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) YTDownloadStatusEntityModel *downloadStatus; // @dynamic downloadStatus;
- (id)initWithEntityStore:(id)arg1 entityKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *entityKey;
@property(readonly, copy, nonatomic) NSData *entityVersion;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

