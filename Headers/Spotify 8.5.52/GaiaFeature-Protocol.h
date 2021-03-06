//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTGaiaConnectAPI, SPTGaiaDependencyInjector, SPTGaiaDevicePickerPresenter, SPTGaiaDevicesAvailableViewProvider, SPTGaiaIconProvider, SPTGaiaLockScreenControlsStateProvider, SPTGaiaPopupPresenter, SPTGaiaSettingsProvider, SPTGaiaSocialListeningIntegrationPublicAPI, SPTGaiaSystemVolumeManager, SPTGaiaVolumeControllerInterface, SPTGaiaWirelessRoutesAPI;

@protocol GaiaFeature <NSObject>
- (id <SPTGaiaSettingsProvider>)provideSettingsProvider;
- (id <SPTGaiaSocialListeningIntegrationPublicAPI>)provideSocialListeningIntegrationAPI;
- (id <SPTGaiaWirelessRoutesAPI>)provideWirelessRoutesAPI;
- (id <SPTGaiaIconProvider>)provideIconProvider;
- (id <SPTGaiaPopupPresenter>)providePopupPresenter;
- (id <SPTGaiaDependencyInjector>)provideDependencyInjector;
- (id <SPTGaiaDevicePickerPresenter>)provideDevicePresenter;
- (id <SPTGaiaConnectAPI>)provideConnectAPI;
- (id <SPTGaiaDevicesAvailableViewProvider>)provideDevicesAvailableViewProvider;
- (id <SPTGaiaSystemVolumeManager>)provideSystemVolumeManager;
- (id <SPTGaiaVolumeControllerInterface>)provideGaiaVolumeController;
- (id <SPTGaiaLockScreenControlsStateProvider>)provideLockScreenControlsStateProvider;
@end

