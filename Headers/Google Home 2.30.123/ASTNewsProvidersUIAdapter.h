//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTSettingsUIAdapter.h"

@class ASTMenuDynamicHeightTextStreamItem, ASTMenuIconStreamItem, NSDictionary, NSMutableArray;

@interface ASTNewsProvidersUIAdapter : ASTSettingsUIAdapter
{
    NSDictionary *_providers;
    NSDictionary *_providerCategories;
    long long _numberOfNonProviderCells;
    ASTMenuIconStreamItem *_addNewsSourcesStreamItem;
    ASTMenuDynamicHeightTextStreamItem *_pageDescriptionItem;
    NSMutableArray *_enabledProviderIDs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *enabledProviderIDs; // @synthesize enabledProviderIDs=_enabledProviderIDs;
- (void)didTapRemoveProviderButton:(id)arg1;
- (void)didTapChangeOrderButton:(id)arg1;
- (void)setProvidersFromSettings:(id)arg1;
- (void)setEnabledProviderIDsFromSettings:(id)arg1;
- (id)pageDescriptionWithPersonalNewsEnabled:(_Bool)arg1;
- (void)menuStreamController:(id)arg1 didUpdateItem:(id)arg2;
- (void)menuStreamController:(id)arg1 didSelectItem:(id)arg2;
- (id)settingsFilter;
- (id)menuSectionsForSettings:(id)arg1;
- (id)pageCustomizations;

@end

