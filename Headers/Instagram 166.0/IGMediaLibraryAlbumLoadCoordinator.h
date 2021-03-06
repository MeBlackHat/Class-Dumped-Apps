//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IGMediaLibraryAlbumLoadExecutor;

@interface IGMediaLibraryAlbumLoadCoordinator : NSObject
{
    _Bool _didCreateLoader;
    _Bool _didLoadLibrary;
    _Bool _didLoadFullscreenMedia;
    _Bool _didExecute;
    id <IGMediaLibraryAlbumLoadExecutor> _executor;
    long long _criteria;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long criteria; // @synthesize criteria=_criteria;
@property(nonatomic) __weak id <IGMediaLibraryAlbumLoadExecutor> executor; // @synthesize executor=_executor;
- (void)_execute;
- (void)_evaluateIfLoadindNeeded;
- (void)didLoadFullscreenMedia;
- (void)didLoadLibrary;
- (void)didCreateAlbumLoader;
- (id)initWithCriteria:(long long)arg1 executor:(id)arg2;

@end

