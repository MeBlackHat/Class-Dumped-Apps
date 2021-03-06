//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBAsyncOperation.h"

@class NSDictionary, NSSet, UIApplication, UIWindow;

@interface DBLaunchPrepare : DBAsyncOperation
{
    CDUnknownBlockType _addLogParamsBlock;
    CDUnknownBlockType _internalAppDelegateUpdateBlock;
    NSSet *_prerequisiteChecks;
    UIApplication *_application;
    NSDictionary *_options;
    UIWindow *_window;
}

@property(readonly, nonatomic) __weak UIWindow *window; // @synthesize window=_window;
@property(readonly, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(readonly, nonatomic) __weak UIApplication *application; // @synthesize application=_application;
@property(readonly, nonatomic) NSSet *prerequisiteChecks; // @synthesize prerequisiteChecks=_prerequisiteChecks;
- (void).cxx_destruct;
- (void)start;
- (void)operationDidCompleteWithAnalyticsDict:(id)arg1;
- (void)updateWIthInternalAppDelegate:(id)arg1;
- (id)initWithApplication:(id)arg1 options:(id)arg2 window:(id)arg3 addLogParamsBlock:(CDUnknownBlockType)arg4 internalAppDelegateUpdateBlock:(CDUnknownBlockType)arg5;

@end

