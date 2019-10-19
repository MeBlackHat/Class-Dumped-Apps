//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CXAnswerCallAction, NSArray, NSString, NSUUID, WAUserJID;

@interface WACallProviderCall : NSObject
{
    _Bool _usedCallKit;
    _Bool _video;
    _Bool _audioSessionActivated;
    _Bool _accepted;
    _Bool _connected;
    NSUUID *_callUUID;
    long long _callType;
    NSString *_callID;
    NSArray *_peerJIDs;
    WAUserJID *_initialPeerJID;
    CXAnswerCallAction *_pendingAnswerAction;
}

@property(nonatomic) _Bool connected; // @synthesize connected=_connected;
@property(nonatomic) _Bool accepted; // @synthesize accepted=_accepted;
@property(nonatomic) _Bool audioSessionActivated; // @synthesize audioSessionActivated=_audioSessionActivated;
@property(nonatomic) _Bool video; // @synthesize video=_video;
@property(retain, nonatomic) CXAnswerCallAction *pendingAnswerAction; // @synthesize pendingAnswerAction=_pendingAnswerAction;
@property(copy, nonatomic) WAUserJID *initialPeerJID; // @synthesize initialPeerJID=_initialPeerJID;
@property(copy, nonatomic) NSArray *peerJIDs; // @synthesize peerJIDs=_peerJIDs;
@property(copy, nonatomic) NSString *callID; // @synthesize callID=_callID;
@property(readonly, nonatomic) _Bool usedCallKit; // @synthesize usedCallKit=_usedCallKit;
@property(readonly, nonatomic) long long callType; // @synthesize callType=_callType;
@property(readonly, nonatomic) NSUUID *callUUID; // @synthesize callUUID=_callUUID;
- (void).cxx_destruct;
- (id)initWithCallUUID:(id)arg1 callID:(id)arg2 peerJIDs:(id)arg3 callType:(long long)arg4 useCallKit:(_Bool)arg5;

@end

