//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufExtensionRegistry.h"

@protocol JavaUtilCollection;

@interface ComGoogleProtobufCompositeExtensionRegistry : ComGoogleProtobufExtensionRegistry
{
    id <JavaUtilCollection> registries_;
}

- (void)dealloc;
- (id)initPackagePrivateWithJavaUtilCollection:(id)arg1;
- (id)findLiteExtensionByNumberWithComGoogleProtobufMessageLite:(id)arg1 withInt:(int)arg2;
- (void)addWithComGoogleProtobufDescriptors_FieldDescriptor:(id)arg1 withComGoogleProtobufMessage:(id)arg2;
- (void)addWithComGoogleProtobufDescriptors_FieldDescriptor:(id)arg1;
- (void)addWithComGoogleProtobufExtension:(id)arg1;
- (id)findExtensionByNumberWithComGoogleProtobufDescriptors_Descriptor:(id)arg1 withInt:(int)arg2;
- (id)getUnmodifiable;

@end

