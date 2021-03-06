//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSString;

@interface AWEOriginalAdFakeAuthorModel : MTLModel <MTLJSONSerializing>
{
    _Bool _autoShowWebview;
    NSString *_desc;
    NSString *_buttonText;
    long long _fakeAuthorVersion;
    double _rating;
    NSString *_totalRatingsReviews;
    NSString *_categoryLabel;
    NSString *_rankLabel;
}

+ (id)fakeAuthorVersionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *rankLabel; // @synthesize rankLabel=_rankLabel;
@property(copy, nonatomic) NSString *categoryLabel; // @synthesize categoryLabel=_categoryLabel;
@property(copy, nonatomic) NSString *totalRatingsReviews; // @synthesize totalRatingsReviews=_totalRatingsReviews;
@property(nonatomic) double rating; // @synthesize rating=_rating;
@property(nonatomic) _Bool autoShowWebview; // @synthesize autoShowWebview=_autoShowWebview;
@property(nonatomic) long long fakeAuthorVersion; // @synthesize fakeAuthorVersion=_fakeAuthorVersion;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

