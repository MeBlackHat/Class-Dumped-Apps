//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BDLynxBridgeSendMessage : NSObject
{
    NSString *_containerID;
    id _data;
    long long _code;
    NSString *_protocolVersion;
}

+ (id)messageWithContainerID:(id)arg1;
@property(readonly, copy, nonatomic) NSString *protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(nonatomic) long long code; // @synthesize code=_code;
@property(copy, nonatomic) id data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *containerID; // @synthesize containerID=_containerID;
- (void).cxx_destruct;
- (id)encodedMessage;
- (id)init;

@end

