//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSString, WAChatJID;
@protocol WAServerDate;

@protocol WAStopLocationSharingRequest <NSObject>
@property(readonly, copy, nonatomic) NSString *requestID;
@property(readonly, copy, nonatomic) NSDate<WAServerDate> *retryEndDate;
@property(readonly, nonatomic) WAChatJID *chatJID;
@end

