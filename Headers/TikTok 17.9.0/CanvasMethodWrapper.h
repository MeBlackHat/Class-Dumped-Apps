//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSInvocation, NSString;

@interface CanvasMethodWrapper : NSObject
{
    NSString *_method;
    Class _moduleClass;
    NSInvocation *_invocation;
    unsigned long long _argumentsNumber;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long argumentsNumber; // @synthesize argumentsNumber=_argumentsNumber;
@property(retain, nonatomic) NSInvocation *invocation; // @synthesize invocation=_invocation;
@property(nonatomic) Class moduleClass; // @synthesize moduleClass=_moduleClass;
@property(nonatomic) NSString *method; // @synthesize method=_method;
- (void)invoke:(id)arg1 arguments:(id)arg2;
- (void)buildInvocation;
- (id)initWithMethod:(id)arg1 moduleClass:(Class)arg2;

@end

