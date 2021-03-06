//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectForwardingSortedSet.h"

#import "JavaIoSerializable-Protocol.h"
#import "JavaUtilNavigableSet-Protocol.h"

@class NSString;
@protocol JavaUtilNavigableSet, JavaUtilSortedSet;

@interface ComGoogleCommonCollectSets_UnmodifiableNavigableSet : ComGoogleCommonCollectForwardingSortedSet <JavaUtilNavigableSet, JavaIoSerializable>
{
    id <JavaUtilNavigableSet> delegate_;
    id <JavaUtilSortedSet> unmodifiableDelegate_;
    ComGoogleCommonCollectSets_UnmodifiableNavigableSet *descendingSet_;
}

- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)tailSetWithId:(id)arg1 withBoolean:(_Bool)arg2;
- (id)headSetWithId:(id)arg1 withBoolean:(_Bool)arg2;
- (id)subSetWithId:(id)arg1 withBoolean:(_Bool)arg2 withId:(id)arg3 withBoolean:(_Bool)arg4;
- (id)descendingIterator;
- (id)descendingSet;
- (id)pollLast;
- (id)pollFirst;
- (id)higherWithId:(id)arg1;
- (id)ceilingWithId:(id)arg1;
- (id)floorWithId:(id)arg1;
- (id)lowerWithId:(id)arg1;
- (void)forEachWithJavaUtilFunctionConsumer:(id)arg1;
- (id)parallelStream;
- (id)stream;
- (_Bool)removeIfWithJavaUtilFunctionPredicate:(id)arg1;
- (id)delegate;
- (id)initWithJavaUtilNavigableSet:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

