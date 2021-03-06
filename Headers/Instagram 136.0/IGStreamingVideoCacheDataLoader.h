//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGCacheEvictionLogger, IGSparseDiskCache, IGStreamingVideoCacheLogger, IGStreamingVideoCacheRequest;

@interface IGStreamingVideoCacheDataLoader : NSObject
{
    IGStreamingVideoCacheRequest *_originalRequest;
    IGSparseDiskCache *_diskCache;
    IGStreamingVideoCacheLogger *_cacheDataLoadingLogger;
    IGCacheEvictionLogger *_cacheEvictionLogger;
}

- (void).cxx_destruct;
- (id)loadMetaDataFromDiskCache;
- (struct _NSRange)loadRequestFromDiskCache:(id)arg1 andAttachToList:(id)arg2 metaDataEntry:(id)arg3;
- (id)initWithRequest:(id)arg1 diskCache:(id)arg2;

@end

