//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import "WALocationRecipient-Protocol.h"
#import "WAUnmangedCopyable-Protocol.h"

@class NSString, WAChatJID, WAUserJID;

@interface WALocationRecipient : NSManagedObject <WALocationRecipient, WAUnmangedCopyable>
{
}

+ (id)fetchRequest;
@property(retain, nonatomic) WAChatJID *typesafeChatJID;
@property(retain, nonatomic) WAUserJID *userJID;
- (id)unmanagedCopy;

// Remaining properties
@property(copy, nonatomic) NSString *chatJID; // @dynamic chatJID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *jid; // @dynamic jid;
@property(readonly) Class superclass;

@end

