//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface ORCH2TextInputCondition : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int conditionOneOfCase; // @dynamic conditionOneOfCase;
@property(nonatomic) int conditionType; // @dynamic conditionType;
@property(nonatomic) _Bool hasConditionType; // @dynamic hasConditionType;
@property(copy, nonatomic) NSString *valueMatchRegex; // @dynamic valueMatchRegex;

@end

