//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFastEnumeration-Protocol.h"

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface A9VSFezMutableSet : NSObject <NSFastEnumeration>
{
    NSMutableSet *_objects;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue; // @synthesize concurrentQueue=_concurrentQueue;
@property(retain, nonatomic) NSMutableSet *objects; // @synthesize objects=_objects;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (unsigned long long)count;
- (id)allObjects;
- (_Bool)containsObject:(id)arg1;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (id)init;

@end

