//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HTSLivePluginLayoutView-Protocol.h"
#import "IESLiveHybridContainerDelegate-Protocol.h"

@class HTSLiveLinkMicBattleTaskMessage, LiveRoomModel, NSDictionary, NSString;
@protocol IESLiveEnvironment, IESLiveHybridContainerFactory, IESLiveSettings, IESLiveUserService, IESLiveWebViewProtocol;

@interface IESLiveMTBattleBannerView : UIView <IESLiveHybridContainerDelegate, HTSLivePluginLayoutView>
{
    CDUnknownBlockType _showBattleBlock;
    UIView<IESLiveWebViewProtocol> *_webView;
    HTSLiveLinkMicBattleTaskMessage *_message;
    NSDictionary *_userInfo;
    LiveRoomModel *_roomModel;
    id <IESLiveUserService> _userService;
    id <IESLiveHybridContainerFactory> _webviewFactory;
    id <IESLiveSettings> _settings;
    id <IESLiveEnvironment> _liveEnvironment;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IESLiveEnvironment> liveEnvironment; // @synthesize liveEnvironment=_liveEnvironment;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <IESLiveHybridContainerFactory> webviewFactory; // @synthesize webviewFactory=_webviewFactory;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) LiveRoomModel *roomModel; // @synthesize roomModel=_roomModel;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) HTSLiveLinkMicBattleTaskMessage *message; // @synthesize message=_message;
@property(retain, nonatomic) UIView<IESLiveWebViewProtocol> *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) CDUnknownBlockType showBattleBlock; // @synthesize showBattleBlock=_showBattleBlock;
- (id)webViewScene;
- (struct CGSize)pluginLayoutContentSize;
- (id)viewType;
- (id)PKBannerURL;
- (void)registeHandler;
- (id)currentWebURL;
- (void)loadWebView;
- (void)showBannerView;
- (void)dismissBannerView;
- (void)reloadWithUserInfo:(id)arg1;
- (void)didSetAttachingDIContext;
- (id)initWithUserInfo:(id)arg1 roomModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

