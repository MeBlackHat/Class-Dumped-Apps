//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WC2JPAKEParticipant, WJ2BLEProvisioningCommandExecutor;

@interface WJ2JPAKETrustNegotiator : NSObject
{
    WC2JPAKEParticipant *_participant;
    WJ2BLEProvisioningCommandExecutor *_commandExecutor;
}

@property(readonly) WJ2BLEProvisioningCommandExecutor *commandExecutor; // @synthesize commandExecutor=_commandExecutor;
@property(retain) WC2JPAKEParticipant *participant; // @synthesize participant=_participant;
- (void).cxx_destruct;
- (id)completeExchangeForChannel:(id)arg1 eventManger:(id)arg2 roundThree:(id)arg3;
- (id)doRoundThree:(id)arg1;
- (id)doRoundTwo:(id)arg1;
- (id)doRoundOne;
- (id)startExchangeForSecureChannel:(id)arg1 eventManager:(id)arg2;
- (id)initWithPin:(id)arg1 andCommandExecutor:(id)arg2;

@end

