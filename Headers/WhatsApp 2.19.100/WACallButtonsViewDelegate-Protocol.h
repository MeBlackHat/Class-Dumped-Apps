//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WACallButtonsView;

@protocol WACallButtonsViewDelegate <NSObject>
- (void)callButtonsViewDidToggleVideo:(WACallButtonsView *)arg1 withCompletion:(void (^)(_Bool))arg2;
- (void)callButtonsView:(WACallButtonsView *)arg1 didRequestSetMute:(_Bool)arg2;
- (void)callButtonsViewDidToggleSpeaker:(WACallButtonsView *)arg1;
- (void)callButtonsViewDidRequestSwitchCamera:(WACallButtonsView *)arg1;
- (void)callButtonsViewDidRequestAcceptOrEndCall:(WACallButtonsView *)arg1;
- (void)callButtonsViewDidRequestCancelAndSendMessage:(WACallButtonsView *)arg1;
- (void)callButtonsViewDidRequestCancelAndAddReminder:(WACallButtonsView *)arg1;
- (void)callButtonsViewDidRequestRejectCall:(WACallButtonsView *)arg1;
@end

