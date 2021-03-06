//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleTemplateJslayoutCommonLoggingLogbuilderLogBuilder, JSLClientPlatform, JSLInjectedGlobals, NSString;
@protocol ComGoogleTemplateJslayoutInterpreterUrlmodifierUrlModifier, JSLComposableProvider, JSLHtmlSupport, JSLInterpreterUsageTracker, JSLPlatformAbstraction, JSLRenderContext_ExceptionCallback, JSLTracer, JavaUtilMap;

@interface JSLRenderContext_Builder : NSObject
{
    _Bool bidiLocaleRtl_;
    _Bool scraping_;
    NSString *languageCode_;
    NSString *css3Prefix_;
    id <JavaUtilMap> css3PrefixRules_;
    JSLClientPlatform *clientPlatform_;
    id <JSLComposableProvider> composableProvider_;
    id <JSLPlatformAbstraction> platformAbstraction_;
    id <JSLHtmlSupport> htmlSupport_;
    ComGoogleTemplateJslayoutCommonLoggingLogbuilderLogBuilder *logBuilder_;
    id <JSLRenderContext_ExceptionCallback> exceptionCallback_;
    id <ComGoogleTemplateJslayoutInterpreterUrlmodifierUrlModifier> urlModifier_;
    id <JSLTracer> tracer_;
    id <JSLInterpreterUsageTracker> interpreterUsageTracker_;
    JSLInjectedGlobals *globals_;
}

- (void)dealloc;
- (id)build;
- (id)setGlobalWithIOSClass:(id)arg1 withId:(id)arg2;
- (id)setExceptionCallbackWithJSLRenderContext_ExceptionCallback:(id)arg1;
- (id)setInterpreterUsageTrackerWithJSLInterpreterUsageTracker:(id)arg1;
- (id)setTracerWithJSLTracer:(id)arg1;
- (id)setUrlModifierWithComGoogleTemplateJslayoutInterpreterUrlmodifierUrlModifier:(id)arg1;
- (id)setLogBuilderWithComGoogleTemplateJslayoutCommonLoggingLogbuilderLogBuilder:(id)arg1;
- (id)setHtmlSupportWithJSLHtmlSupport:(id)arg1;
- (id)setPlatformAbstractionWithJSLPlatformAbstraction:(id)arg1;
- (id)setComposableProviderWithJSLComposableProvider:(id)arg1;
- (id)setClientPlatformWithJSLClientPlatform:(id)arg1;
- (id)setCss3PrefixRulesWithJavaUtilMap:(id)arg1;
- (id)setCss3PrefixWithNSString:(id)arg1;
- (id)setLanguageCodeWithNSString:(id)arg1;
- (id)setScrapingWithBoolean:(_Bool)arg1;
- (id)setBidiLocaleRtlWithBoolean:(_Bool)arg1;

@end

