//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ObserverDispatcher : NSObject
{
    CDUnknownBlockType _observer;
    CDUnknownBlockType _dispatcher;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType dispatcher; // @synthesize dispatcher=_dispatcher;
@property(readonly, nonatomic) CDUnknownBlockType observer; // @synthesize observer=_observer;
- (id)initWithObserver:(CDUnknownBlockType)arg1 dispatcher:(CDUnknownBlockType)arg2;

@end

