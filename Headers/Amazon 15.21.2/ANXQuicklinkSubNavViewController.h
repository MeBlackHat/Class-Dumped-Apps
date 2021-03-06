//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANXBarComponentViewController.h"

#import "ANPNavMenuRDCManagerListener-Protocol.h"

@class ANXSubNavTabMenuViewController, NSDictionary, NSMutableDictionary, NSString, RDCPage;
@protocol ANPNavMenuRDCManager, ANXMetricsService;

@interface ANXQuicklinkSubNavViewController : ANXBarComponentViewController <ANPNavMenuRDCManagerListener>
{
    id <ANPNavMenuRDCManager> _anpSubNavRDCService;
    ANXSubNavTabMenuViewController *_subNavTabMenuVC;
    RDCPage *_rdcPage;
    struct NSDictionary *_rdcPages;
    NSString *_subnavMenuIdentifier;
    NSMutableDictionary *_rdcPagesWithSubnavChildren;
    id <ANXMetricsService> _metricsService;
}

@property(retain, nonatomic) id <ANXMetricsService> metricsService; // @synthesize metricsService=_metricsService;
@property(retain, nonatomic) NSMutableDictionary *rdcPagesWithSubnavChildren; // @synthesize rdcPagesWithSubnavChildren=_rdcPagesWithSubnavChildren;
@property(retain, nonatomic) NSString *subnavMenuIdentifier; // @synthesize subnavMenuIdentifier=_subnavMenuIdentifier;
@property(retain, nonatomic) NSDictionary *rdcPages; // @synthesize rdcPages=_rdcPages;
@property(retain, nonatomic) RDCPage *rdcPage; // @synthesize rdcPage=_rdcPage;
@property(retain, nonatomic) ANXSubNavTabMenuViewController *subNavTabMenuVC; // @synthesize subNavTabMenuVC=_subNavTabMenuVC;
@property(retain, nonatomic) id <ANPNavMenuRDCManager> anpSubNavRDCService; // @synthesize anpSubNavRDCService=_anpSubNavRDCService;
- (void).cxx_destruct;
- (void)endTimerForUIRenderingLatency;
- (void)startTimerForUIRenderingLatency;
- (id)getRDCPageForViewController:(id)arg1 fromRDCPagesWithSubnavChildren:(id)arg2;
- (id)generateRDCPageMapping:(struct NSDictionary *)arg1;
- (void)menuUpdatedWithData:(struct NSDictionary *)arg1;
- (void)viewWillLayoutSubviews;
- (void)addingChildVC:(id)arg1;
- (void)registerRDC;
- (id)willShowViewController:(id)arg1 previousViewController:(id)arg2 animationDuration:(double)arg3;
- (id)willShowViewController:(id)arg1 context:(id)arg2 previousViewController:(id)arg3 animationDuration:(double)arg4;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)barRegistered:(id)arg1 currentViewController:(id)arg2;
- (id)initWithBarTag:(id)arg1 initialState:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

