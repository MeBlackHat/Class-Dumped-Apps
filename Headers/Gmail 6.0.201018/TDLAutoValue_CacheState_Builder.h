//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TDLCacheState_Builder.h"

@class JavaLangBoolean;

@interface TDLAutoValue_CacheState_Builder : TDLCacheState_Builder
{
    JavaLangBoolean *hasPendingMutations_;
    JavaLangBoolean *hasPendingSyncDown_;
}

- (void)dealloc;
- (id)build;
- (id)setHasPendingSyncDownWithBoolean:(_Bool)arg1;
- (id)setHasPendingMutationsWithBoolean:(_Bool)arg1;

@end

