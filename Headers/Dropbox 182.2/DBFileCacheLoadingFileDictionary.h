//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface DBFileCacheLoadingFileDictionary : NSObject
{
    NSMutableDictionary *_localPathToLoadingFileMap;
    NSMutableDictionary *_dropboxPathAndReprToLoadingFileMap;
}

- (void).cxx_destruct;
- (_Bool)containsLoadingFileForDropboxPath:(id)arg1;
- (id)loadingFilesForDropboxPath:(id)arg1;
- (id)loadingFileForDropboxPath:(id)arg1 repr:(long long)arg2;
- (id)loadingFileForLocalPath:(id)arg1;
- (unsigned long long)count;
- (_Bool)db_removeLoadingFile:(id)arg1;
- (void)removeLoadingFileForLocalPath:(id)arg1;
- (void)addLoadingFile:(id)arg1;
- (id)init;

@end

