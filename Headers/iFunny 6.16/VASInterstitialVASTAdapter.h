//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/VASAdAdapter-Protocol.h>
#import <Funny/VASInterstitialAdAdapter-Protocol.h>
#import <Funny/VASVastControllerDelegate-Protocol.h>

@class NSString, VASAdContent, VASVASTController;
@protocol OS_dispatch_queue, VASInterstitialAdAdapterDelegate;

@interface VASInterstitialVASTAdapter : NSObject <VASVastControllerDelegate, VASInterstitialAdAdapter, VASAdAdapter>
{
    _Bool immersiveEnabled;
    _Bool _iOS10OrGreater;
    id <VASInterstitialAdAdapterDelegate> delegate;
    long long exitAnimationId;
    long long enterAnimationId;
    VASVASTController *_vastController;
    unsigned long long _state;
    NSObject<OS_dispatch_queue> *_queue;
    VASAdContent *_adContent;
}

+ (id)logger;
- (void).cxx_destruct;
@property(retain) VASAdContent *adContent; // @synthesize adContent=_adContent;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) VASVASTController *vastController; // @synthesize vastController=_vastController;
@property(readonly, nonatomic) _Bool iOS10OrGreater; // @synthesize iOS10OrGreater=_iOS10OrGreater;
@property(nonatomic) long long enterAnimationId; // @synthesize enterAnimationId;
@property(nonatomic) long long exitAnimationId; // @synthesize exitAnimationId;
@property(nonatomic, getter=isImmersiveEnabled) _Bool immersiveEnabled; // @synthesize immersiveEnabled;
@property __weak id <VASInterstitialAdAdapterDelegate> delegate; // @synthesize delegate;
- (void)queue_showFromViewController:(id)arg1;
- (void)queue_abortLoad;
- (void)queue_loadWithTimeout:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)queue_releaseResources;
- (id)queue_prepareWithAdContent:(id)arg1 usingAdSession:(id)arg2;
- (void)VASTControllerVideoDidComplete;
- (void)VASTControllerFailedWithError:(id)arg1;
- (void)VASTControllerWasClicked;
- (void)VASTControllerDidLeaveApplication;
- (void)VASTControllerShouldClose;
- (void)showFromViewController:(id)arg1;
- (void)abortLoad;
- (void)loadWithTimeout:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fireImpression;
- (void)releaseResources;
- (id)prepareWithAdContent:(id)arg1 usingAdSession:(id)arg2;
- (id)initWithVASAds:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

