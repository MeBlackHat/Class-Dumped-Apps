//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class GDSFDriveApiData, GDSFLinkSharingData;

@interface GDSFGetSharingDialogDataResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GDSFDriveApiData *apiResponse; // @dynamic apiResponse;
@property(nonatomic) _Bool hasApiResponse; // @dynamic hasApiResponse;
@property(nonatomic) _Bool hasLinkSharingData; // @dynamic hasLinkSharingData;
@property(retain, nonatomic) GDSFLinkSharingData *linkSharingData; // @dynamic linkSharingData;

@end

