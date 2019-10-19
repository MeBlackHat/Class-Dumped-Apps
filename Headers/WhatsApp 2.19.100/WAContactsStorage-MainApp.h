//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAContactsStorage.h>

@class NSString, WAContactSpotlightIndexer;

@interface WAContactsStorage (MainApp)
+ (void)sendEmailInvitationTo:(id)arg1 showIn:(id)arg2;
- (void)processIncomingStatusNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) WAContactSpotlightIndexer *spotlightIndexer;
- (void)refreshETag;
@property(readonly, copy, nonatomic) NSString *eTag;
- (void)setExistStatus:(id)arg1 forJID:(id)arg2;
- (id)existStatusForJID:(id)arg1;
- (void)refreshExistStatusForJID:(id)arg1;
- (_Bool)mergeStatusV2Results:(id)arg1 intoContext:(id)arg2;
- (id)inNetworkContactsForJIDs:(id)arg1 inContext:(id)arg2;
- (void)requestStatusMessagesForJIDs:(id)arg1;
- (void)markJIDAsOutOfNetwork:(id)arg1;
- (void)setAboutText:(id)arg1 withTimestamp:(id)arg2 forUserJID:(id)arg3;
- (id)inNetworkContactsForJID:(id)arg1 inContext:(id)arg2;
- (void)queryAboutTextForJIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)addressBookPhoneNumberForUserJID:(id)arg1;
- (id)refetchDataForContact:(id)arg1;
- (id)contactsWithLegacyIdentifier:(int)arg1 inContext:(id)arg2;
- (id)contactsWithIdentifier:(id)arg1 inContext:(id)arg2;
- (id)whatsAppAbleContactsWithABID:(int)arg1;
- (id)contactsWithLegacyIdentifiers:(id)arg1 inContext:(id)arg2;
- (id)allContactsDeduped;
- (unsigned long long)numberOfContacts;
- (id)reloadDataFromABRecord:(void *)arg1 whatsAppID:(id)arg2;
- (id)reloadDataFromCNContact:(id)arg1 whatsAppID:(id)arg2;
- (id)reloadDataFromContactModifiedInApp:(id)arg1 whatsAppID:(id)arg2;
- (struct WAContactProxyReloadResult)reloadDataFromContactProxyObject:(id)arg1 managedObjectContext:(id)arg2 usingExistingContacts:(id)arg3 uniqueContactKeys:(id)arg4;
- (id)addNewContactFromContactProxy:(id)arg1 inContext:(id)arg2;
- (id)identifiersFromAddressBook:(void *)arg1;
- (id)identifiersFromContactStore:(id)arg1 error:(out id *)arg2;
- (void)reportDuplicateWhatsAppIDs;
- (void)reloadContactsUsingContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)notifyUpdatedStatusIfNecessary;
- (void)notifyUpdatedContactsIfNecessary;
- (void)deleteDatabase;
- (void)handleDatabaseContext:(id)arg1 saveError:(id)arg2;
- (_Bool)saveDatabase:(id *)arg1;
- (_Bool)willSaveDatabaseContext:(id)arg1;
- (void)registerSpotlightIndexingWithManager:(id)arg1;
- (void)MAIN_APP_performAfterInitWithConnection:(id)arg1;
@end

