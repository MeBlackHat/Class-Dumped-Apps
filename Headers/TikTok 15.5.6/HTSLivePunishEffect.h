//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class HTSLiveImage, NSString;

@interface HTSLivePunishEffect : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long duration; // @dynamic duration;
@property(nonatomic) long long effectId; // @dynamic effectId;
@property(retain, nonatomic) HTSLiveImage *effectImage; // @dynamic effectImage;
@property(copy, nonatomic) NSString *effectName; // @dynamic effectName;
@property(nonatomic) _Bool hasEffectImage; // @dynamic hasEffectImage;
@property(nonatomic) long long lowestScore; // @dynamic lowestScore;
@property(nonatomic) long long needMedicineCount; // @dynamic needMedicineCount;
@property(nonatomic) _Bool usable; // @dynamic usable;

@end

