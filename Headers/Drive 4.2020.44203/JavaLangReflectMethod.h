//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaLangReflectExecutable.h"

@interface JavaLangReflectMethod : JavaLangReflectExecutable
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)methodWithDeclaringClass:(id)arg1 metadata:(const struct J2ObjcMethodInfo *)arg2;
- (unsigned long long)hash;
- (_Bool)isBridge;
- (_Bool)isDefault;
- (id)getDefaultValue;
- (id)description;
- (id)getSignature;
- (void)invoke:(id)arg1 object:(id)arg2;
- (id)invocationForTarget:(id)arg1;
- (void)jniInvokeWithId:(id)arg1 args:(const CDUnion_f43d4af3 *)arg2 result:(CDUnion_f43d4af3 *)arg3;
- (id)invokeWithId:(id)arg1 withNSObjectArray:(id)arg2;
- (id)getGenericReturnType;
- (id)getReturnType;
- (int)getModifiers;
- (id)getName;

@end

