//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/XMPPRequest.h>

@interface XMPPRequestLocationSharing : XMPPRequest
{
    _Bool _includeMessageInParticipantInfo;
}

- (void)didFailWithError:(id)arg1;
- (void)didSucceedWithResponse:(id)arg1;
- (id)initWithChatJID:(id)arg1 reportParticipants:(_Bool)arg2 includeMessageInParticipantInfo:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType completion; // @dynamic completion;

@end

