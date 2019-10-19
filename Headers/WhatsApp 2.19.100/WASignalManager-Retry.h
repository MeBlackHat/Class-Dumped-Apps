//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WASignalManager.h>

@interface WASignalManager (Retry)
- (void)saveCurrentBaseKeyForMessageStanza:(id)arg1 chatJID:(id)arg2 participantJID:(id)arg3;
- (void)saveCurrentBaseKeyForLocationParticipant:(id)arg1;
- (void)saveCurrentBaseKeyForMessageID:(id)arg1 participantJID:(id)arg2;
- (void)processRetryReceiptForMessageStanzaID:(id)arg1 chatJID:(id)arg2 participantJID:(id)arg3 withRecipientRegistrationId:(id)arg4 atRetryCount:(unsigned char)arg5;
- (void)processLocationRetryForParticipant:(id)arg1 withRecipientRegistrationId:(id)arg2 atRetryCount:(unsigned char)arg3;
- (void)processRetryReceiptForMessageID:(id)arg1 participantJID:(id)arg2 withRecipientRegistrationId:(id)arg3 atRetryCount:(unsigned char)arg4;
@end

