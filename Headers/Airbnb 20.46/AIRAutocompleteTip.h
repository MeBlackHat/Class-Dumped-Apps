//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSString;

@interface AIRAutocompleteTip : AIRModel
{
    NSString *_tipId;
    NSString *_name;
    NSString *_district;
    NSString *_adCode;
    NSString *_location;
    NSString *_address;
    NSString *_typeCode;
}

+ (id)toStringTransformer;
+ (id)customTransformers;
+ (id)customKeyPathMapping;
+ (id)idAttributeName;
+ (void)_handleAutocompleteTipsResponse:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailure:(CDUnknownBlockType)arg3;
+ (id)_autocompleteTipsIndexRequestForSearchString:(id)arg1 gaodeAPIKey:(id)arg2 cityCode:(id)arg3 coordinator:(id)arg4;
+ (id)suggestionTypesString;
+ (id)suggestionTypes;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *typeCode; // @synthesize typeCode=_typeCode;
@property(readonly, copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(readonly, copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(readonly, copy, nonatomic) NSString *adCode; // @synthesize adCode=_adCode;
@property(readonly, copy, nonatomic) NSString *district; // @synthesize district=_district;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *tipId; // @synthesize tipId=_tipId;
@property(readonly, copy, nonatomic) NSString *fullAddress;

@end

