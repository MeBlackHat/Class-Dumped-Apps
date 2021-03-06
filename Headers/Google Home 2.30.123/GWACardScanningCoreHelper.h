//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GWAButtonViewDelegate-Protocol.h"
#import "GWADependencyGraphComponent-Protocol.h"

@class GWACardScanningViewController, GWADependencyGraph, NSString;

@interface GWACardScanningCoreHelper : NSObject <GWAButtonViewDelegate, GWADependencyGraphComponent>
{
    GWACardScanningViewController *_cardScanningViewController;
    GWADependencyGraph *_dependencyGraph;
}

+ (id)alertShowsCancelButton:(_Bool)arg1 withWidgetStyle:(unsigned long long)arg2 confirmActionBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)registerWithDependencyGraph:(id)arg1;
- (void)buttonTapped:(id)arg1;
- (id)setupCancelButtonWithProto:(id)arg1;
- (id)initWithCardScanningViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

