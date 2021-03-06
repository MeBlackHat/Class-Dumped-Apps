//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface AMITooltipPolicyEngine : NSObject
{
    NSArray *_tipTypeToPayloadFilename;
    NSArray *_experimentKeyPostfix;
    NSMutableDictionary *_tooltipExperiments;
}

+ (id)sharedEngine;
@property(retain, nonatomic) NSMutableDictionary *tooltipExperiments; // @synthesize tooltipExperiments=_tooltipExperiments;
@property(retain, nonatomic) NSArray *experimentKeyPostfix; // @synthesize experimentKeyPostfix=_experimentKeyPostfix;
@property(retain, nonatomic) NSArray *tipTypeToPayloadFilename; // @synthesize tipTypeToPayloadFilename=_tipTypeToPayloadFilename;
- (void).cxx_destruct;
- (id)experimentsForTooltipType:(unsigned long long)arg1;
- (id)lastRandomMessage;
- (_Bool)searchBarMeetsConstraints:(id)arg1;
- (_Bool)meetsDeviceRequirements;
- (_Bool)shouldShowExperiment:(id)arg1 experimentKey:(id)arg2 forLayout:(id)arg3;
- (unsigned long long)tooltipType;
- (id)launchTip;
- (id)displayedTooltipRefMarker;
- (_Bool)isTooltipVisible;
- (void)attemptToShowTooltipForLayout:(id)arg1 inView:(id)arg2;
- (id)init;

@end

