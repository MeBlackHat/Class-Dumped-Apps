//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGDiscoverySectionLoggingProvider-Protocol.h>

@class IGDiscoveryEntityPageLoggingConfig, IGSessionTracker, NSDictionary, NSString;

@interface IGDiscoveryGridImpressionLoggingProvider : NSObject <IGDiscoverySectionLoggingProvider>
{
    IGSessionTracker *_sessionTracker;
    IGDiscoveryEntityPageLoggingConfig *_entityPageLoggingConfig;
    NSString *_analyticsModule;
    NSString *_rankToken;
}

@property(copy, nonatomic) NSString *rankToken; // @synthesize rankToken=_rankToken;
@property(readonly, copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *thumbnailSectionName;
- (id)extraLoggingDictionaryForFeedItem:(id)arg1;
@property(readonly, nonatomic) NSString *impressionEventName;
@property(readonly, nonatomic) NSDictionary *extras;
@property(readonly, nonatomic) NSString *sessionId;
- (id)initWithSessionTracker:(id)arg1 analyticsModule:(id)arg2 entityPageLoggingConfig:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

