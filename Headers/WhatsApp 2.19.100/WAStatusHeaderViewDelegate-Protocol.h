//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WAStatusHeaderView;

@protocol WAStatusHeaderViewDelegate <NSObject>
- (void)headerView:(WAStatusHeaderView *)arg1 didRequestAudioVolumeChange:(float)arg2;
- (void)headerViewDidTapUserName:(WAStatusHeaderView *)arg1;
- (void)headerViewDidTapMoreOptions:(WAStatusHeaderView *)arg1;
- (void)headerViewDidTapDismiss:(WAStatusHeaderView *)arg1;
@end

