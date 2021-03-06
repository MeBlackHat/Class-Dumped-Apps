//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/FBMPData-Protocol.h>

@class FBMPVideoData, FBMPWorldTrackingData, NSString;

@interface FBMPWorldTrackingFrame : NSObject <FBMPData>
{
    FBMPWorldTrackingData *_worldTrackingData;
    FBMPVideoData *_videoData;
}

+ (id)newWithWorldTrackingData:(id)arg1 videoData:(id)arg2;
+ (id)newFromARFrame:(id)arg1;
@property(readonly, nonatomic) FBMPVideoData *videoData; // @synthesize videoData=_videoData;
@property(readonly, nonatomic) FBMPWorldTrackingData *worldTrackingData; // @synthesize worldTrackingData=_worldTrackingData;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)initWithWorldTrackingData:(id)arg1 videoData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

