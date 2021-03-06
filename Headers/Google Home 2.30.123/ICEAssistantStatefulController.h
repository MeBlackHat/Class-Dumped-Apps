//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ICEAssistantController.h"

@class ICEAssistantComponent, ICEAssistantComponentState;

@interface ICEAssistantStatefulController : ICEAssistantController
{
    ICEAssistantComponentState *_state;
}

+ (id)defaultStateForModel:(id)arg1;
- (void).cxx_destruct;
@property(readonly) ICEAssistantComponentState *state; // @synthesize state=_state;
- (void)saveState;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) ICEAssistantComponent *model; // @dynamic model;

@end

