//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView, YTChipCloudChipCell, YTChipCloudChipView;

@protocol YTChipCloudChipTapDelegate <NSObject>
- (void)unregisterCellView:(UIView *)arg1;
- (void)chipCloudCell:(YTChipCloudChipCell *)arg1 didTapChip:(YTChipCloudChipView *)arg2;
@end

