//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, YTICommand, YTIGamingBrowseContext, YTIThumbnailDetails;

@interface YTIGamingHomeHeaderRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommand *accountEndpoint; // @dynamic accountEndpoint;
@property(retain, nonatomic) YTIThumbnailDetails *accountPhoto; // @dynamic accountPhoto;
@property(retain, nonatomic) YTIGamingBrowseContext *browseContext; // @dynamic browseContext;
@property(nonatomic) _Bool hasAccountEndpoint; // @dynamic hasAccountEndpoint;
@property(nonatomic) _Bool hasAccountPhoto; // @dynamic hasAccountPhoto;
@property(nonatomic) _Bool hasBrowseContext; // @dynamic hasBrowseContext;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) NSMutableArray *heroHeaderRenderersArray; // @dynamic heroHeaderRenderersArray;
@property(readonly, nonatomic) unsigned long long heroHeaderRenderersArray_Count; // @dynamic heroHeaderRenderersArray_Count;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

