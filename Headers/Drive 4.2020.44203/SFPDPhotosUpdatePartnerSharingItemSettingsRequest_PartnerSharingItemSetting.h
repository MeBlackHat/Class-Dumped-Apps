//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class PhotosMCTargetItem, PhotosMCUpdatePartnerSharingExplicitVisibilityOperation;

@interface SFPDPhotosUpdatePartnerSharingItemSettingsRequest_PartnerSharingItemSetting : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasTargetItem; // @dynamic hasTargetItem;
@property(nonatomic) _Bool hasUpdatePartnerSharingExplicitVisibilityOperation; // @dynamic hasUpdatePartnerSharingExplicitVisibilityOperation;
@property(retain, nonatomic) PhotosMCTargetItem *targetItem; // @dynamic targetItem;
@property(retain, nonatomic) PhotosMCUpdatePartnerSharingExplicitVisibilityOperation *updatePartnerSharingExplicitVisibilityOperation; // @dynamic updatePartnerSharingExplicitVisibilityOperation;

@end

