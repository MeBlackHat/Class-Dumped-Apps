//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WALiveLocationFriendsTableViewController.h"

@interface WALocationGroupMembersTableViewController : WALiveLocationFriendsTableViewController
{
    CDUnknownBlockType _dismissBlock;
}

@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)wa_cardNavigationControllerAccessoryView;
- (id)wa_cardNavigationControllerTitleColor;
- (_Bool)wa_cardNavigationControllerShouldCenterTitle;
- (_Bool)wa_cardNavigationControllerTitleSeparator;
- (struct UIEdgeInsets)wa_cardNavigationControllerTitlePadding;
- (void)wa_cardNavigationControllerTrailingButtonPressed:(id)arg1;
- (id)wa_cardNavigationControllerTrailingButton;
- (void)setFriendLocations:(id)arg1;
- (_Bool)wa_cardNavigationControllerShouldHaveDragHandle;
- (id)cellNibName;
- (void)wa_setCardHeaderHidden:(_Bool)arg1;
- (id)initWithFriends:(id)arg1;
- (id)init;

@end

