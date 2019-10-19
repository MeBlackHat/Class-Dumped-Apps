//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import "WAFinalLocationRecipient-Protocol.h"
#import "WAUnmangedCopyable-Protocol.h"

@class NSDate, NSString, WAChatJID, WAUserJID;

@interface WAFinalLocationRecipient : NSManagedObject <WAFinalLocationRecipient, WAUnmangedCopyable>
{
}

+ (id)fetchRequest;
@property(retain, nonatomic) WAUserJID *userJID;
@property(retain, nonatomic) WAChatJID *typesafeChatJID;
- (id)unmanagedCopy;

// Remaining properties
@property(copy, nonatomic) NSString *chatJID; // @dynamic chatJID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSDate *expiration; // @dynamic expiration;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *jid; // @dynamic jid;
@property(copy, nonatomic) NSString *messageID; // @dynamic messageID;
@property(readonly) Class superclass;

@end

