//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAChatBarMenuPluginDelegate-Protocol.h"

@class NSDate, WAChatBarShareLocationPlugin, WAPlace;
@protocol WAServerDate;

@protocol WAChatBarShareLocationPluginDelegate <WAChatBarMenuPluginDelegate>
- (void)chatBarShareLocationPlugin:(WAChatBarShareLocationPlugin *)arg1 sendMessageContainingPlace:(WAPlace *)arg2 liveLocationEndDate:(NSDate<WAServerDate> *)arg3 completion:(void (^)(WAMessage *))arg4;
@end

