//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEListDataController.h"

@interface AWESearchLandingPageDataController : AWEListDataController
{
    _Bool _hasMore;
    id _responseModel;
    long long _limit;
    long long _offset;
}

@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(nonatomic) long long limit; // @synthesize limit=_limit;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) id responseModel; // @synthesize responseModel=_responseModel;
- (void).cxx_destruct;
- (void)fetchLandingPageData:(unsigned long long)arg1 keyword:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end

