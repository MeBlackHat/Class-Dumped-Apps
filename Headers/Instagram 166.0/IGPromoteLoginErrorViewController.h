//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/IGPromoteViewController.h>

@class IGBusinessErrorView, IGPromoteBusinessUserAccessTokenErrorModel;

@interface IGPromoteLoginErrorViewController : IGPromoteViewController
{
    IGPromoteBusinessUserAccessTokenErrorModel *_errorModel;
    IGBusinessErrorView *_errorView;
}

- (void).cxx_destruct;
- (void)_onCancelBarButtonTapped;
- (void)_showErrorView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithErrorModel:(id)arg1 userSession:(id)arg2;

@end

