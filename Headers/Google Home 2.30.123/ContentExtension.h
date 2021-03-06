//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ContentInfo, LocationContext;

@interface ContentExtension : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ContentInfo *contentInfo; // @dynamic contentInfo;
@property(nonatomic) _Bool hasContentInfo; // @dynamic hasContentInfo;
@property(nonatomic) _Bool hasInteractionType; // @dynamic hasInteractionType;
@property(nonatomic) _Bool hasLocationContext; // @dynamic hasLocationContext;
@property(nonatomic) _Bool hasUserActionType; // @dynamic hasUserActionType;
@property(nonatomic) int interactionType; // @dynamic interactionType;
@property(retain, nonatomic) LocationContext *locationContext; // @dynamic locationContext;
@property(nonatomic) int userActionType; // @dynamic userActionType;

@end

