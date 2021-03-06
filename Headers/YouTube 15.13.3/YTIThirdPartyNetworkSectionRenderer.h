//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

#import <Module_Framework/YTInnerTubeSectionRenderer-Protocol.h>
#import <Module_Framework/YTInnerTubeSectionRenderers-Protocol.h>

@class NSData, NSMutableArray, NSString, YTIRenderer, YTIShareTargetTemplateSupportedRenderers, YTIThirdPartyShareTargetSectionSupportedRenderers;

@interface YTIThirdPartyNetworkSectionRenderer : GPBMessage <YTInnerTubeSectionRenderer, YTInnerTubeSectionRenderers>
{
}

+ (id)descriptor;
- (id)sectionRendererDataSourceWithService:(id)arg1 params:(id)arg2;
- (id)sectionRenderers;

// Remaining properties
@property(retain, nonatomic) YTIRenderer *copyLinkContainer; // @dynamic copyLinkContainer;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSMutableArray *excludedShareServicesArray; // @dynamic excludedShareServicesArray;
@property(readonly, nonatomic) unsigned long long excludedShareServicesArray_Count; // @dynamic excludedShareServicesArray_Count;
@property(nonatomic) _Bool hasCopyLinkContainer; // @dynamic hasCopyLinkContainer;
@property(nonatomic) _Bool hasShareTargetContainer; // @dynamic hasShareTargetContainer;
@property(nonatomic) _Bool hasShareTargetTemplate; // @dynamic hasShareTargetTemplate;
@property(nonatomic) _Bool hasShowThirdPartyShareTargetsButton; // @dynamic hasShowThirdPartyShareTargetsButton;
@property(nonatomic) _Bool hasStartAtContainer; // @dynamic hasStartAtContainer;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTIThirdPartyShareTargetSectionSupportedRenderers *shareTargetContainer; // @dynamic shareTargetContainer;
@property(retain, nonatomic) YTIShareTargetTemplateSupportedRenderers *shareTargetTemplate; // @dynamic shareTargetTemplate;
@property(retain, nonatomic) NSMutableArray *shareTargetsArray; // @dynamic shareTargetsArray;
@property(readonly, nonatomic) unsigned long long shareTargetsArray_Count; // @dynamic shareTargetsArray_Count;
@property(retain, nonatomic) YTIRenderer *showThirdPartyShareTargetsButton; // @dynamic showThirdPartyShareTargetsButton;
@property(retain, nonatomic) YTIRenderer *startAtContainer; // @dynamic startAtContainer;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

