//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GPBMethodOptions, NSString;

@interface GPBMethodDescriptorProto : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool clientStreaming; // @dynamic clientStreaming;
@property(nonatomic) _Bool hasClientStreaming; // @dynamic hasClientStreaming;
@property(nonatomic) _Bool hasInputType; // @dynamic hasInputType;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasOptions; // @dynamic hasOptions;
@property(nonatomic) _Bool hasOutputType; // @dynamic hasOutputType;
@property(nonatomic) _Bool hasServerStreaming; // @dynamic hasServerStreaming;
@property(copy, nonatomic) NSString *inputType; // @dynamic inputType;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) GPBMethodOptions *options; // @dynamic options;
@property(copy, nonatomic) NSString *outputType; // @dynamic outputType;
@property(nonatomic) _Bool serverStreaming; // @dynamic serverStreaming;

@end

