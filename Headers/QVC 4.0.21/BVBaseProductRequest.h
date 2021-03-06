//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BVSDK/BVConversationsRequest.h>

@class NSMutableArray;

@interface BVBaseProductRequest : BVConversationsRequest
{
    NSMutableArray *_reviewFilters;
    NSMutableArray *_questionFilters;
    NSMutableArray *_pdpIncludes;
    NSMutableArray *_includes;
}

@property(readonly, nonatomic) NSMutableArray *includes; // @synthesize includes=_includes;
@property(readonly, nonatomic) NSMutableArray *pdpIncludes; // @synthesize pdpIncludes=_pdpIncludes;
@property(readonly, nonatomic) NSMutableArray *questionFilters; // @synthesize questionFilters=_questionFilters;
@property(readonly, nonatomic) NSMutableArray *reviewFilters; // @synthesize reviewFilters=_reviewFilters;
- (void).cxx_destruct;
- (id)createParams;
- (id)addIncludedQuestionsFilterType:(id)arg1 relationalFilterOperator:(id)arg2 value:(id)arg3;
- (id)filterOnQuestionFilterValue:(long long)arg1 relationalFilterOperatorValue:(long long)arg2 value:(id)arg3;
- (id)addIncludedReviewsFilterType:(id)arg1 relationalFilterOperator:(id)arg2 value:(id)arg3;
- (id)filterOnReviewFilterValue:(long long)arg1 relationalFilterOperatorValue:(long long)arg2 value:(id)arg3;
- (id)includeStatistics:(long long)arg1;
- (id)includeProductIncludeTypeValue:(long long)arg1 limit:(unsigned long long)arg2;
- (id)endpoint;
- (id)statisticsToParams:(id)arg1;
- (id)includesToParams:(id)arg1;
- (id)init;

@end

