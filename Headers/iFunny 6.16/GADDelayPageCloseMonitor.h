//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADAdContent, GADObserverCollection;

@interface GADDelayPageCloseMonitor : NSObject
{
    GADObserverCollection *_observers;
    GADAdContent *_ad;
    GADAdContent *_strongAd;
    long long _timeoutIdentifier;
}

- (void).cxx_destruct;
- (void)handleDelayPageCloseNotification:(id)arg1;
- (void)handleDelayPageCloseTimeout:(long long)arg1;
- (id)initWithAd:(id)arg1 messageSource:(id)arg2;

@end

