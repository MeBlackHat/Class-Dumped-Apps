//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BasePushNotificationHandler.h"

#import "MissionPushNotificationHandler-Protocol.h"

@class IPMIAssetInfo, NSString;

@interface TeamCleanEndOfMissionNotificationHandler : BasePushNotificationHandler <MissionPushNotificationHandler>
{
    int _optionalStateCode;
    int _missionId;
    NSString *_missionAssetIdAsString;
    IPMIAssetInfo *_primaryAssetInfo;
    IPMIAssetInfo *_secondaryAssetInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IPMIAssetInfo *secondaryAssetInfo; // @synthesize secondaryAssetInfo=_secondaryAssetInfo;
@property(readonly, nonatomic) IPMIAssetInfo *primaryAssetInfo; // @synthesize primaryAssetInfo=_primaryAssetInfo;
@property(retain, nonatomic) NSString *missionAssetIdAsString; // @synthesize missionAssetIdAsString=_missionAssetIdAsString;
@property(readonly, nonatomic) int missionId; // @synthesize missionId=_missionId;
@property(readonly, nonatomic) int optionalStateCode; // @synthesize optionalStateCode=_optionalStateCode;
- (void)customCleanup;
- (void)beginGeneratingNotificationUI;
- (id)initWithDelegate:(id)arg1 assembler:(id)arg2 notification:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

