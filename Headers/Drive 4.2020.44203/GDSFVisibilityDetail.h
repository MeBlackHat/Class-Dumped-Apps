//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class GDSFAudienceVisibility, GDSFPublicVisibility, GDSFRestrictedVisibility, GDSFVisibilityVaries;

@interface GDSFVisibilityDetail : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GDSFAudienceVisibility *audience; // @dynamic audience;
@property(readonly, nonatomic) int detailOneOfCase; // @dynamic detailOneOfCase;
@property(retain, nonatomic) GDSFPublicVisibility *public_p; // @dynamic public_p;
@property(retain, nonatomic) GDSFRestrictedVisibility *restricted; // @dynamic restricted;
@property(retain, nonatomic) GDSFVisibilityVaries *varies; // @dynamic varies;

@end

