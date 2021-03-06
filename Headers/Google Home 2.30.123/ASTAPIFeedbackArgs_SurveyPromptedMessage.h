//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface ASTAPIFeedbackArgs_SurveyPromptedMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *acknowledgement; // @dynamic acknowledgement;
@property(retain, nonatomic) NSMutableArray *followOnOptionsArray; // @dynamic followOnOptionsArray;
@property(readonly, nonatomic) unsigned long long followOnOptionsArray_Count; // @dynamic followOnOptionsArray_Count;
@property(copy, nonatomic) NSString *happyTip; // @dynamic happyTip;
@property(nonatomic) _Bool hasAcknowledgement; // @dynamic hasAcknowledgement;
@property(nonatomic) _Bool hasHappyTip; // @dynamic hasHappyTip;
@property(nonatomic) _Bool hasQuestion; // @dynamic hasQuestion;
@property(nonatomic) _Bool hasUnhappyTip; // @dynamic hasUnhappyTip;
@property(copy, nonatomic) NSString *question; // @dynamic question;
@property(copy, nonatomic) NSString *unhappyTip; // @dynamic unhappyTip;

@end

