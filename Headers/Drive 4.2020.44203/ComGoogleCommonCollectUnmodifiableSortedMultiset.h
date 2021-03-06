//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectMultisets_UnmodifiableMultiset.h"

#import "ComGoogleCommonCollectSortedMultiset-Protocol.h"

@class NSString;

@interface ComGoogleCommonCollectUnmodifiableSortedMultiset : ComGoogleCommonCollectMultisets_UnmodifiableMultiset <ComGoogleCommonCollectSortedMultiset>
{
    ComGoogleCommonCollectUnmodifiableSortedMultiset *descendingMultiset_;
}

- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)tailMultisetWithId:(id)arg1 withComGoogleCommonCollectBoundType:(id)arg2;
- (id)subMultisetWithId:(id)arg1 withComGoogleCommonCollectBoundType:(id)arg2 withId:(id)arg3 withComGoogleCommonCollectBoundType:(id)arg4;
- (id)headMultisetWithId:(id)arg1 withComGoogleCommonCollectBoundType:(id)arg2;
- (id)pollLastEntry;
- (id)pollFirstEntry;
- (id)lastEntry;
- (id)firstEntry;
- (id)descendingMultiset;
- (id)elementSet;
- (id)createElementSet;
- (id)comparator;
- (id)delegate;
- (id)initPackagePrivateWithComGoogleCommonCollectSortedMultiset:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

