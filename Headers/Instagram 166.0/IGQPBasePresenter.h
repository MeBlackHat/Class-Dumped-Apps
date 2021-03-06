//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGQPPresenterProtocol-Protocol.h>

@class IGQPPromotion, IGQPServerContext, IGQPSurfaceID, IGUserSession, NSArray, NSString;
@protocol IGQPDelegate;

@interface IGQPBasePresenter : NSObject <IGQPPresenterProtocol>
{
    _Bool _didPrepareContext;
    id <IGQPDelegate> _qpCoordinator;
    IGUserSession *_session;
    IGQPPromotion *_currentPromotion;
    NSArray *_promotions;
    IGQPServerContext *_context;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didPrepareContext; // @synthesize didPrepareContext=_didPrepareContext;
@property(retain, nonatomic) IGQPServerContext *context; // @synthesize context=_context;
@property(copy, nonatomic) NSArray *promotions; // @synthesize promotions=_promotions;
@property(retain, nonatomic) IGQPPromotion *currentPromotion; // @synthesize currentPromotion=_currentPromotion;
@property(readonly, nonatomic) IGUserSession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <IGQPDelegate> qpCoordinator; // @synthesize qpCoordinator=_qpCoordinator;
- (id)megaphoneForTrigger:(id)arg1;
- (id)bestPromotionForTriggerID:(id)arg1 triggerContext:(id)arg2;
- (void)setBestPromotion:(id)arg1;
- (void)dismissCurrentPromotion;
- (void)didPrepareWithServerContext;
- (void)prepareWithServerContext:(id)arg1;
@property(readonly, nonatomic) int qpType;
@property(readonly, copy, nonatomic) IGQPSurfaceID *qpSurfaceID;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

