//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SLKMentionRangeHelper : NSObject
{
}

+ (id)highlightRegex;
+ (void)highlightSearchTermsAndReplaceMarkersInStyledString:(id)arg1;
+ (id)userGroupMentionsInText:(id)arg1 withProcessedText:(id)arg2 dependenciesProvider:(id)arg3;
+ (id)highlightTermLocations:(id)arg1;
+ (id)stringMentionsInProcessedText:(id)arg1 isMentionValue:(_Bool)arg2 mentionPredicateCache:(id)arg3 account:(id)arg4 notificationPrefs:(id)arg5;
+ (id)highlightedRangesForMentionsInText:(id)arg1 isMentionValue:(_Bool)arg2 dependenciesProvider:(id)arg3 parserContext:(id)arg4 parsingOptions:(unsigned long long)arg5 textProcessingManager:(id)arg6 mentionPredicateCache:(id)arg7 account:(id)arg8 notificationPrefs:(id)arg9;

@end

