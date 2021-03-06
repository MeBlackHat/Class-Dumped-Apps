//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSCFlags;
@protocol MDILogger;

@interface MSCFileManager : NSObject
{
    id <MDILogger> _logger;
    MSCFlags *_flags;
}

+ (id)sharedGroupID;
+ (void)setSharedGroupID:(id)arg1;
+ (id)managerWithFlags:(id)arg1 logger:(id)arg2;
- (void).cxx_destruct;
- (_Bool)deleteEntriesAtUserPath:(id)arg1 TTL:(double)arg2 error:(id *)arg3;
- (id)dataAtURL:(id)arg1 maxAge:(double)arg2 error:(id *)arg3;
- (_Bool)isDataAtURL:(id)arg1 maxAge:(double)arg2 error:(id *)arg3;
- (_Bool)atomicallyDeleteDirectoryAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)removeItemAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)renameItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (_Bool)writeData:(id)arg1 toCacheEntryAtURL:(id)arg2 error:(id *)arg3;
- (_Bool)createDirectoryAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)removeUserPath:(id)arg1 rootURL:(id)arg2 error:(id *)arg3;
- (id)privateCacheURLWithError:(id *)arg1;
- (id)sharedContainerURLWithError:(id *)arg1;
- (id)initWithFlags:(id)arg1 logger:(id)arg2;

@end

