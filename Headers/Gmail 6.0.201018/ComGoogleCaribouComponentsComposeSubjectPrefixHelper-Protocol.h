//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class NSString;

@protocol ComGoogleCaribouComponentsComposeSubjectPrefixHelper <JavaObject>
- (NSString *)getStringBeforeFirstPrefixWithNSString:(NSString *)arg1;
- (NSString *)stripLeadingSubstringAndAllCommonPrefixesWithNSString:(NSString *)arg1;
- (_Bool)hasForwardPrefixWithNSString:(NSString *)arg1;
- (NSString *)createReplyDraftSubjectWithNSString:(NSString *)arg1;
- (NSString *)createForwardDraftSubjectWithNSString:(NSString *)arg1;
- (NSString *)stripAllCommonSubjectPrefixesWithNSString:(NSString *)arg1;
- (NSString *)stripPrefixFromSubjectWithNSString:(NSString *)arg1;
@end

