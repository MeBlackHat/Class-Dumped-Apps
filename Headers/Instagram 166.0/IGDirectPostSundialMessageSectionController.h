//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/IGDirectMessageSectionController.h>

#import <InstagramAppCoreFramework/IGSundialCreationViewControllerNavigationDelegate-Protocol.h>

@class NSString;

@interface IGDirectPostSundialMessageSectionController : IGDirectMessageSectionController <IGSundialCreationViewControllerNavigationDelegate>
{
}

- (void)creationViewController:(id)arg1 didShareSundialPostWithExitPoint:(long long)arg2 destination:(long long)arg3 storySendTarget:(long long)arg4 toDirectRecipients:(id)arg5 toGroupStoriesRecipients:(id)arg6 storyModelArray:(id)arg7 metadataArray:(id)arg8;
- (void)creationViewController:(id)arg1 didShareSundialPost:(id)arg2 toDestination:(long long)arg3;
- (id)analyticsModule;
- (void)messageCellDidLongPressAvatar:(id)arg1;
- (void)messageCellDidTapAvatar:(id)arg1;
- (void)handleSingleTapOfSendingOrSentMessageCell:(id)arg1;
- (void)configureCell:(id)arg1 withViewModel:(id)arg2;
- (Class)cellClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

