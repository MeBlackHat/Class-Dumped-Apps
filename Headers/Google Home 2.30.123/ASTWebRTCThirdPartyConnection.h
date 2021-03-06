//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTWebRTCConnection.h"

#import "ASTWebRTCConnection-Protocol.h"

@class NSString;
@protocol ASTWebRTCConnectionDelegate;

@interface ASTWebRTCThirdPartyConnection : ASTWebRTCConnection <ASTWebRTCConnection>
{
    id <ASTWebRTCConnectionDelegate> _delegate;
    NSString *_mediaStreamID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *mediaStreamID; // @synthesize mediaStreamID=_mediaStreamID;
@property(nonatomic) __weak id <ASTWebRTCConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)extractMediaTracksAndNotifyDelegate;
- (void)setLocalSDP:(id)arg1;
- (void)sendAnswer;
- (void)setRemoteSDP:(id)arg1;
- (void)startHandshake;
- (void)connect;
- (id)initWithCameraStreamTrait:(id)arg1;

// Remaining properties
@property(nonatomic, getter=isTwoWayTalkEnabled) _Bool twoWayTalkEnabled;

@end

