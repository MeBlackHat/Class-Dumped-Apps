//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BDPSchema, NSDictionary, NSString;

@interface BDPAppPreloadInfo : NSObject
{
    long long _type;
    long long _priority;
    long long _preloadMode;
    BDPSchema *_schema;
    NSString *_appId;
    NSDictionary *_extraInfo;
    CDUnknownBlockType _loadProgressBlk;
    CDUnknownBlockType _preloadCompletion;
}

+ (id)preloadInfoWithAppId:(id)arg1 type:(long long)arg2 priority:(long long)arg3;
+ (id)preloadInfoWithAppId:(id)arg1 type:(long long)arg2 priority:(long long)arg3 preloadMode:(long long)arg4;
+ (id)preloadInfoWithURL:(id)arg1 priority:(long long)arg2;
@property(copy, nonatomic) CDUnknownBlockType preloadCompletion; // @synthesize preloadCompletion=_preloadCompletion;
@property(copy, nonatomic) CDUnknownBlockType loadProgressBlk; // @synthesize loadProgressBlk=_loadProgressBlk;
@property(copy, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) BDPSchema *schema; // @synthesize schema=_schema;
@property(nonatomic) long long preloadMode; // @synthesize preloadMode=_preloadMode;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)init;

@end

