//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSArray;

@interface AWEI18NAuthorizedAppListResponseModel : AWEBaseApiModel
{
    NSArray *_authorizedAppArray;
}

+ (id)authorizedAppArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *authorizedAppArray; // @synthesize authorizedAppArray=_authorizedAppArray;

@end

