//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectForwardingConcurrentMap.h"

#import "JavaIoSerializable-Protocol.h"

@class ComGoogleCommonBaseEquivalence, ComGoogleCommonCollectMapMakerInternalMap_Strength, NSString;
@protocol JavaUtilConcurrentConcurrentMap;

@interface ComGoogleCommonCollectMapMakerInternalMap_AbstractSerializationProxy : ComGoogleCommonCollectForwardingConcurrentMap <JavaIoSerializable>
{
    ComGoogleCommonCollectMapMakerInternalMap_Strength *keyStrength_;
    ComGoogleCommonCollectMapMakerInternalMap_Strength *valueStrength_;
    ComGoogleCommonBaseEquivalence *keyEquivalence_;
    ComGoogleCommonBaseEquivalence *valueEquivalence_;
    int concurrencyLevel_;
    id <JavaUtilConcurrentConcurrentMap> delegate_;
}

- (void)dealloc;
- (void)readEntriesWithJavaIoObjectInputStream:(id)arg1;
- (id)readMapMakerWithJavaIoObjectInputStream:(id)arg1;
- (void)writeMapToWithJavaIoObjectOutputStream:(id)arg1;
- (id)delegate;
- (id)initWithComGoogleCommonCollectMapMakerInternalMap_Strength:(id)arg1 withComGoogleCommonCollectMapMakerInternalMap_Strength:(id)arg2 withComGoogleCommonBaseEquivalence:(id)arg3 withComGoogleCommonBaseEquivalence:(id)arg4 withInt:(int)arg5 withJavaUtilConcurrentConcurrentMap:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

