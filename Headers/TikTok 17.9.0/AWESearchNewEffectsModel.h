//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSArray;

@interface AWESearchNewEffectsModel : AWEBaseApiModel
{
    _Bool _hasMoreVideo;
    _Bool _hasMoreEffects;
    NSArray *_effectsDetailArray;
    NSArray *_effectsVideoArray;
}

+ (id)effectsVideoArrayJSONTransformer;
+ (id)effectsDetailArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasMoreEffects; // @synthesize hasMoreEffects=_hasMoreEffects;
@property(nonatomic) _Bool hasMoreVideo; // @synthesize hasMoreVideo=_hasMoreVideo;
@property(copy, nonatomic) NSArray *effectsVideoArray; // @synthesize effectsVideoArray=_effectsVideoArray;
@property(copy, nonatomic) NSArray *effectsDetailArray; // @synthesize effectsDetailArray=_effectsDetailArray;

@end

