//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSData, NSError;

@protocol FNFAssetEventListener
- (void)manifestDataFetched:(NSData *)arg1 isFirstManifest:(_Bool)arg2;
- (void)playerLiveItemDidEnd:(NSError *)arg1;
- (void)playerItemDidFail:(NSError *)arg1;
- (void)playbackDidUndry;
- (void)playbackDidDryOut;
- (void)playerItemDidWarn:(NSError *)arg1;
- (void)durationChanged:(CDStruct_1b6d18a9)arg1;
- (void)timeLoadedChanged:(NSArray *)arg1;
@end

