//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/PTVGuestBroadcastingAlertTableViewCell.h>

@class NSObject, PTVMessage;
@protocol PTVLoggedInUserProtocol;

@interface PTVGuestBroadcastingAlertTableViewCellKVO : PTVGuestBroadcastingAlertTableViewCell
{
    PTVMessage *_guestMessage;
    NSObject<PTVLoggedInUserProtocol> *_loggedInUser;
}

@property(retain, nonatomic) NSObject<PTVLoggedInUserProtocol> *loggedInUser; // @synthesize loggedInUser=_loggedInUser;
@property(retain, nonatomic) PTVMessage *guestMessage; // @synthesize guestMessage=_guestMessage;
- (void).cxx_destruct;
- (void)handleTap;
- (void)executeState;

@end

