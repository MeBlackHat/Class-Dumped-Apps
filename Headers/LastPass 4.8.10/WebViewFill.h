//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WKWebView;

@interface WebViewFill : NSObject
{
    _Bool _isLibInjected;
    WKWebView *_wkWebView;
}

+ (void)loadLibToUserContentController:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) _Bool isLibInjected; // @synthesize isLibInjected=_isLibInjected;
@property(readonly, nonatomic) WKWebView *wkWebView; // @synthesize wkWebView=_wkWebView;
- (id)dictionaryForFormFill:(id)arg1;
- (id)dictionaryForFillAccount:(id)arg1;
- (void)createIconsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)formDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fillGeneratedPassword:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fillAccount:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fillSubmitAccount:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)domainCheckForAccount:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requiresDomainCheckForAccount:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fillNote:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)doFF:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createicons;
- (id)notefill:(id)arg1;
- (id)formfill:(id)arg1;
- (id)getformdata;
- (id)fillFields:(id)arg1;
- (id)setval_genpw:(id)arg1;
- (id)bestmatch:(id)arg1;
- (id)fillAndSubmitFields:(id)arg1;
- (void)evaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)resultAsBool:(id)arg1;
- (id)resultAsString:(id)arg1;
- (void)logFormFillAccess:(id)arg1;
- (void)logAccountAccess:(id)arg1;
- (void)dealloc;
- (id)initWithWKWebView:(id)arg1;
- (id)init;

@end

