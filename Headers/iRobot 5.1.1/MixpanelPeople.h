//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Mixpanel, NSDictionary, NSMutableArray, NSString;

@interface MixpanelPeople : NSObject
{
    _Bool _ignoreTime;
    Mixpanel *_mixpanel;
    NSMutableArray *_unidentifiedQueue;
    NSString *_distinctId;
    NSDictionary *_automaticPeopleProperties;
}

+ (id)pushDeviceTokenToString:(id)arg1;
@property(retain, nonatomic) NSDictionary *automaticPeopleProperties; // @synthesize automaticPeopleProperties=_automaticPeopleProperties;
@property(copy, nonatomic) NSString *distinctId; // @synthesize distinctId=_distinctId;
@property(retain, nonatomic) NSMutableArray *unidentifiedQueue; // @synthesize unidentifiedQueue=_unidentifiedQueue;
@property(nonatomic) __weak Mixpanel *mixpanel; // @synthesize mixpanel=_mixpanel;
@property _Bool ignoreTime; // @synthesize ignoreTime=_ignoreTime;
- (void).cxx_destruct;
- (void)deleteUser;
- (void)clearCharges;
- (void)trackCharge:(id)arg1 withProperties:(id)arg2;
- (void)trackCharge:(id)arg1;
- (void)merge:(id)arg1;
- (void)remove:(id)arg1;
- (void)union:(id)arg1;
- (void)append:(id)arg1;
- (void)increment:(id)arg1 by:(id)arg2;
- (void)increment:(id)arg1;
- (void)unset:(id)arg1;
- (void)setOnce:(id)arg1;
- (void)set:(id)arg1 to:(id)arg2;
- (void)set:(id)arg1;
- (void)removePushDeviceToken:(id)arg1;
- (void)removeAllPushDeviceTokens;
- (void)addPushDeviceToken:(id)arg1;
- (void)addPeopleRecordToQueueWithAction:(id)arg1 andProperties:(id)arg2;
- (id)collectAutomaticPeopleProperties;
- (id)deviceSystemVersion;
- (id)description;
- (id)initWithMixpanel:(id)arg1;

@end

