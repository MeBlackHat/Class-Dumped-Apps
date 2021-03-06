//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NLGConnectionProfileBase.h"

#import "NLBLEConnectionProfile-Protocol.h"
#import "NLGWeaveResponseDelegate-Protocol.h"
#import "NLJoiningConnectionProfile-Protocol.h"

@class CBPeripheral, NLGEntryKey, NSString;

@interface NLJoiningDeviceBLEConnectionProfile : NLGConnectionProfileBase <NLGWeaveResponseDelegate, NLJoiningConnectionProfile, NLBLEConnectionProfile>
{
    NLGEntryKey *_entryKey;
    CBPeripheral *_peripheral;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
@property(copy, nonatomic) NLGEntryKey *entryKey; // @synthesize entryKey=_entryKey;
@property(readonly, copy) NSString *debugDescription;
- (void)weaveResponseRendezvousDidFinishWithError:(id)arg1;
- (void)weaveResponseRendezvousWithPairingCodeDidFinish:(id)arg1;
- (void)startConnectionCommand;
- (id)initWithPeripheral:(id)arg1 entryKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long profileType;
@property(readonly) Class superclass;

@end

