//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBGeneratedIntentTarget.h>

@class IGUserSession, NSArray;
@protocol IGStoryPostCaptureEditingViewControllerDelegate, UIViewControllerTransitioningDelegate;

@interface IGStoryPostCaptureEditingIntentTarget : FBGeneratedIntentTarget
{
    NSArray *_compositions;
    IGUserSession *_userSession;
    id <IGStoryPostCaptureEditingViewControllerDelegate> _postCaptureEditingViewControllerDelegate;
    id <UIViewControllerTransitioningDelegate> _transitioningDelegate;
    NSArray *_disposableObjects;
    unsigned long long _entryPoint;
}

@property(readonly, nonatomic) unsigned long long entryPoint; // @synthesize entryPoint=_entryPoint;
@property(readonly, nonatomic) NSArray *disposableObjects; // @synthesize disposableObjects=_disposableObjects;
@property(readonly, nonatomic) id <UIViewControllerTransitioningDelegate> transitioningDelegate; // @synthesize transitioningDelegate=_transitioningDelegate;
@property(readonly, nonatomic) id <IGStoryPostCaptureEditingViewControllerDelegate> postCaptureEditingViewControllerDelegate; // @synthesize postCaptureEditingViewControllerDelegate=_postCaptureEditingViewControllerDelegate;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) NSArray *compositions; // @synthesize compositions=_compositions;
- (void).cxx_destruct;
- (id)initWithCompositions:(id)arg1 userSession:(id)arg2 postCaptureEditingViewControllerDelegate:(id)arg3 transitioningDelegate:(id)arg4 disposableObjects:(id)arg5 entryPoint:(unsigned long long)arg6;

@end

