//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVPlayerItemMetadataCollector, NSArray, NSIndexSet;

@protocol AVPlayerItemMetadataCollectorPushDelegate <NSObject>
- (void)metadataCollector:(AVPlayerItemMetadataCollector *)arg1 didCollectDateRangeMetadataGroups:(NSArray *)arg2 indexesOfNewGroups:(NSIndexSet *)arg3 indexesOfModifiedGroups:(NSIndexSet *)arg4;
@end

