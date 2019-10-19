//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WALocationStamp.h>

#import "WALiveLocationSender-Protocol.h"
#import "WAShareLocationControllerDelegate-Protocol.h"

@class NSString;

@interface WALocationStamp (MainApp) <WAShareLocationControllerDelegate, WALiveLocationSender>
- (void)shareLocationControllerDidSelectWAPlace:(id)arg1;
- (void)sendMessageContainingPlace:(id)arg1 liveLocationEndDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)shareLocationControllerDidCancel:(id)arg1;
- (void)internalRefineFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refineFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @dynamic completionHandler;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

