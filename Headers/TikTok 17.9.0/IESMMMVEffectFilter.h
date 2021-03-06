//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSGLFilter.h"

@class IESMMEffectConfig, NSObject;
@protocol OS_dispatch_semaphore;

@interface IESMMMVEffectFilter : HTSGLFilter
{
    IESMMEffectConfig *_config;
    CDUnknownBlockType _IESMMEffectMsgBlock;
    void *_renderMangerHandle;
    void *_IESGpuProcessMsg;
    NSObject<OS_dispatch_semaphore> *_operateSemaphore;
}

+ (id)getMVResourceInfo:(id)arg1;
+ (long long)paraseContentFile:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *operateSemaphore; // @synthesize operateSemaphore=_operateSemaphore;
@property(nonatomic) void *IESGpuProcessMsg; // @synthesize IESGpuProcessMsg=_IESGpuProcessMsg;
@property(nonatomic) void *renderMangerHandle; // @synthesize renderMangerHandle=_renderMangerHandle;
@property(copy, nonatomic) CDUnknownBlockType IESMMEffectMsgBlock; // @synthesize IESMMEffectMsgBlock=_IESMMEffectMsgBlock;
@property(readonly, nonatomic) IESMMEffectConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (int)convert:(id)arg1 start:(double)arg2 duraion:(double)arg3 info:(struct bef_mv_info_st *)arg4 audioType:(int)arg5;
- (void)releaseRenderManager;
- (void)dealloc;
- (void)setServerAlgorithmResults:(id)arg1;
- (id)getCurrentAlgorithmConfigs;
- (id)getMVExportData;
- (id)userSelectMusic:(id)arg1 start:(double)arg2 duration:(double)arg3 error:(id *)arg4;
- (id)setMV:(id)arg1 userResourses:(id)arg2 userSelectMusic:(id)arg3 start:(double)arg4 duration:(double)arg5 error:(id *)arg6;
- (void)p_initEffectSDK;
- (int)bef_effect_mv_seek:(double)arg1 input_resource:(id)arg2 resourcecount:(int)arg3 texture:(unsigned int)arg4;
- (id)initWithConfig:(id)arg1;

@end

