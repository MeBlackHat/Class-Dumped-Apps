//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChromeInternal/DSCDiscoverEngineState-Protocol.h>
#import <ChromeInternal/DSCExtensionRegistrar-Protocol.h>

@class DSCHostContext, NSString, NSURL;
@protocol DSCDiscoverEngineDelegate, DSCXUIStore;

@interface DSCDiscoverEngine : NSObject <DSCExtensionRegistrar, DSCDiscoverEngineState>
{
    _Bool _started;
    unsigned long long _startedCount;
    unsigned long long _stoppedCount;
    NSString *_kansasVersion;
    NSURL *_interestManagementEndpoint;
    id <DSCDiscoverEngineDelegate> _delegate;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) __weak id <DSCDiscoverEngineDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSURL *interestManagementEndpoint; // @synthesize interestManagementEndpoint=_interestManagementEndpoint;
@property(copy, nonatomic) NSString *kansasVersion; // @synthesize kansasVersion=_kansasVersion;
@property(nonatomic) unsigned long long stoppedCount; // @synthesize stoppedCount=_stoppedCount;
@property(nonatomic) unsigned long long startedCount; // @synthesize startedCount=_startedCount;
@property(nonatomic, getter=isStarted) _Bool started; // @synthesize started=_started;
- (id)account;
- (void)unregisterCustomType:(Class)arg1;
- (void)registerCustomType:(Class)arg1;
- (void)unregisterPropertyHandler:(Class)arg1;
- (void)registerPropertyHandler:(Class)arg1;
- (void)unregisterCommandHandler:(Class)arg1;
- (void)registerCommandHandler:(Class)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isSignedIn) _Bool signedIn;
- (void)updateTheme;
- (id)discoverViewControllerForModel:(id)arg1;
- (id)cardListModelForIdentifier:(id)arg1 token:(id)arg2 channelType:(long long)arg3 options:(id)arg4;
- (id)cardListModelForIdentifier:(id)arg1 token:(id)arg2 channelType:(long long)arg3 purgeCache:(_Bool)arg4 usePersistentCache:(_Bool)arg5;
- (void)stop;
- (void)startWithAccount:(id)arg1;
- (void)startWithAccount:(id)arg1 optIn:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) id <DSCXUIStore> xUIStore;
@property(readonly, nonatomic) double cardWidth;
@property(readonly, nonatomic) DSCHostContext *hostContext;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

