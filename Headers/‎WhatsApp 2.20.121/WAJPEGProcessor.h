//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WAJPEGProcessor : NSObject
{
}

+ (void)submitAndLogFieldStats:(id)arg1;
+ (id)encodeMicroThumbImage:(id)arg1 quality:(double)arg2 applySmoothing:(_Bool)arg3;
+ (id)encodeImage:(id)arg1 quality:(double)arg2 inoutPJPEGScansObject:(id)arg3 scanScriptType:(unsigned long long)arg4;
+ (id)handleEncodeImage:(id)arg1 quality:(double)arg2 encodingType:(unsigned long long)arg3;
+ (id)encodeImage:(id)arg1 quality:(double)arg2;

@end

