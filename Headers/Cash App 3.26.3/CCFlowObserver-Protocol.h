//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CCFlow, SQPBFranklinCommonResponseContext, SQPBFranklinCommonScenariosBlockerDescriptor;

@protocol CCFlowObserver

@optional
- (void)flow:(CCFlow *)arg1 updatedFromResponseContext:(SQPBFranklinCommonResponseContext *)arg2;
- (void)flow:(CCFlow *)arg1 currentStep:(long long)arg2 changedFromInputState:(long long)arg3 toInputState:(long long)arg4;
- (void)flow:(CCFlow *)arg1 didMoveFromStep:(long long)arg2 toStep:(long long)arg3 nextBlockerDescriptor:(SQPBFranklinCommonScenariosBlockerDescriptor *)arg4;
@end

