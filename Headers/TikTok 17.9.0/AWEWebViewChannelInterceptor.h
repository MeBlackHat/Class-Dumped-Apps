//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESFalconCustomInterceptor-Protocol.h"

@class IESGurdDelegateDispatcher, NSDictionary, NSString;
@protocol IESFalconGurdInterceptionDelegate;

@interface AWEWebViewChannelInterceptor : NSObject <IESFalconCustomInterceptor>
{
    _Bool _enable;
    NSDictionary *_manifest;
    NSString *_channel;
    NSString *_accessKey;
    CDUnknownBlockType _channelBlock;
    CDUnknownBlockType _accessKeyBlock;
    IESGurdDelegateDispatcher<IESFalconGurdInterceptionDelegate> *_delegateDispatcher;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IESGurdDelegateDispatcher<IESFalconGurdInterceptionDelegate> *delegateDispatcher; // @synthesize delegateDispatcher=_delegateDispatcher;
@property(copy, nonatomic) CDUnknownBlockType accessKeyBlock; // @synthesize accessKeyBlock=_accessKeyBlock;
@property(copy, nonatomic) CDUnknownBlockType channelBlock; // @synthesize channelBlock=_channelBlock;
@property(copy, nonatomic) NSString *accessKey; // @synthesize accessKey=_accessKey;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSDictionary *manifest; // @synthesize manifest=_manifest;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
- (id)falconMetaDataWithURLMd5:(id)arg1 accessKey:(id)arg2 channel:(id)arg3;
- (id)falconMetaDataForURLRequest:(id)arg1;
- (void)unregisterInterceptionDelegate:(id)arg1;
- (void)registerInterceptionDelegate:(id)arg1;
- (void)readManifestJsonWithAccessKey:(id)arg1 channel:(id)arg2;
- (id)initWithAccessKeyBlock:(CDUnknownBlockType)arg1 channelBlock:(CDUnknownBlockType)arg2;
- (id)initWithAccessKey:(id)arg1 channelBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

