//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSSyncV2EntitiesHandleEventsResult_Builder.h"

@class ComGoogleCommonCollectImmutableSet, JavaLangBoolean, JavaLangInteger;

@interface DYNSSyncV2EntitiesAutoValue_HandleEventsResult_Builder : DYNSSyncV2EntitiesHandleEventsResult_Builder
{
    JavaLangBoolean *eventProcessingSucceeded_;
    JavaLangBoolean *dataIsValid_;
    JavaLangInteger *eventsProcessedCount_;
    JavaLangBoolean *needsCatchUp_;
    ComGoogleCommonCollectImmutableSet *entitiesNeedingBackfill_;
}

- (void)dealloc;
- (id)build;
- (id)setEntitiesNeedingBackfillWithJavaUtilSet:(id)arg1;
- (id)setNeedsCatchUpWithBoolean:(_Bool)arg1;
- (id)setEventsProcessedCountWithInt:(int)arg1;
- (id)setDataIsValidWithBoolean:(_Bool)arg1;
- (id)setEventProcessingSucceededWithBoolean:(_Bool)arg1;

@end

