//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAStaticTableViewController.h>

@class UIView, WAPaymentManager, WATableRow, _TtC14MainAppLibrary20WAPaymentBaseAccount;
@protocol WAPaymentAccountViewControllerDelegate;

@interface WAPaymentAccountViewController : WAStaticTableViewController
{
    id <WAPaymentAccountViewControllerDelegate> _delegate;
    WAPaymentManager *_paymentManager;
    _TtC14MainAppLibrary20WAPaymentBaseAccount *_account;
    UIView *_footerView;
    WATableRow *_rowUnlinkAccount;
    WATableRow *_rowSetDefaultAccount;
}

@property(retain, nonatomic) WATableRow *rowSetDefaultAccount; // @synthesize rowSetDefaultAccount=_rowSetDefaultAccount;
@property(retain, nonatomic) WATableRow *rowUnlinkAccount; // @synthesize rowUnlinkAccount=_rowUnlinkAccount;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) _TtC14MainAppLibrary20WAPaymentBaseAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) WAPaymentManager *paymentManager; // @synthesize paymentManager=_paymentManager;
@property(nonatomic) __weak id <WAPaymentAccountViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)enableActionRow:(id)arg1 enabled:(_Bool)arg2 destructiveRow:(_Bool)arg3;
- (void)setActionRowsEnabled:(_Bool)arg1;
- (void)resetLoadingIndicators;
- (void)startLoadingForRow:(id)arg1;
- (void)reallyUnlinkPaymentAccount;
- (void)unlinkPaymentAccountWithPendingTransactions:(unsigned long long)arg1;
- (void)unlinkPaymentAccount;
- (unsigned long long)pendingTransactionsCount;
- (void)makeDefault;
- (id)addUnlinkPaymentAccountRowToSection:(id)arg1;
- (id)addUnlinkPaymentAccountRowToSection:(id)arg1 withTitle:(id)arg2;
- (id)addEditDefaultCredentialRowIfNeededToSection:(id)arg1 withInset:(struct UIEdgeInsets)arg2;
- (id)addActionRowToSection:(id)arg1 destructiveRow:(_Bool)arg2 title:(id)arg3 insets:(struct UIEdgeInsets)arg4 handler:(CDUnknownBlockType)arg5;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)updateTableViewFooterIfNecessary;
- (_Bool)wa_prefersMinimalBackButton;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1 paymentManager:(id)arg2;

@end

