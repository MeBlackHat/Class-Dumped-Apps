//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASMImage, NSString;

@interface ASMLegendItem : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *accessibilityLabel_p; // @dynamic accessibilityLabel_p;
@property(copy, nonatomic) NSString *delineator; // @dynamic delineator;
@property(nonatomic) _Bool hasAccessibilityLabel_p; // @dynamic hasAccessibilityLabel_p;
@property(nonatomic) _Bool hasDelineator; // @dynamic hasDelineator;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasLabel; // @dynamic hasLabel;
@property(retain, nonatomic) ASMImage *icon; // @dynamic icon;
@property(copy, nonatomic) NSString *label; // @dynamic label;

@end

