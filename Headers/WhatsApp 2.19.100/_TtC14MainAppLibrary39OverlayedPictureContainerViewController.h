//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAPictureContainerViewController.h"

@interface _TtC14MainAppLibrary39OverlayedPictureContainerViewController : WAPictureContainerViewController
{
    // Error parsing type: , name: userJID
    // Error parsing type: , name: header
    // Error parsing type: , name: constraintSwitcher
    // Error parsing type: , name: haveAddedProfilePictureViewConstraint
}

- (void).cxx_destruct;
- (id)initWithChatSession:(id)arg1 forJID:(id)arg2;
- (void)profilePictureViewSuperviewDidChange;
- (double)landscapePictureWidthForContainerOfSize:(struct CGSize)arg1 resetTrailingEdge:(_Bool *)arg2;
- (void)updateFramesForPortrait;
- (void)updateTableViewFrameWithPictureWidth:(double)arg1 rtlLayout:(_Bool)arg2 size:(struct CGSize)arg3;
@property(nonatomic, readonly) double defaultProfilePictureVisibleHeight;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)loadView;

@end

