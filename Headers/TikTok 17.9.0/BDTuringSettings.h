//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDTuringService.h"

@class BDTuringConfig, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface BDTuringSettings : BDTuringService
{
    _Bool _isUpdatingSettings;
    _Bool _useNativeReport;
    _Bool _skipLaunch;
    _Bool _preCreate;
    NSMutableDictionary *_settings;
    NSString *_filePath;
    long long _period;
    long long _lastSuccessTime;
    long long _retryInterval;
    long long _retryCount;
    BDTuringConfig *_config;
    NSString *_key;
    NSString *_iv;
    NSString *_lastRegion;
    NSObject<OS_dispatch_queue> *_serialQueue;
    CDUnknownBlockType _completion;
}

+ (id)settingsForConfig:(id)arg1;
+ (id)settingsForAppID:(id)arg1;
+ (void)addCustomToSettings:(id)arg1;
+ (void)unregisterCustomSettingBlockForKey:(id)arg1;
+ (void)registerCustomSettingBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2;
+ (id)customSettings;
+ (void)addDefaultToSettings:(id)arg1;
+ (void)unregisterAppDefaultSettingBlockForKey:(id)arg1;
+ (void)registerAppDefaultSettingBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2;
+ (void)unregisterDefaultSettingBlockForKey:(id)arg1;
+ (void)registerDefaultSettingBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2;
+ (id)appDefaultSettings;
+ (id)defaultSettings;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(copy, nonatomic) NSString *lastRegion; // @synthesize lastRegion=_lastRegion;
@property(copy, nonatomic) NSString *iv; // @synthesize iv=_iv;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) BDTuringConfig *config; // @synthesize config=_config;
@property(nonatomic) _Bool preCreate; // @synthesize preCreate=_preCreate;
@property(nonatomic) _Bool skipLaunch; // @synthesize skipLaunch=_skipLaunch;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) long long retryInterval; // @synthesize retryInterval=_retryInterval;
@property(nonatomic) long long lastSuccessTime; // @synthesize lastSuccessTime=_lastSuccessTime;
@property(nonatomic) long long period; // @synthesize period=_period;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSMutableDictionary *settings; // @synthesize settings=_settings;
@property(nonatomic) _Bool useNativeReport; // @synthesize useNativeReport=_useNativeReport;
@property(nonatomic) _Bool isUpdatingSettings; // @synthesize isUpdatingSettings=_isUpdatingSettings;
- (void).cxx_destruct;
- (void)cleanSettings;
- (void)addPlugin:(id)arg1 key1:(id)arg2 region:(id)arg3 value:(id)arg4 forceUpdate:(_Bool)arg5;
- (void)addPlugin:(id)arg1 key1:(id)arg2 region:(id)arg3 value:(id)arg4;
- (id)settingsForPlugin:(id)arg1 key:(id)arg2 defaultValue:(id)arg3;
- (id)requestURLForPlugin:(id)arg1 URLType:(id)arg2 region:(id)arg3;
- (void)checkAndFetchSettingsWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleCompletion;
- (void)checkLaunch;
- (void)fetchSettingsWithRetry:(long long)arg1 useBackup:(_Bool)arg2;
- (_Bool)handleResponseData:(id)arg1 region:(id)arg2;
- (_Bool)sholdRequest;
- (_Bool)serviceAvailable;
- (id)serviceName;
- (void)stopTimer;
- (void)startTimer;
- (void)readCommonSettings;
- (void)loadLocalSettings;
- (id)initWithAppID:(id)arg1;
- (void)dealloc;
- (void)reloadCustomSettings;
- (void)reloadDefaultSettings;
- (void)reportRequestResult:(long long)arg1;
@property(nonatomic) long long startRequestTime;

@end

