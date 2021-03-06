//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GCADAvailabilityText, GCADImage, GCADStyledString, GHCCardAction, GHCDismissalAction, NSString;

@interface GHCBasicContent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GHCCardAction *action; // @dynamic action;
@property(retain, nonatomic) GHCCardAction *alternateAction; // @dynamic alternateAction;
@property(retain, nonatomic) GCADAvailabilityText *availabilityText; // @dynamic availabilityText;
@property(nonatomic) int backgroundColor; // @dynamic backgroundColor;
@property(copy, nonatomic) NSString *contentId; // @dynamic contentId;
@property(retain, nonatomic) GCADStyledString *description_p; // @dynamic description_p;
@property(retain, nonatomic) GHCDismissalAction *dismissButton; // @dynamic dismissButton;
@property(nonatomic) _Bool hasAction; // @dynamic hasAction;
@property(nonatomic) _Bool hasAlternateAction; // @dynamic hasAlternateAction;
@property(nonatomic) _Bool hasAvailabilityText; // @dynamic hasAvailabilityText;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasDismissButton; // @dynamic hasDismissButton;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasSubIcon; // @dynamic hasSubIcon;
@property(nonatomic) _Bool hasSubText; // @dynamic hasSubText;
@property(retain, nonatomic) GCADImage *icon; // @dynamic icon;
@property(retain, nonatomic) GCADImage *subIcon; // @dynamic subIcon;
@property(retain, nonatomic) GCADStyledString *subText; // @dynamic subText;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

