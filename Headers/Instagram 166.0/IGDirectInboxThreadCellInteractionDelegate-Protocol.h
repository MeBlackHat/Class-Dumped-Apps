//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGDirectAvatarView, IGDirectInboxThreadCell, IGDirectInboxThreadCellContextButton, UIButton;

@protocol IGDirectInboxThreadCellInteractionDelegate <NSObject>
- (void)directInboxThreadCellDidReceiveLongPress:(IGDirectInboxThreadCell *)arg1;
- (void)directInboxThreadCellDidReceiveSingleTap:(IGDirectInboxThreadCell *)arg1;
- (void)directInboxThreadCell:(IGDirectInboxThreadCell *)arg1 didTapContextButton:(IGDirectInboxThreadCellContextButton *)arg2;
- (void)directInboxThreadCell:(IGDirectInboxThreadCell *)arg1 didTapAccessoryButton:(UIButton *)arg2;
- (void)directInboxThreadCell:(IGDirectInboxThreadCell *)arg1 didTapAvatarView:(IGDirectAvatarView *)arg2;
@end

