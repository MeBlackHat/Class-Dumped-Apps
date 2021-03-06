//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ANXSubNavStrategy-Protocol.h"

@class NSDictionary, NSString, UIViewController;
@protocol ANPNavMenuRDCManager, ANXSubNavDataUpdater, ANXSubNavTabMenuUpdater;

@interface ANXPersonalizationGatewaySubnavStrategy : NSObject <ANXSubNavStrategy>
{
    _Bool _areRdcPagesAvailable;
    _Bool _isRegistered;
    long long subNavTabMenuType;
    id <ANXSubNavTabMenuUpdater> tabMenuUpdater;
    id <ANPNavMenuRDCManager> _subNavRDCService;
    struct NSDictionary *_rdcPages;
    NSString *_subnavMenuIdentifier;
    UIViewController *_currentViewController;
    id <ANXSubNavDataUpdater> _dataProcessor;
}

+ (_Bool)isPersonalizedGatewayWeblabActive:(_Bool)arg1;
@property(retain, nonatomic) id <ANXSubNavDataUpdater> dataProcessor; // @synthesize dataProcessor=_dataProcessor;
@property(nonatomic) _Bool isRegistered; // @synthesize isRegistered=_isRegistered;
@property(nonatomic) _Bool areRdcPagesAvailable; // @synthesize areRdcPagesAvailable=_areRdcPagesAvailable;
@property(retain, nonatomic) UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) NSString *subnavMenuIdentifier; // @synthesize subnavMenuIdentifier=_subnavMenuIdentifier;
@property(retain, nonatomic) NSDictionary *rdcPages; // @synthesize rdcPages=_rdcPages;
@property(retain, nonatomic) id <ANPNavMenuRDCManager> subNavRDCService; // @synthesize subNavRDCService=_subNavRDCService;
@property(nonatomic) __weak id <ANXSubNavTabMenuUpdater> tabMenuUpdater; // @synthesize tabMenuUpdater;
@property(readonly, nonatomic) long long subNavTabMenuType; // @synthesize subNavTabMenuType;
- (void).cxx_destruct;
- (_Bool)shouldShowViewController;
- (void)updateRDCPages:(struct NSDictionary *)arg1;
- (id)willShowViewController:(id)arg1 context:(id)arg2 previousViewController:(id)arg3 animationDuration:(double)arg4;
- (id)barRegistered:(id)arg1 currentViewController:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

