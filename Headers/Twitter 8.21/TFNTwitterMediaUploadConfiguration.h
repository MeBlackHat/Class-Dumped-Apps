//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCopying-Protocol.h>
#import <T1Twitter/TFNTwitterMediaUploadConfiguration-Protocol.h>

@class NSString;

@interface TFNTwitterMediaUploadConfiguration : NSObject <TFNTwitterMediaUploadConfiguration, NSCopying>
{
    _Bool _photosSegmentedUploadSegmentSizeBackoffPolicyEnabled;
    _Bool _videosSegmentedUploadSegmentSizeBackoffPolicyEnabled;
    long long _photosSegmentedUploadSegmentSizeForPoorNetwork;
    long long _photosSegmentedUploadSegmentSizeForGoodNetwork;
    long long _photosSegmentedUploadSegmentSizeForGreatNetwork;
    long long _photosSegmentedUploadMinimumSegmentSize;
    long long _photosSegmentedUploadMaxiumRetryPerRequest;
    long long _photoHighBandwidthUploadDimension;
    long long _photoMediumBandwidthUploadDimension;
    long long _photoLowBandwidthUploadDimension;
    long long _photoLosslessCompressionMaximumResolution;
    long long _videosSegmentedUploadSegmentSizeForPoorNetwork;
    long long _videosSegmentedUploadSegmentSizeForGoodNetwork;
    long long _videosSegmentedUploadSegmentSizeForGreatNetwork;
    long long _videosSegmentedUploadMinimumSegmentSize;
    long long _videosSegmentedUploadMaxiumRetryPerRequest;
    long long _mediaUploadGroupPolicy;
    double _mediaAsyncUploadMaxVideoDuration;
    unsigned long long _mediaAsyncUploadMaxGifSizeInMBs;
}

+ (id)configurationForAccount:(id)arg1;
+ (void)setConfigurationProvider:(id)arg1;
@property(readonly, nonatomic) unsigned long long mediaAsyncUploadMaxGifSizeInMBs; // @synthesize mediaAsyncUploadMaxGifSizeInMBs=_mediaAsyncUploadMaxGifSizeInMBs;
@property(readonly, nonatomic) double mediaAsyncUploadMaxVideoDuration; // @synthesize mediaAsyncUploadMaxVideoDuration=_mediaAsyncUploadMaxVideoDuration;
@property(readonly, nonatomic) long long mediaUploadGroupPolicy; // @synthesize mediaUploadGroupPolicy=_mediaUploadGroupPolicy;
@property(readonly, nonatomic) long long videosSegmentedUploadMaxiumRetryPerRequest; // @synthesize videosSegmentedUploadMaxiumRetryPerRequest=_videosSegmentedUploadMaxiumRetryPerRequest;
@property(readonly, nonatomic) long long videosSegmentedUploadMinimumSegmentSize; // @synthesize videosSegmentedUploadMinimumSegmentSize=_videosSegmentedUploadMinimumSegmentSize;
@property(readonly, nonatomic) long long videosSegmentedUploadSegmentSizeForGreatNetwork; // @synthesize videosSegmentedUploadSegmentSizeForGreatNetwork=_videosSegmentedUploadSegmentSizeForGreatNetwork;
@property(readonly, nonatomic) long long videosSegmentedUploadSegmentSizeForGoodNetwork; // @synthesize videosSegmentedUploadSegmentSizeForGoodNetwork=_videosSegmentedUploadSegmentSizeForGoodNetwork;
@property(readonly, nonatomic) long long videosSegmentedUploadSegmentSizeForPoorNetwork; // @synthesize videosSegmentedUploadSegmentSizeForPoorNetwork=_videosSegmentedUploadSegmentSizeForPoorNetwork;
@property(readonly, nonatomic, getter=isVideosSegmentedUploadSegmentSizeBackoffPolicyEnabled) _Bool videosSegmentedUploadSegmentSizeBackoffPolicyEnabled; // @synthesize videosSegmentedUploadSegmentSizeBackoffPolicyEnabled=_videosSegmentedUploadSegmentSizeBackoffPolicyEnabled;
@property(readonly, nonatomic) long long photoLosslessCompressionMaximumResolution; // @synthesize photoLosslessCompressionMaximumResolution=_photoLosslessCompressionMaximumResolution;
@property(readonly, nonatomic) long long photoLowBandwidthUploadDimension; // @synthesize photoLowBandwidthUploadDimension=_photoLowBandwidthUploadDimension;
@property(readonly, nonatomic) long long photoMediumBandwidthUploadDimension; // @synthesize photoMediumBandwidthUploadDimension=_photoMediumBandwidthUploadDimension;
@property(readonly, nonatomic) long long photoHighBandwidthUploadDimension; // @synthesize photoHighBandwidthUploadDimension=_photoHighBandwidthUploadDimension;
@property(readonly, nonatomic) long long photosSegmentedUploadMaxiumRetryPerRequest; // @synthesize photosSegmentedUploadMaxiumRetryPerRequest=_photosSegmentedUploadMaxiumRetryPerRequest;
@property(readonly, nonatomic) long long photosSegmentedUploadMinimumSegmentSize; // @synthesize photosSegmentedUploadMinimumSegmentSize=_photosSegmentedUploadMinimumSegmentSize;
@property(readonly, nonatomic) long long photosSegmentedUploadSegmentSizeForGreatNetwork; // @synthesize photosSegmentedUploadSegmentSizeForGreatNetwork=_photosSegmentedUploadSegmentSizeForGreatNetwork;
@property(readonly, nonatomic) long long photosSegmentedUploadSegmentSizeForGoodNetwork; // @synthesize photosSegmentedUploadSegmentSizeForGoodNetwork=_photosSegmentedUploadSegmentSizeForGoodNetwork;
@property(readonly, nonatomic) long long photosSegmentedUploadSegmentSizeForPoorNetwork; // @synthesize photosSegmentedUploadSegmentSizeForPoorNetwork=_photosSegmentedUploadSegmentSizeForPoorNetwork;
@property(readonly, nonatomic, getter=isPhotosSegmentedUploadSegmentSizeBackoffPolicyEnabled) _Bool photosSegmentedUploadSegmentSizeBackoffPolicyEnabled; // @synthesize photosSegmentedUploadSegmentSizeBackoffPolicyEnabled=_photosSegmentedUploadSegmentSizeBackoffPolicyEnabled;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

