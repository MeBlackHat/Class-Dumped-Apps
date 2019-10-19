//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAMessageDataItem.h>

@class NSString;

@interface WAMessageDataItem (MainApp)
+ (id)newItemForMessage:(id)arg1;
+ (void)copyDataItemsInMessage:(id)arg1 toMessage:(id)arg2;
+ (id)insertURLDataItemForWebPageMessage:(id)arg1;
+ (_Bool)wouldInsertDataItemsFor:(id)arg1;
+ (unsigned long long)insertDataItemsFromTextInMessage:(id)arg1 startingAtIndex:(long long)arg2 excludingURLs:(id)arg3;
+ (void)enumerateURLsFor:(id)arg1 excludingURLs:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (unsigned long long)internalInsertDataItemsForMessageIfNeeded:(id)arg1;
+ (void)insertDataItemsForMessages:(id)arg1;
+ (void)clearDataItemsForMessageIfNeeded:(id)arg1;
+ (id)fetchRequestForMessagesNeedingDataItemsWithChatSessionID:(id)arg1;
@property(readonly, nonatomic) NSString *host;
- (id)makeCopyForForwardedOrChildMessage;
- (void)setDate:(id)arg1 allowExternalSideEffects:(_Bool)arg2;
@end

