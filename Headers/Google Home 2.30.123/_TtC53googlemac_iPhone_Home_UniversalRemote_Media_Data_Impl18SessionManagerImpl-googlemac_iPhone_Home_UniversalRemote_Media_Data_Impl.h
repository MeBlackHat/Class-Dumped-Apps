//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC53googlemac_iPhone_Home_UniversalRemote_Media_Data_Impl18SessionManagerImpl.h"

#import "GCKSessionManagerGoogleOnlyListener-Protocol.h"

@interface _TtC53googlemac_iPhone_Home_UniversalRemote_Media_Data_Impl18SessionManagerImpl (googlemac_iPhone_Home_UniversalRemote_Media_Data_Impl) <GCKSessionManagerGoogleOnlyListener>
- (void)sessionManager:(id)arg1 castSession:(id)arg2 didReceiveDeviceVolume:(float)arg3 muted:(_Bool)arg4;
- (void)sessionManager:(id)arg1 didEndCastSession:(id)arg2 withError:(id)arg3;
- (void)sessionManager:(id)arg1 didStartCastSession:(id)arg2;
- (void)sessionManager:(id)arg1 didFailToMoveCastSession:(id)arg2 error:(id)arg3;
- (void)sessionManager:(id)arg1 didMoveCastSession:(id)arg2;
- (void)sessionManager:(id)arg1 willMoveCastSession:(id)arg2;
- (void)sessionManager:(id)arg1 didFailToUpdateCastSession:(id)arg2 toDevices:(id)arg3 error:(id)arg4;
- (void)sessionManager:(id)arg1 didUpdateCastSession:(id)arg2 failedToMoveDeviceIDs:(id)arg3;
@end

