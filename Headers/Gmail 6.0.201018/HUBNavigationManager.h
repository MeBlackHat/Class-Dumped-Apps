//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSCNavigationService-Protocol.h"
#import "GSCRootNavigationControllerProvider-Protocol.h"
#import "HUBNavigationTransactionQueueDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class HUBNavigationTransactionQueue, NSArray, NSString, UINavigationController;

@interface HUBNavigationManager : NSObject <HUBNavigationTransactionQueueDelegate, UIGestureRecognizerDelegate, GSCNavigationService, GSCRootNavigationControllerProvider>
{
    HUBNavigationTransactionQueue *_transactionQueue;
    UINavigationController *_navigationController;
    NSArray *_navigationListenerServices;
}

- (void).cxx_destruct;
- (_Bool)navigationController:(id)arg1 hasViewControllerAlreadyInStack:(id)arg2;
- (void)didFinishNavigationTransaction;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)resetWithRootViewController:(id)arg1;
- (void)popToRootViewControllerWithOptions:(id)arg1;
- (void)popToRootViewController;
- (id)closeTopViewControllerWithOptions:(id)arg1;
- (id)closeTopViewController;
- (_Bool)navigateToViewController:(id)arg1 withOptions:(id)arg2;
- (_Bool)navigateToViewController:(id)arg1;
- (id)navigationController;
- (void)dealloc;
- (id)initWithNavigationListenerServices:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

