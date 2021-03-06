//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

@class IGFollowController, IGProfileFollowActionsConfiguration, IGUser, IGUserSession, NSArray, NSString, UIViewController;

@interface IGProfileFollowActionsSectionController : IGListSectionController
{
    IGUser *_user;
    IGFollowController *_followController;
    UIViewController *_alertPresentingViewController;
    IGProfileFollowActionsConfiguration *_configuration;
    NSString *_clickPoint;
    NSString *_analyticsModule;
    IGUserSession *_userSession;
    NSArray *_rowValues;
}

- (void).cxx_destruct;
- (void)_toggleRestrictedStatus;
- (void)_setUserOnCloseFriendsList:(_Bool)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUser:(id)arg1 followController:(id)arg2 alertPresentingViewController:(id)arg3 configuration:(id)arg4 clickPoint:(id)arg5 analyticsModule:(id)arg6 userSession:(id)arg7;

@end

