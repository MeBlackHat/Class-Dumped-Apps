//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JBTSmartMailAction-Protocol.h"
#import "JavaObject-Protocol.h"

@class ComGoogleCommonBaseOptional, JBTRsvpAction_EventResponseStatus, JBTSmartMailEvent_EventResponseOption_EventResponseType;
@protocol JBTCallback, JBTSmartMailEvent_EventResponseOption, JBTSpan, JavaUtilList;

@protocol JBTRsvpAction <JBTSmartMailAction, JavaObject>
- (void)selectResponseTypeWithCalendarIdWithJBTSmartMailEvent_EventResponseOption_EventResponseType:(JBTSmartMailEvent_EventResponseOption_EventResponseType *)arg1 withComGoogleCommonBaseOptional:(ComGoogleCommonBaseOptional *)arg2 withJBTCallback:(id <JBTCallback>)arg3 withJBTSpan:(id <JBTSpan>)arg4;
- (void)selectResponseTypeWithJBTSmartMailEvent_EventResponseOption_EventResponseType:(JBTSmartMailEvent_EventResponseOption_EventResponseType *)arg1 withJBTCallback:(id <JBTCallback>)arg2 withJBTSpan:(id <JBTSpan>)arg3;
- (ComGoogleCommonBaseOptional *)getLastSelectionTimestampMs;
- (JBTRsvpAction_EventResponseStatus *)getSelectedResponseStatus;
- (id <JBTSmartMailEvent_EventResponseOption>)getSelectedResponseOption;
- (_Bool)canSelectResponse;
- (id <JavaUtilList>)getResponseOptions;
@end

