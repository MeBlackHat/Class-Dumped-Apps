//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import "HMEHomeAutomationDeviceStateCacheListener-Protocol.h"
#import "HMELightImmersiveAllCellDelegate-Protocol.h"
#import "HMELightImmersiveRoomCellDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class HMECoalescedAction, HMEModel, NSArray, NSString;
@protocol ASTHomeAutomationManagerProtocol, AnalyticsLogger, GCAConfigurationFlags, HMEDeviceEligibilityChecker, HMEHomeAutomationDeviceStateCache, HMELightGroupData, HMELightImmersiveViewControllerDelegate, HMESpaceData;

@interface HMELightImmersiveViewController : UICollectionViewController <HMEHomeAutomationDeviceStateCacheListener, HMELightImmersiveAllCellDelegate, HMELightImmersiveRoomCellDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <HMELightImmersiveViewControllerDelegate> _delegate;
    id <ASTHomeAutomationManagerProtocol> _homeAutomationManager;
    id <AnalyticsLogger> _analyticsLogger;
    id <HMEDeviceEligibilityChecker> _deviceEligibilityChecker;
    id <HMEHomeAutomationDeviceStateCache> _deviceStateCache;
    id <HMELightGroupData> _lightGroupData;
    NSArray *_lightGroups;
    HMEModel *_lightGroupsModel;
    HMEModel *_spacelessLightsModel;
    id <HMESpaceData> _spaceData;
    id <GCAConfigurationFlags> _flags;
    HMECoalescedAction *_coalescedRerenderAction;
    unsigned long long _inflightActionsCount;
}

- (void).cxx_destruct;
@property unsigned long long inflightActionsCount; // @synthesize inflightActionsCount=_inflightActionsCount;
@property(readonly, nonatomic) HMECoalescedAction *coalescedRerenderAction; // @synthesize coalescedRerenderAction=_coalescedRerenderAction;
@property(readonly, nonatomic) id <GCAConfigurationFlags> flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) id <HMESpaceData> spaceData; // @synthesize spaceData=_spaceData;
@property(readonly, nonatomic) HMEModel *spacelessLightsModel; // @synthesize spacelessLightsModel=_spacelessLightsModel;
@property(readonly, nonatomic) HMEModel *lightGroupsModel; // @synthesize lightGroupsModel=_lightGroupsModel;
@property(retain, nonatomic) NSArray *lightGroups; // @synthesize lightGroups=_lightGroups;
@property(readonly, nonatomic) id <HMELightGroupData> lightGroupData; // @synthesize lightGroupData=_lightGroupData;
@property(readonly, nonatomic) id <HMEHomeAutomationDeviceStateCache> deviceStateCache; // @synthesize deviceStateCache=_deviceStateCache;
@property(readonly, nonatomic) id <HMEDeviceEligibilityChecker> deviceEligibilityChecker; // @synthesize deviceEligibilityChecker=_deviceEligibilityChecker;
@property(readonly, nonatomic) id <AnalyticsLogger> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(readonly, nonatomic) id <ASTHomeAutomationManagerProtocol> homeAutomationManager; // @synthesize homeAutomationManager=_homeAutomationManager;
@property(nonatomic) __weak id <HMELightImmersiveViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldShowLoadingIndicatorForLightGroup:(id)arg1;
- (id)devicesForLightGroup:(id)arg1;
- (id)devicesForAllLights;
- (_Bool)isAnyLightExecuteOnly:(id)arg1;
- (unsigned long long)numberOfOfflineLights:(id)arg1;
- (_Bool)isAnyLightOnInLightGroup:(id)arg1;
- (void)updateLightGroups;
- (void)setAllRoomSwitchOn:(_Bool)arg1;
- (void)resetPreferredContentSize;
- (void)turnDevicesOn:(_Bool)arg1 withLightGroup:(id)arg2;
- (id)errorSnackbarMessage;
- (id)deviceTraitStringsForGraphDevices:(id)arg1;
- (id)deviceTypeStringForGraphDevices:(id)arg1;
- (id)agentIDForGraphDevices:(id)arg1;
- (void)logNetworkEventCompleteWithEvent:(id)arg1 deviceID:(id)arg2 error:(id)arg3;
- (void)attachDeviceContentInfoToAnalyticsEvent:(id)arg1 forGraphDevices:(id)arg2;
- (id)createLightImmersiveEvent;
- (id)createNetworkCallEvent;
- (id)createUserActionEventWithValue:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)stalenessDidChangeForDeviceWithHGSID:(id)arg1;
- (void)traitsDidChange:(id)arg1 forDeviceWithHGSID:(id)arg2;
- (void)turnOnLightsForSpaceID:(id)arg1;
- (void)turnOffLightsForSpaceID:(id)arg1;
- (void)openLightControllerForSpaceID:(id)arg1;
- (void)turnOnAllLights;
- (void)turnOffAllLights;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (id)initWithLightGroupData:(id)arg1 spacelessLightsModel:(id)arg2 spaceData:(id)arg3 homeAutomationManager:(id)arg4 deviceEligibilityChecker:(id)arg5 deviceStateCache:(id)arg6 analyticsLogger:(id)arg7 flags:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

