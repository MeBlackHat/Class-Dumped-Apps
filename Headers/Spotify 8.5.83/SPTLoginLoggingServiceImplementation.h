//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLoginLoggingService-Protocol.h"

@class NSString, SPTAllocationContext, SPTLoginLoggerRequestIDProvider, SPTLoginUUIDProvider;
@protocol SPTEventSenderService, SPTUserTrackingService;

@interface SPTLoginLoggingServiceImplementation : NSObject <SPTLoginLoggingService>
{
    id <SPTUserTrackingService> _userTrackingService;
    id <SPTEventSenderService> _eventSenderService;
    SPTLoginUUIDProvider *_sessionIDProvider;
    SPTLoginLoggerRequestIDProvider *_requestIDProvider;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) SPTLoginLoggerRequestIDProvider *requestIDProvider; // @synthesize requestIDProvider=_requestIDProvider;
@property(retain, nonatomic) SPTLoginUUIDProvider *sessionIDProvider; // @synthesize sessionIDProvider=_sessionIDProvider;
@property(nonatomic) __weak id <SPTEventSenderService> eventSenderService; // @synthesize eventSenderService=_eventSenderService;
@property(nonatomic) __weak id <SPTUserTrackingService> userTrackingService; // @synthesize userTrackingService=_userTrackingService;
- (void)useRequestIDFromSICInLogging:(id)arg1;
- (id)provideLogger;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

