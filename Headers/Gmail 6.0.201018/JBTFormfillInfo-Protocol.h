//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class ComGoogleCommonBaseOptional, ComGoogleCommonCollectImmutableList, NSString;
@protocol JBTFormfillPostSubmissionInfo;

@protocol JBTFormfillInfo <JavaObject>
- (_Bool)shouldEnableVisualElementLogging;
- (ComGoogleCommonBaseOptional *)getPrefillStatement;
- (id <JBTFormfillPostSubmissionInfo>)getPostSubmissionInfo;
- (ComGoogleCommonBaseOptional *)getDisplayOptions;
- (ComGoogleCommonBaseOptional *)getFormSubmissionUrl;
- (NSString *)getSubmitButtonText;
- (ComGoogleCommonCollectImmutableList *)getDisclaimers;
- (ComGoogleCommonCollectImmutableList *)getFields;
- (ComGoogleCommonBaseOptional *)getDescription;
- (ComGoogleCommonBaseOptional *)getHeadline;
@end

