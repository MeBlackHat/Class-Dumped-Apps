//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMTTDStep_NavigationPopup_DelightfulBadge, GMSx_GMTTDStep_NavigationPopup_ThrottlePolicy, NSMutableArray, NSString;

@interface GMSx_GMTTDStep_NavigationPopup : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *audioComponentArray; // @dynamic audioComponentArray;
@property(readonly, nonatomic) unsigned long long audioComponentArray_Count; // @dynamic audioComponentArray_Count;
@property(retain, nonatomic) GMSx_GMTTDStep_NavigationPopup_DelightfulBadge *delightfulBadge; // @dynamic delightfulBadge;
@property(nonatomic) _Bool hasHeadline; // @dynamic hasHeadline;
@property(nonatomic) _Bool hasStepOffsetMeters; // @dynamic hasStepOffsetMeters;
@property(nonatomic) _Bool hasThrottlePolicy; // @dynamic hasThrottlePolicy;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(copy, nonatomic) NSString *headline; // @dynamic headline;
@property(readonly, nonatomic) int specializedNavigationPopupDetailsOneOfCase; // @dynamic specializedNavigationPopupDetailsOneOfCase;
@property(nonatomic) int stepOffsetMeters; // @dynamic stepOffsetMeters;
@property(retain, nonatomic) GMSx_GMTTDStep_NavigationPopup_ThrottlePolicy *throttlePolicy; // @dynamic throttlePolicy;
@property(nonatomic) int type; // @dynamic type;

@end

