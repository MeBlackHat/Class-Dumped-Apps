//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSString, YTIFormattedString;

@interface YTIMusicTunederFormItemRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasImpressionFormValue; // @dynamic hasImpressionFormValue;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasSelectionFormValue; // @dynamic hasSelectionFormValue;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(copy, nonatomic) NSString *impressionFormValue; // @dynamic impressionFormValue;
@property(retain, nonatomic) YTIFormattedString *name; // @dynamic name;
@property(copy, nonatomic) NSString *selectionFormValue; // @dynamic selectionFormValue;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

