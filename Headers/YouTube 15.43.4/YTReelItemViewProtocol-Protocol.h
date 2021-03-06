//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTDismissableCellViewProtocol-Protocol.h"
#import "YTReelWatchTransitionItem-Protocol.h"
#import "YTReusableView-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class UIView, YTIReelItemRenderer;
@protocol YTReelItemCellDelegate;

@protocol YTReelItemViewProtocol <YTDismissableCellViewProtocol, YTReelWatchTransitionItem, YTReusableView, YTThumbnailMapping>
@property(retain, nonatomic) YTIReelItemRenderer *renderer;
@property(nonatomic, getter=isRead) _Bool read;
@property(readonly, nonatomic) UIView *menuAnchorView;
@property(nonatomic) __weak id <YTReelItemCellDelegate> delegate;
@end

