//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@interface YTIClientVSI : GPBMessage
{
}

+ (id)descriptor;
+ (id)clientVSIForAssetURL:(id)arg1 isAssetGenerated:(_Bool)arg2;

// Remaining properties
@property(nonatomic) int audioChannels; // @dynamic audioChannels;
@property(nonatomic) int audioCodecId; // @dynamic audioCodecId;
@property(nonatomic) long long audioStreamIndex; // @dynamic audioStreamIndex;
@property(nonatomic) double avLength; // @dynamic avLength;
@property(nonatomic) int containerId; // @dynamic containerId;
@property(nonatomic) _Bool hasAudioChannels; // @dynamic hasAudioChannels;
@property(nonatomic) _Bool hasAudioCodecId; // @dynamic hasAudioCodecId;
@property(nonatomic) _Bool hasAudioStreamIndex; // @dynamic hasAudioStreamIndex;
@property(nonatomic) _Bool hasAvLength; // @dynamic hasAvLength;
@property(nonatomic) _Bool hasContainerId; // @dynamic hasContainerId;
@property(nonatomic) _Bool hasPixelFormatId; // @dynamic hasPixelFormatId;
@property(nonatomic) _Bool hasVideoCodecId; // @dynamic hasVideoCodecId;
@property(nonatomic) _Bool hasVideoFps; // @dynamic hasVideoFps;
@property(nonatomic) _Bool hasVideoHasLeadingMoovAtom; // @dynamic hasVideoHasLeadingMoovAtom;
@property(nonatomic) _Bool hasVideoHeight; // @dynamic hasVideoHeight;
@property(nonatomic) _Bool hasVideoStreamIndex; // @dynamic hasVideoStreamIndex;
@property(nonatomic) _Bool hasVideoWidth; // @dynamic hasVideoWidth;
@property(nonatomic) int pixelFormatId; // @dynamic pixelFormatId;
@property(nonatomic) int videoCodecId; // @dynamic videoCodecId;
@property(nonatomic) double videoFps; // @dynamic videoFps;
@property(nonatomic) _Bool videoHasLeadingMoovAtom; // @dynamic videoHasLeadingMoovAtom;
@property(nonatomic) int videoHeight; // @dynamic videoHeight;
@property(nonatomic) long long videoStreamIndex; // @dynamic videoStreamIndex;
@property(nonatomic) int videoWidth; // @dynamic videoWidth;

@end

