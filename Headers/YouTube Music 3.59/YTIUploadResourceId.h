//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIEdit, YTIScottyResourceId;

@interface YTIUploadResourceId : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIEdit *edit; // @dynamic edit;
@property(nonatomic) _Bool hasEdit; // @dynamic hasEdit;
@property(nonatomic) _Bool hasScottyResourceId; // @dynamic hasScottyResourceId;
@property(retain, nonatomic) YTIScottyResourceId *scottyResourceId; // @dynamic scottyResourceId;

@end

