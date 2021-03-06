//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, TTAVPreloaderItem, TTVideoEngineURLInfo;
@protocol TTVideoEngineNetClient;

@protocol TTVideoEnginePlaySource <NSObject>
@property(nonatomic) _Bool useEphemeralSession;
@property(nonatomic) _Bool useFallbackApi;
@property(nonatomic) _Bool cacheVideoModelEnable;
@property(retain, nonatomic) id <TTVideoEngineNetClient> netClient;
@property(readonly, nonatomic) _Bool canFetch;
@property(readonly, nonatomic) _Bool enableAdaptive;
@property(readonly, nonatomic) _Bool isLocalFile;
@property(readonly, nonatomic) _Bool isLivePlayback;
@property(readonly, nonatomic) _Bool isMainUrl;
@property(readonly, nonatomic) _Bool isSingleUrl;
@property(readonly, nonatomic) _Bool supportMP4;
@property(readonly, nonatomic) _Bool supportDash;
@property(readonly, nonatomic) _Bool supportSSL;
@property(readonly, copy, nonatomic) NSString *currentUrl;
@property(copy, nonatomic) NSDictionary *resolutionMap;
- (NSString *)videoBashString;
- (void)cancelFetch;
- (void)fetchUrlWithApiString:(NSString * (^)(NSString *))arg1 auth:(NSString * (^)(NSString *))arg2 params:(NSDictionary * (^)(NSString *))arg3 apiVersion:(long long (^)(NSString *))arg4 result:(void (^)(_Bool, TTVideoEngineModel *, NSError *))arg5;
- (id)deepCopy;
- (_Bool)isEqual:(id)arg1;
- (void)setParamMap:(NSDictionary *)arg1;
- (NSString *)barrageMaskUrl;
- (NSString *)decodingMode;
- (NSString *)refString;
- (long long)currentUrlIndex;
- (NSString *)checkInfo:(unsigned long long)arg1;
- (NSString *)mediaFileHashOfType:(unsigned long long)arg1;
- (long long)bitrateForDashSourceOfType:(unsigned long long)arg1;
- (NSString *)getValueStr:(int)arg1;
- (double)getValueFloat:(int)arg1;
- (_Bool)hasVideo;
- (_Bool)validate;
- (_Bool)preloadDataIsExpire;
- (long long)videoModelVersion;
- (long long)videoSizeOfType:(unsigned long long)arg1;
- (NSString *)spade_a;
- (NSString *)decryptionKey;
- (NSString *)mediaFileKey;
- (long long)retryStrategyForRetryCount:(long long)arg1;
- (_Bool)skipToNext;
- (NSString *)getDynamicType;
- (NSString *)proxyUrlExtraInfo;
- (NSArray *)getVideoList;
- (TTVideoEngineURLInfo *)urlInfoForResolution:(unsigned long long *)arg1 mediaType:(NSString *)arg2;
- (TTVideoEngineURLInfo *)usingUrlInfo;
- (NSArray *)allUrlsForResolution:(unsigned long long *)arg1;
- (NSString *)urlForResolution:(unsigned long long)arg1;
- (TTAVPreloaderItem *)preloadItem;
- (NSString *)videoId;
- (unsigned long long)autoResolution;
- (unsigned long long)currentResolution;
- (NSArray *)supportQualityDesc;
- (NSArray *)supportResolutions;
@end

