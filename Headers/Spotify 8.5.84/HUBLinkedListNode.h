//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBLinkedListNodePointer-Protocol.h"

@class NSString;

@interface HUBLinkedListNode : NSObject <HUBLinkedListNodePointer>
{
    id _value;
    HUBLinkedListNode *_next;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HUBLinkedListNode *next; // @synthesize next=_next;
@property(retain, nonatomic) id value; // @synthesize value=_value;
- (id)initWithValue:(id)arg1;
@property(retain, nonatomic) HUBLinkedListNode *node;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

