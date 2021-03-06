//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKActionPanelActionProducing-Protocol.h"

@class GSCImageFetcher, GSCImageFetcherCache, NSString, UIViewController;
@protocol GDKSnackbarControlling, GDKTeamDriveMutating, SSOIdentity;

@interface GDKTeamDriveSettingsActionProducer : NSObject <GDKActionPanelActionProducing>
{
    _Bool _showDriveFSRestriction;
    id <GDKTeamDriveMutating> _teamDriveMutator;
    id <GDKSnackbarControlling> _snackbarController;
    GSCImageFetcher *_imageFetcher;
    GSCImageFetcherCache *_imageFetcherCache;
    id <SSOIdentity> _ssoIdentity;
    UIViewController *_presentingViewController;
}

@property(readonly, nonatomic) _Bool showDriveFSRestriction; // @synthesize showDriveFSRestriction=_showDriveFSRestriction;
@property(readonly, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(readonly, nonatomic) id <SSOIdentity> ssoIdentity; // @synthesize ssoIdentity=_ssoIdentity;
@property(readonly, nonatomic) GSCImageFetcherCache *imageFetcherCache; // @synthesize imageFetcherCache=_imageFetcherCache;
@property(readonly, nonatomic) GSCImageFetcher *imageFetcher; // @synthesize imageFetcher=_imageFetcher;
@property(readonly, nonatomic) id <GDKSnackbarControlling> snackbarController; // @synthesize snackbarController=_snackbarController;
@property(readonly, nonatomic) id <GDKTeamDriveMutating> teamDriveMutator; // @synthesize teamDriveMutator=_teamDriveMutator;
- (void).cxx_destruct;
- (id)actionForFile:(id)arg1;
- (id)initWithTeamDriveMutator:(id)arg1 snackbarController:(id)arg2 imageFetcher:(id)arg3 imageFetcherCache:(id)arg4 ssoIdentity:(id)arg5 presentingViewController:(id)arg6 showDriveFSRestriction:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

