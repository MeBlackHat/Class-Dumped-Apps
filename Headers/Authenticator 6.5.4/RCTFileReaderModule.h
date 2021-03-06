//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RCTBlob/NativeFileReaderModuleSpec-Protocol.h>
#import <RCTBlob/RCTBridgeModule-Protocol.h>

@class NSString, RCTBridge;
@protocol OS_dispatch_queue, RCTTurboModuleLookupDelegate;

@interface RCTFileReaderModule : NSObject <NativeFileReaderModuleSpec, RCTBridgeModule>
{
    RCTBridge *_bridge;
}

+ (const struct RCTMethodInfo *)__rct_export__561;
+ (const struct RCTMethodInfo *)__rct_export__310;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (shared_ptr_3725e3cd)getTurboModuleWithJsInvoker:(shared_ptr_09f1d460)arg1 nativeInvoker:(shared_ptr_09f1d460)arg2 perfLogger:(id)arg3;
- (void)readAsDataURL:(id)arg1 resolve:(CDUnknownBlockType)arg2 reject:(CDUnknownBlockType)arg3;
- (void)readAsText:(id)arg1 encoding:(id)arg2 resolve:(CDUnknownBlockType)arg3 reject:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <RCTTurboModuleLookupDelegate> turboModuleLookupDelegate;

@end

