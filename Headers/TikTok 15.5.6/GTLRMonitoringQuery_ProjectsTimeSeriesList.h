//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRMonitoringQuery.h"

@class GTLRDateTime, GTLRDuration, NSArray, NSString;

@interface GTLRMonitoringQuery_ProjectsTimeSeriesList : GTLRMonitoringQuery
{
}

+ (id)queryWithName:(id)arg1;
+ (id)arrayPropertyToClassMap;
+ (id)parameterNameMap;

// Remaining properties
@property(retain, nonatomic) GTLRDuration *aggregationAlignmentPeriod; // @dynamic aggregationAlignmentPeriod;
@property(copy, nonatomic) NSString *aggregationCrossSeriesReducer; // @dynamic aggregationCrossSeriesReducer;
@property(retain, nonatomic) NSArray *aggregationGroupByFields; // @dynamic aggregationGroupByFields;
@property(copy, nonatomic) NSString *aggregationPerSeriesAligner; // @dynamic aggregationPerSeriesAligner;
@property(copy, nonatomic) NSString *filter; // @dynamic filter;
@property(retain, nonatomic) GTLRDateTime *intervalEndTime; // @dynamic intervalEndTime;
@property(retain, nonatomic) GTLRDateTime *intervalStartTime; // @dynamic intervalStartTime;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *orderBy; // @dynamic orderBy;
@property(nonatomic) long long pageSize; // @dynamic pageSize;
@property(copy, nonatomic) NSString *pageToken; // @dynamic pageToken;
@property(copy, nonatomic) NSString *view; // @dynamic view;

@end

