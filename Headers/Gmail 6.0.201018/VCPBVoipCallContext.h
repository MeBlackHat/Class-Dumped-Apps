//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class VCPBVoipCallContext_MeetInvitation, VCPBVoipCallContext_RingGroupCall, VCPBVoipCallContext_TransferredCall;

@interface VCPBVoipCallContext : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) VCPBVoipCallContext_MeetInvitation *meetInvitation; // @dynamic meetInvitation;
@property(retain, nonatomic) VCPBVoipCallContext_RingGroupCall *ringGroupCall; // @dynamic ringGroupCall;
@property(retain, nonatomic) VCPBVoipCallContext_TransferredCall *transferredCall; // @dynamic transferredCall;
@property(readonly, nonatomic) int typeOneOfCase; // @dynamic typeOneOfCase;

@end

