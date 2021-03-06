//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMIModule-Protocol.h"

@class ANPLegalItemTypeHandler, ANXFlagIconMenuItemOverride, ANXSignoutMenuItemOverride, AWPushNotifications, NSString, RDCVisibilityToggleMenuOverride;
@protocol ANPNavMenuRDCManager, RDCMenuData2pService;

@interface ANPNavMenuItemModule : NSObject <AMIModule>
{
    id <ANPNavMenuRDCManager> _rdcManager;
    id <RDCMenuData2pService> _menuService;
    AWPushNotifications *_pushNotification;
    RDCVisibilityToggleMenuOverride *_notificationOverride;
    ANXFlagIconMenuItemOverride *_flagIconOverride;
    ANXSignoutMenuItemOverride *_signoutOverride;
    ANPLegalItemTypeHandler *_legalItemTypeHandler;
}

@property(retain, nonatomic) ANPLegalItemTypeHandler *legalItemTypeHandler; // @synthesize legalItemTypeHandler=_legalItemTypeHandler;
@property(retain, nonatomic) ANXSignoutMenuItemOverride *signoutOverride; // @synthesize signoutOverride=_signoutOverride;
@property(retain, nonatomic) ANXFlagIconMenuItemOverride *flagIconOverride; // @synthesize flagIconOverride=_flagIconOverride;
@property(retain, nonatomic) RDCVisibilityToggleMenuOverride *notificationOverride; // @synthesize notificationOverride=_notificationOverride;
@property(nonatomic) __weak AWPushNotifications *pushNotification; // @synthesize pushNotification=_pushNotification;
@property(retain, nonatomic) id <RDCMenuData2pService> menuService; // @synthesize menuService=_menuService;
@property(retain, nonatomic) id <ANPNavMenuRDCManager> rdcManager; // @synthesize rdcManager=_rdcManager;
- (void).cxx_destruct;
- (void)unregisterPushNotificationMenuItem;
- (void)registerPushNotificationMenuItem;
- (void)registerMenuItemsOverride;
- (void)dealloc;
- (id)viewControllerFactoryForModuleSpec:(id)arg1;
- (void)startModuleWithContext:(id)arg1;
- (id)initWithParameters:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

