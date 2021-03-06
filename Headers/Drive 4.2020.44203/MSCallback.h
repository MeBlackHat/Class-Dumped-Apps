//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GPCAsyncRequest-Protocol.h"
#import "MSInvocable-Protocol.h"

@class NSString;
@protocol NSObject, OS_dispatch_queue;

@interface MSCallback : NSObject <MSInvocable, GPCAsyncRequest>
{
    id <NSObject> owner_;
    CDUnknownBlockType block_;
    NSObject<OS_dispatch_queue> *queue_;
}

+ (id)callbackWithOwner:(id)arg1 block:(CDUnknownBlockType)arg2 queue:(id)arg3;
+ (id)callbackWithOwner:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)cancel;
- (void)invokeWithMessage:(id)arg1;
- (id)owner;
- (id)initWithOwner:(id)arg1 block:(CDUnknownBlockType)arg2 queue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

