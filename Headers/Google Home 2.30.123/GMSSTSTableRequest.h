//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface GMSSTSTableRequest : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _handler;
}

- (void).cxx_destruct;
- (void)complete:(id)arg1;
- (id)initWithQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end

