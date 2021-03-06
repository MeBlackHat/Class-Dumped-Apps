//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GPBEnumArray, NSMutableArray, NSString;

@interface CPBCallSurveyLogEntry : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBEnumArray *availableTabArray; // @dynamic availableTabArray;
@property(readonly, nonatomic) unsigned long long availableTabArray_Count; // @dynamic availableTabArray_Count;
@property(nonatomic) _Bool hasHatsSessionId; // @dynamic hasHatsSessionId;
@property(nonatomic) _Bool hasIncidentId; // @dynamic hasIncidentId;
@property(nonatomic) _Bool hasRating; // @dynamic hasRating;
@property(nonatomic) _Bool hasSessionId; // @dynamic hasSessionId;
@property(nonatomic) _Bool hasUploadLogError; // @dynamic hasUploadLogError;
@property(copy, nonatomic) NSString *hatsSessionId; // @dynamic hatsSessionId;
@property(copy, nonatomic) NSString *incidentId; // @dynamic incidentId;
@property(nonatomic) int rating; // @dynamic rating;
@property(copy, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) int uploadLogError; // @dynamic uploadLogError;
@property(retain, nonatomic) NSMutableArray *userResponseArray; // @dynamic userResponseArray;
@property(readonly, nonatomic) unsigned long long userResponseArray_Count; // @dynamic userResponseArray_Count;

@end

