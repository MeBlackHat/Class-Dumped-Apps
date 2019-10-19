//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WAUserJID;

@interface WACallRejectMessage : NSObject
{
    _Bool _isGroupCall;
    int _retryCount;
    unsigned int _registrationID;
    WAUserJID *_peerJID;
    NSString *_callID;
    WAUserJID *_callCreatorJID;
    unsigned long long _reason;
}

@property(readonly, nonatomic) _Bool isGroupCall; // @synthesize isGroupCall=_isGroupCall;
@property(nonatomic) unsigned int registrationID; // @synthesize registrationID=_registrationID;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
@property(readonly, nonatomic) unsigned long long reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) WAUserJID *callCreatorJID; // @synthesize callCreatorJID=_callCreatorJID;
@property(readonly, copy, nonatomic) NSString *callID; // @synthesize callID=_callID;
@property(readonly, nonatomic) WAUserJID *peerJID; // @synthesize peerJID=_peerJID;
- (void).cxx_destruct;
- (id)initWithStanza:(id)arg1 reason:(unsigned long long)arg2;

@end

