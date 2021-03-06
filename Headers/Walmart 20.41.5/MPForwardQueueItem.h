//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPBaseEvent, MPCommerceEvent, MPForwardQueueParameters;

@interface MPForwardQueueItem : NSObject
{
    unsigned long long _queueItemType;
    MPCommerceEvent *_commerceEvent;
    MPBaseEvent *_event;
    unsigned long long _messageType;
    SEL _selector;
    MPForwardQueueParameters *_queueParameters;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MPForwardQueueParameters *queueParameters; // @synthesize queueParameters=_queueParameters;
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, nonatomic) unsigned long long messageType; // @synthesize messageType=_messageType;
@property(readonly, nonatomic) MPBaseEvent *event; // @synthesize event=_event;
@property(readonly, nonatomic) MPCommerceEvent *commerceEvent; // @synthesize commerceEvent=_commerceEvent;
@property(readonly, nonatomic) unsigned long long queueItemType; // @synthesize queueItemType=_queueItemType;
- (id)initWithSelector:(SEL)arg1 parameters:(id)arg2 messageType:(unsigned long long)arg3;
- (id)initWithSelector:(SEL)arg1 event:(id)arg2 messageType:(unsigned long long)arg3;
- (id)initWithCommerceEvent:(id)arg1;

@end

