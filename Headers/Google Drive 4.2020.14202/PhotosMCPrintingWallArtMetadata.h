//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSMutableArray, NSString;

@interface PhotosMCPrintingWallArtMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMode; // @dynamic hasMode;
@property(nonatomic) _Bool hasSortOrder; // @dynamic hasSortOrder;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) int mode; // @dynamic mode;
@property(retain, nonatomic) NSMutableArray *photoItemArray; // @dynamic photoItemArray;
@property(readonly, nonatomic) unsigned long long photoItemArray_Count; // @dynamic photoItemArray_Count;
@property(nonatomic) long long sortOrder; // @dynamic sortOrder;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

