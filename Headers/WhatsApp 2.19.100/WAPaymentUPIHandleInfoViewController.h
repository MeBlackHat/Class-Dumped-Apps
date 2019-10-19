//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAStaticTableViewController.h>

#import "WAPaymentCoordinatorDelegate-Protocol.h"

@class NSString, WAPaymentCoordinator, WAPaymentUPIManager, WATableRow;

@interface WAPaymentUPIHandleInfoViewController : WAStaticTableViewController <WAPaymentCoordinatorDelegate>
{
    NSString *_handle;
    NSString *_name;
    _Bool _blocked;
    WAPaymentCoordinator *_payCoordinator;
    long long _paymentType;
    WATableRow *_sendPaymentRow;
    WATableRow *_requestPaymentRow;
    WATableRow *_blockRow;
    WAPaymentUPIManager *_paymentUPIManager;
}

- (void).cxx_destruct;
- (void)resetLoadingIndicators;
- (void)startLoadingForRow:(id)arg1;
- (void)paymentCoordinatorDidEndLoading:(id)arg1;
- (_Bool)paymentCoordinatorDidBeginLoading:(id)arg1;
- (void)paymentCoordinatorDidSystemCancel:(id)arg1;
- (void)paymentCoordinatorDidUserCancel:(id)arg1;
- (void)paymentCoordinatorDidFail:(id)arg1 error:(id)arg2;
- (void)paymentCoordinatorDidComplete:(id)arg1 result:(id)arg2;
- (void)processUnblockHandleRequest:(id)arg1;
- (void)processBlockHandleRequest:(id)arg1;
- (void)updateBlockRowReflectingStatus;
- (void)unblockHandle;
- (void)blockHandle;
- (void)promptToBlockOrUnblockHandle;
- (void)reallyStartPaymentFlowForRequestType:(long long)arg1;
- (void)startPaymentFlowForRequestType:(long long)arg1;
- (_Bool)wa_prefersMinimalBackButton;
- (void)setUpTableView;
- (void)viewDidLoad;
- (id)initWithHandle:(id)arg1 name:(id)arg2 paymentUPIManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

