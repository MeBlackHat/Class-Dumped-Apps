//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSArray, NSString, YTAdSlot;

@protocol YTPlayerBytesSlotRegistrationAPI <NSObject>
- (void)addNewMidrollSlotDueToThrottling:(YTAdSlot *)arg1 contentCPN:(NSString *)arg2;
- (void)registerContentVideoPrerollSlot:(YTAdSlot *)arg1 postrollSlot:(YTAdSlot *)arg2 midrollSlots:(NSArray *)arg3 contentCPN:(NSString *)arg4;
@end

