//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAAsynchronousBackupOperation.h"

@class NSObject;
@protocol OS_dispatch_queue;

@interface WATriggeredOperation : WAAsynchronousBackupOperation
{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _didFinish;
    _Bool _didStart;
    _Bool _shouldFinish;
    _Bool _shouldFinishOnCancel;
    // Error parsing type: Ai, name: _succeeded
}

- (void).cxx_destruct;
- (void)cancel;
- (void)setShouldFinishOnCancel:(_Bool)arg1;
- (void)finishIfPossible;
- (void)finish;
- (void)fail;
- (void)performTaskWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)succeeded;
- (id)initWithDependenciesRequired:(_Bool)arg1;

@end

