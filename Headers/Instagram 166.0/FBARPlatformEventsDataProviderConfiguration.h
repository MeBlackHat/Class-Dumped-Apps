//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBARServiceConfiguration-Protocol.h>
#import <FBSharedFramework/FBARServiceConfigurationCxx-Protocol.h>

@class FBARPlatformEventsInput, NSString;
@protocol FBARPlatformEventsServiceDelegate, FBARPlatformEventsServiceEffectDescriptor, OS_dispatch_queue;

@interface FBARPlatformEventsDataProviderConfiguration : NSObject <FBARServiceConfiguration, FBARServiceConfigurationCxx>
{
    FBARPlatformEventsInput *_eventsInput;
    id <FBARPlatformEventsServiceDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id <FBARPlatformEventsServiceEffectDescriptor> _effectDescriptor;
}

+ (_Bool)supportsSecureCoding;
+ (id)newWithDelegate:(id)arg1 delegateQueue:(id)arg2 effectDescriptor:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <FBARPlatformEventsServiceEffectDescriptor> effectDescriptor; // @synthesize effectDescriptor=_effectDescriptor;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) __weak id <FBARPlatformEventsServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) FBARPlatformEventsInput *eventsInput; // @synthesize eventsInput=_eventsInput;
@property(readonly, nonatomic) shared_ptr_e7d8ca2a engineServiceConfiguration;
@property(readonly, nonatomic) struct ServiceType serviceType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 effectDescriptor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

