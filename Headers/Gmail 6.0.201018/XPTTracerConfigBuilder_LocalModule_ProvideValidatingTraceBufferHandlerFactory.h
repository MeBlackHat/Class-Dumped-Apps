//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DaggerInternalFactory-Protocol.h"

@class NSString, XPTTracerConfigBuilder_LocalModule;
@protocol JavaxInjectProvider;

@interface XPTTracerConfigBuilder_LocalModule_ProvideValidatingTraceBufferHandlerFactory : NSObject <DaggerInternalFactory>
{
    XPTTracerConfigBuilder_LocalModule *module_;
    id <JavaxInjectProvider> validatorProvider_;
    id <JavaxInjectProvider> extractorProvider_;
    id <JavaxInjectProvider> processorProvider_;
    id <JavaxInjectProvider> handlerProvider_;
}

- (void)dealloc;
- (id)get;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

