//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSSet, WAPBRankingMetricSet;

@interface WARankingMetricSet : NSManagedObject
{
    WAPBRankingMetricSet *_pbMetricSet;
}

+ (unsigned int)packedIntFromVector: /* Error: Ran out of types for this method. */;
+     // Error parsing type: 20@0:8I16, name: vectorFromPackedInt:
+ (id)entityName;
- (void).cxx_destruct;
- (id)codableCopy;
// Error parsing type for property cachedGroupScores:
// Property attributes: T,N

@property(nonatomic) double groupScoreDelta;
@property(nonatomic) double rankScoreDelta;
@property(nonatomic) _Bool needsLinkUpdate; // @dynamic needsLinkUpdate;
- (void)absorbMetricSet:(id)arg1;
- (void)serializeDataAndUpdateTimestamp;
- (void)serializeData;
- (void)loadDataIfNeeded;
- (id)metricForEvent:(id)arg1 shouldCreate:(_Bool)arg2;
-     // Error parsing type: 48@0:8@16d24@32o^d40, name: logEvent:withValue:ceiling:loggedValue:
- (void)prepareWithKey:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSData *data; // @dynamic data;
@property(nonatomic) long long flags; // @dynamic flags;
@property(copy, nonatomic) NSData *key; // @dynamic key;
@property(copy, nonatomic) NSDate *lastUpdated; // @dynamic lastUpdated;
@property(copy, nonatomic) NSSet *linkedMetricSets; // @dynamic linkedMetricSets;

@end

