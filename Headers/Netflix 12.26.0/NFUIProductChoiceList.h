//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ArgoCore/NFLXGeneratedObject.h>

@class NSArray, NSDictionary;

@interface NFUIProductChoiceList : NFLXGeneratedObject
{
    _Bool _fallback;
    NSDictionary *_trackingInfo;
    NSArray *_choices;
}

@property(retain, nonatomic) NSArray *choices; // @synthesize choices=_choices;
@property(nonatomic) _Bool fallback; // @synthesize fallback=_fallback;
@property(copy, nonatomic) NSDictionary *trackingInfo; // @synthesize trackingInfo=_trackingInfo;
- (void).cxx_destruct;
- (id)selectedPlan;
- (unsigned long long)selectedIndex;
- (void)setValue:(id)arg1 forKey:(id)arg2;

@end

