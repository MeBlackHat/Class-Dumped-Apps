//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsBigtopDataItemsMessagesApiInternalThreadDetailsFetchResults.h"

@class ComGoogleAppsBigtopDataItemsItemsProto_FetchMode, ComGoogleCommonBaseOptional;

@interface ComGoogleAppsBigtopDataItemsMessagesApiInternalAutoValue_ThreadDetailsFetchResults : ComGoogleAppsBigtopDataItemsMessagesApiInternalThreadDetailsFetchResults
{
    ComGoogleAppsBigtopDataItemsItemsProto_FetchMode *fetchMode_;
    ComGoogleCommonBaseOptional *local_;
    ComGoogleCommonBaseOptional *remote_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)remote;
- (id)local;
- (id)fetchMode;

@end

