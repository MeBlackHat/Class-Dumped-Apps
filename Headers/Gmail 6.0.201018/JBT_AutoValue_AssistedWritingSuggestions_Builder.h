//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JBTAssistedWritingSuggestions_Builder.h"

@class ComGoogleCommonBaseOptional, ComGoogleCommonCollectImmutableList, JBTSmartcomposeDismissEvent_Type, JBTSmartcomposeMetadata;

@interface JBT_AutoValue_AssistedWritingSuggestions_Builder : JBTAssistedWritingSuggestions_Builder
{
    ComGoogleCommonBaseOptional *smartcompose_;
    JBTSmartcomposeMetadata *smartcomposeMetadata_;
    JBTSmartcomposeDismissEvent_Type *smartcomposeDismissType_;
    ComGoogleCommonBaseOptional *autocorrect_;
    ComGoogleCommonCollectImmutableList *dataProtection_;
    ComGoogleCommonBaseOptional *spellingAndGrammar_;
}

- (void)dealloc;
- (id)build;
- (id)setSpellingAndGrammarWithComGoogleCommonBaseOptional:(id)arg1;
- (id)setDataProtectionWithJavaUtilList:(id)arg1;
- (id)setAutocorrectWithComGoogleCommonBaseOptional:(id)arg1;
- (id)setSmartcomposeDismissTypeWithJBTSmartcomposeDismissEvent_Type:(id)arg1;
- (id)setSmartcomposeMetadataWithJBTSmartcomposeMetadata:(id)arg1;
- (id)setSmartcomposeWithComGoogleCommonBaseOptional:(id)arg1;

@end

