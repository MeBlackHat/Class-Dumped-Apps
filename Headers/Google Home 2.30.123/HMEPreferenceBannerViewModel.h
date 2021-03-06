//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEPreferenceBannerViewModel-Protocol.h"

@class GHCClientRpcInvocation, GHCConfirmationDialog, GHCPreferenceId, GHCPreferenceNewScreenAction, HMEPreferenceBannerButtonViewModel, NSAttributedString, NSString, NSURL;
@protocol HMEPreferenceData, HMEPreferenceViewModelDelegate;

@interface HMEPreferenceBannerViewModel : NSObject <HMEPreferenceBannerViewModel>
{
    _Bool _disabled;
    _Bool _hidden;
    _Bool _refreshOnReturn;
    _Bool _isPermissionLoaded;
    GHCPreferenceId *_preferenceID;
    NSString *_title;
    NSAttributedString *_attributedSubtitle;
    NSString *_subtitle;
    id <HMEPreferenceData> _preferenceChildData;
    GHCClientRpcInvocation *_rpcInvocation;
    GHCConfirmationDialog *_confirmationDialog;
    NSURL *_deeplinkURL;
    long long _appEnvironmentCondition;
    GHCPreferenceNewScreenAction *_preferenceScreenAction;
    NSURL *_iconURL;
    NSString *_iconImageName;
    HMEPreferenceBannerButtonViewModel *_leadingButtonViewModel;
    HMEPreferenceBannerButtonViewModel *_trailingButtonViewModel;
    CDUnknownBlockType _leadingButtonActionBlock;
    CDUnknownBlockType _trailingButtonActionBlock;
    id <HMEPreferenceViewModelDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPermissionLoaded; // @synthesize isPermissionLoaded=_isPermissionLoaded;
@property(nonatomic) __weak id <HMEPreferenceViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType trailingButtonActionBlock; // @synthesize trailingButtonActionBlock=_trailingButtonActionBlock;
@property(copy, nonatomic) CDUnknownBlockType leadingButtonActionBlock; // @synthesize leadingButtonActionBlock=_leadingButtonActionBlock;
@property(retain, nonatomic) HMEPreferenceBannerButtonViewModel *trailingButtonViewModel; // @synthesize trailingButtonViewModel=_trailingButtonViewModel;
@property(retain, nonatomic) HMEPreferenceBannerButtonViewModel *leadingButtonViewModel; // @synthesize leadingButtonViewModel=_leadingButtonViewModel;
@property(readonly, nonatomic) NSString *iconImageName; // @synthesize iconImageName=_iconImageName;
@property(readonly, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(readonly, nonatomic, getter=shouldRefreshOnReturn) _Bool refreshOnReturn; // @synthesize refreshOnReturn=_refreshOnReturn;
@property(readonly, nonatomic) GHCPreferenceNewScreenAction *preferenceScreenAction; // @synthesize preferenceScreenAction=_preferenceScreenAction;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(readonly, nonatomic) long long appEnvironmentCondition; // @synthesize appEnvironmentCondition=_appEnvironmentCondition;
@property(readonly, nonatomic) NSURL *deeplinkURL; // @synthesize deeplinkURL=_deeplinkURL;
@property(readonly, nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(readonly, nonatomic) GHCConfirmationDialog *confirmationDialog; // @synthesize confirmationDialog=_confirmationDialog;
@property(readonly, nonatomic) GHCClientRpcInvocation *rpcInvocation; // @synthesize rpcInvocation=_rpcInvocation;
@property(retain, nonatomic) id <HMEPreferenceData> preferenceChildData; // @synthesize preferenceChildData=_preferenceChildData;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSAttributedString *attributedSubtitle; // @synthesize attributedSubtitle=_attributedSubtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) GHCPreferenceId *preferenceID; // @synthesize preferenceID=_preferenceID;
- (void)loadHiddenStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)addBannerButtons:(id)arg1;
- (void)performActionForViewModel:(id)arg1;
@property(readonly, nonatomic) long long renderType;
@property(readonly, copy, nonatomic) NSString *cellIdentifier;
- (id)initWithPreferenceNode:(id)arg1 childButtonList:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

