//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GAZDispatch : NSObject
{
}

+ (id)sharedDispatch;
- (CDUnknownBlockType)blockForOperationQueue:(id)arg1 action:(CDUnknownBlockType)arg2;
- (void)dispatchAction:(CDUnknownBlockType)arg1;
- (void)dispatchWithTimeInterval:(double)arg1 operationQueue:(id)arg2 action:(CDUnknownBlockType)arg3;
- (void)dispatchWithTimeInterval:(double)arg1 action:(CDUnknownBlockType)arg2;

@end

