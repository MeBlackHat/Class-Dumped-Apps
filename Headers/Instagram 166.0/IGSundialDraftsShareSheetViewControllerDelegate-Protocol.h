//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGSundialComposition, IGSundialDraftsShareSheetViewController, NSSet;

@protocol IGSundialDraftsShareSheetViewControllerDelegate <NSObject>
- (void)sundialDraftShareSheet:(IGSundialDraftsShareSheetViewController *)arg1 didShareComposition:(IGSundialComposition *)arg2 toStory:(long long)arg3 andDirectRecipients:(NSSet *)arg4 andGroupStoriesRecipients:(NSSet *)arg5;
- (void)sundialDraftShareSheet:(IGSundialDraftsShareSheetViewController *)arg1 didShareComposition:(IGSundialComposition *)arg2 toDestination:(long long)arg3;
@end

