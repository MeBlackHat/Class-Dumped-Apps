//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class NSMutableArray, NSString;

@interface GMSx_GMTTDNotice_TransitAlertDetails : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int affectedLineCount; // @dynamic affectedLineCount;
@property(retain, nonatomic) NSMutableArray *affectedLinesArray; // @dynamic affectedLinesArray;
@property(readonly, nonatomic) unsigned long long affectedLinesArray_Count; // @dynamic affectedLinesArray_Count;
@property(copy, nonatomic) NSString *affectedLinesString; // @dynamic affectedLinesString;
@property(nonatomic) _Bool hasAffectedLineCount; // @dynamic hasAffectedLineCount;
@property(nonatomic) _Bool hasAffectedLinesString; // @dynamic hasAffectedLinesString;

@end

