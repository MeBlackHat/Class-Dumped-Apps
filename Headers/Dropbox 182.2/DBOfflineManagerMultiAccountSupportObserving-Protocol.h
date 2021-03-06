//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DBOfflineManagerMultiAccountSupport, DBOfflineProgress;

@protocol DBOfflineManagerMultiAccountSupportObserving <NSObject>
- (void)offlineMultiAccountSupportSyncDidEnd:(DBOfflineManagerMultiAccountSupport *)arg1 forRole:(int)arg2 areExplicitSyncsInProgress:(_Bool)arg3;
- (void)offlineMultiAccountSupport:(DBOfflineManagerMultiAccountSupport *)arg1 progressIsReady:(DBOfflineProgress *)arg2 forRole:(int)arg3;
- (void)offlineMultiAccountSupportSyncWillBegin:(DBOfflineManagerMultiAccountSupport *)arg1 forRole:(int)arg2 isExplicit:(_Bool)arg3;
@end

