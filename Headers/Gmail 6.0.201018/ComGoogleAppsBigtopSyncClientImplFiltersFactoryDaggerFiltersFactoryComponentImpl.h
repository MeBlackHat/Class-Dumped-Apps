//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopSyncClientImplFiltersFactoryFiltersFactoryComponentImpl-Protocol.h"

@class NSString;
@protocol JavaxInjectProvider;

@interface ComGoogleAppsBigtopSyncClientImplFiltersFactoryDaggerFiltersFactoryComponentImpl : NSObject <ComGoogleAppsBigtopSyncClientImplFiltersFactoryFiltersFactoryComponentImpl>
{
    id <JavaxInjectProvider> getFiltersServiceProvider_;
    id <JavaxInjectProvider> servicesSystemProvider_;
    id <JavaxInjectProvider> provideServiceFactoryProvider_;
    id <JavaxInjectProvider> provideServiceStubProvider_;
    id <JavaxInjectProvider> getClusterFetcherProvider_;
    id <JavaxInjectProvider> getConversationsProvider_;
    id <JavaxInjectProvider> provideSapiMainExecutorProvider_;
    id <JavaxInjectProvider> getItemServerPermIdParserProvider_;
    id <JavaxInjectProvider> filterConfigFactoryImplProvider_;
    id <JavaxInjectProvider> filterFetcherImplProvider_;
}

- (void)dealloc;
- (id)getFilterFetcher;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

