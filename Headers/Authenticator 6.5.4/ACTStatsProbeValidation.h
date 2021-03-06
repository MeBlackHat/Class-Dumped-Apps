//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AriaObjC/ACTIEventBaseDelegate-Protocol.h>

@class NSString;
@protocol ACTIEventBaseDelegate, ACTIHttpDelegate;

@interface ACTStatsProbeValidation : NSObject <ACTIEventBaseDelegate>
{
    id <ACTIEventBaseDelegate> _delegate;
    id <ACTIEventBaseDelegate> _statsProbeDelegate;
    id <ACTIHttpDelegate> _probeDelegate;
}

@property(retain, nonatomic) id <ACTIHttpDelegate> probeDelegate; // @synthesize probeDelegate=_probeDelegate;
@property(retain, nonatomic) id <ACTIEventBaseDelegate> statsProbeDelegate; // @synthesize statsProbeDelegate=_statsProbeDelegate;
@property(retain, nonatomic) id <ACTIEventBaseDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)duplicateAndSendEvent:(id)arg1 fields:(id)arg2;
- (void)duplicateAndSendEvents:(id)arg1;
- (void)intakeMultiple:(id)arg1;
- (void)intake:(id)arg1;
- (id)validateEvent:(id)arg1;
- (id)componentName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

