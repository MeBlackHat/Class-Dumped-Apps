//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectImmutableSet_SetBuilderImpl.h"

@protocol JavaUtilSet;

@interface ComGoogleCommonCollectImmutableSet_JdkBackedSetBuilderImpl : ComGoogleCommonCollectImmutableSet_SetBuilderImpl
{
    id <JavaUtilSet> delegate_;
}

- (void)dealloc;
- (id)build;
- (id)copy__;
- (id)addWithId:(id)arg1;

@end

