//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface AWESmartPreloadStrategy : MTLModel <MTLJSONSerializing>
{
    NSNumber *_defaultValue;
    NSArray *_labelIndexMapping;
    NSArray *_plan;
}

+ (id)planJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *plan; // @synthesize plan=_plan;
@property(retain, nonatomic) NSArray *labelIndexMapping; // @synthesize labelIndexMapping=_labelIndexMapping;
@property(retain, nonatomic) NSNumber *defaultValue; // @synthesize defaultValue=_defaultValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

