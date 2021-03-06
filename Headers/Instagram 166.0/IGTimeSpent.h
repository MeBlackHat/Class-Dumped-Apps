//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGAnalyticsTimeSpentDelegate-Protocol.h>

@class IGAnalyticsTimeSpent, NSString;
@protocol IGAnalyticsLoggerBatched;

@interface IGTimeSpent : NSObject <IGAnalyticsTimeSpentDelegate>
{
    IGAnalyticsTimeSpent *_timeSpent;
    id <IGAnalyticsLoggerBatched> _logger;
}

- (void).cxx_destruct;
- (void)analyticsTimeSpent:(id)arg1 didProduceBitArray:(id)arg2;
- (void)reset;
- (void)save;
- (void)update:(double)arg1;
- (id)initWithQueue:(id)arg1 logger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

