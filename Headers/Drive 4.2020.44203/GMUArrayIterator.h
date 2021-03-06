//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GMUIterator-Protocol.h"

@class NSMutableOrderedSet, NSOrderedSet, PHFetchOptions;

@interface GMUArrayIterator : NSObject <GMUIterator>
{
    NSMutableOrderedSet *_assetIdentifiers;
    PHFetchOptions *_fetchOptions;
    CDUnknownBlockType _filterBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType filterBlock; // @synthesize filterBlock=_filterBlock;
- (_Bool)containsAsset:(id)arg1;
- (void)removeAssets:(id)arg1;
- (id)next;
- (void)prependAssetsFromArray:(id)arg1;
- (void)addAssetsFromArray:(id)arg1;
- (void)addAsset:(id)arg1;
@property(readonly, nonatomic) unsigned long long count; // @dynamic count;
@property(readonly) NSOrderedSet *assetIdentifiers;
- (id)init;

@end

