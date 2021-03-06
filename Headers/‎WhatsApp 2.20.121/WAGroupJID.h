//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAChatJID.h>

#import <Core/WAChatWithActivityJID-Protocol.h>
#import <Core/WAProfilePictureJID-Protocol.h>
#import <Core/WASignalRegularGroupCipherJID-Protocol.h>
#import <Core/WAXGroupJIDUserJIDProtocol-Protocol.h>

@class NSString;

@interface WAGroupJID : WAChatJID <WAChatWithActivityJID, WASignalRegularGroupCipherJID, WAXGroupJIDUserJIDProtocol, WAProfilePictureJID>
{
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)isChatWithActivityJID;
+ (_Bool)isSignalRegularGroupCipherJID;
+ (_Bool)isSignalChatJID;
+ (_Bool)isSignalGroupCipherJID;
+ (_Bool)isGroupJIDUserJID;
- (_Bool)isEqualToGroupJID:(id)arg1;
- (_Bool)isValid;
- (unsigned long long)internalDomain;
- (id)initWithPrimaryIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (short)chatType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

