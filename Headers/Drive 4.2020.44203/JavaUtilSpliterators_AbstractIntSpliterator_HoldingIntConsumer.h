//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaUtilFunctionIntConsumer-Protocol.h"

@class NSString;

@interface JavaUtilSpliterators_AbstractIntSpliterator_HoldingIntConsumer : NSObject <JavaUtilFunctionIntConsumer>
{
    int value_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (id)andThenWithJavaUtilFunctionIntConsumer:(id)arg1;
- (void)acceptWithInt:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

