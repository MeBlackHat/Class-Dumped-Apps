//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _TtC6Twitch26ExtensionContextVideoStats : NSObject <NSCopying>
{
    // Error parsing type: , name: playbackMode
    // Error parsing type: , name: bitrate
    // Error parsing type: , name: bufferSize
    // Error parsing type: , name: hlsLatencyBroadcaster
    // Error parsing type: , name: isPaused
    // Error parsing type: , name: videoResolution
}

- (void).cxx_destruct;
- (id)copyWithZone:(void *)arg1;
- (id)init;
@property(nonatomic, copy) NSString *videoResolution;
@property(nonatomic) _Bool isPaused; // @synthesize isPaused;
@property(nonatomic) double hlsLatencyBroadcaster; // @synthesize hlsLatencyBroadcaster;
@property(nonatomic) double bufferSize; // @synthesize bufferSize;
@property(nonatomic) double bitrate; // @synthesize bitrate;
@property(nonatomic) long long playbackMode; // @synthesize playbackMode;

@end

