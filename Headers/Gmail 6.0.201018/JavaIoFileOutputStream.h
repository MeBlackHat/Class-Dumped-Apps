//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaIoOutputStream.h"

@class DalvikSystemCloseGuard, JavaIoFileDescriptor, JavaNioChannelsFileChannel, NSString;

@interface JavaIoFileOutputStream : JavaIoOutputStream
{
    JavaIoFileDescriptor *fd_;
    _Bool append_;
    JavaNioChannelsFileChannel *channel_;
    NSString *path_;
    id closeLock_;
    // Error parsing type: AB, name: closed_
    DalvikSystemCloseGuard *guard_;
    _Bool isFdOwner_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)java_finalize;
- (id)getChannel;
- (id)getFD;
- (void)close;
- (void)writeWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)writeWithByteArray:(id)arg1;
- (void)writeWithInt:(int)arg1;
- (id)initWithJavaIoFileDescriptor:(id)arg1 withBoolean:(_Bool)arg2;
- (id)initWithJavaIoFileDescriptor:(id)arg1;
- (id)initWithJavaIoFile:(id)arg1 withBoolean:(_Bool)arg2;
- (id)initWithJavaIoFile:(id)arg1;
- (id)initWithNSString:(id)arg1 withBoolean:(_Bool)arg2;
- (id)initWithNSString:(id)arg1;

@end

