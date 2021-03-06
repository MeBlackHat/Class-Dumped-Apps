//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/VASBrowserViewControllerDelegate-Protocol.h>
#import <Funny/VASPEXHandlerDelegate-Protocol.h>

@class NSString, UIViewController, VASAds, VASAppStore, VASBrowserViewController;

@interface VASURIExperiencePEXHandler : NSObject <VASBrowserViewControllerDelegate, VASPEXHandlerDelegate>
{
    _Bool _modalContentPresented;
    _Bool _modalPresented;
    VASAds *_vasAds;
    VASAppStore *_appStore;
    VASBrowserViewController *_browserController;
    NSString *_activeURI;
    CDUnknownBlockType _eventHandler;
    UIViewController *_presentingViewController;
}

+ (id)logger;
- (void).cxx_destruct;
@property(nonatomic) _Bool modalPresented; // @synthesize modalPresented=_modalPresented;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(copy, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
@property(retain, nonatomic) NSString *activeURI; // @synthesize activeURI=_activeURI;
@property(nonatomic) _Bool modalContentPresented; // @synthesize modalContentPresented=_modalContentPresented;
@property(retain, nonatomic) VASBrowserViewController *browserController; // @synthesize browserController=_browserController;
@property(retain, nonatomic) VASAppStore *appStore; // @synthesize appStore=_appStore;
@property(retain, nonatomic) VASAds *vasAds; // @synthesize vasAds=_vasAds;
- (void)adDidLeaveApplication;
- (void)browserDidClose:(id)arg1;
- (void)contentDidCloseModal;
- (void)contentDidPresentModal;
- (void)openInAppBrowserWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)openAppStoreForAppId:(id)arg1 affiliateId:(id)arg2 campaignId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)handleExternalURI:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleInternalURI:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleURIDict:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)releaseResources;
- (void)prepare:(id)arg1 cache:(_Bool)arg2 usingAdSession:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)processURIs:(id)arg1 arguements:(id)arg2;
- (void)execute:(id)arg1 presentingViewController:(id)arg2 event:(CDUnknownBlockType)arg3;
- (id)initWithVASAds:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

