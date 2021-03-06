//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGUserSessionObject-Protocol.h>

@class IGAutoCompleteUsersStore, IGBlendedSearchRecentItemsOrderStore, IGRecentSearchStore, IGUserDefaults, IGUserStore, NSDate, NSString;
@protocol IGAPIClient, IGUserExperimentSet;

@interface IGRecentSearchStoreService : NSObject <IGUserSessionObject>
{
    IGBlendedSearchRecentItemsOrderStore *_blendedSearchStore;
    IGAutoCompleteUsersStore *_autcompleteUsersStore;
    IGRecentSearchStore *_recentHashtagsStore;
    IGRecentSearchStore *_recentPlacesStore;
    IGRecentSearchStore *_recentKeywordsStore;
    IGUserStore *_userStore;
    IGUserDefaults *_sessionUserDefaults;
    id <IGAPIClient> _networker;
    id <IGUserExperimentSet> _experimentSet;
    NSDate *_lastFetchTime;
    long long _fetchTimeMinimumThreshold;
}

- (void).cxx_destruct;
- (void)_archiveAllRecents;
- (id)_readLastFetchTime;
- (void)_resetStoresWithRecentItems:(id)arg1;
- (void)_fetchRecentSearches;
- (void)syncRecentSearches;
- (id)initWithBlendedSearchRecentItemsOrderStore:(id)arg1 autocompleteUsersStore:(id)arg2 recentHashtagsStore:(id)arg3 recentPlacesStore:(id)arg4 recentKeywordsStore:(id)arg5 userStore:(id)arg6 sessionUserDefaults:(id)arg7 networker:(id)arg8 launcherSet:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

