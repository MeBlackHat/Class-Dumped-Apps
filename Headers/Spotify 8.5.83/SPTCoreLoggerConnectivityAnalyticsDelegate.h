//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTConnectivityAnalyticsDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface SPTCoreLoggerConnectivityAnalyticsDelegate : NSObject <SPTConnectivityAnalyticsDelegate>
{
    NSMutableArray *_spooledPayloads;
    shared_ptr_0bb93f61 _cppLogger;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *spooledPayloads; // @synthesize spooledPayloads=_spooledPayloads;
@property(nonatomic) shared_ptr_0bb93f61 cppLogger; // @synthesize cppLogger=_cppLogger;
- (void)destroy;
- (void)log:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

