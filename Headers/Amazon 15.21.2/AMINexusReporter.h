//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMIEventReporter-Protocol.h"

@class NSString;
@protocol NexusIOSClientService;

@interface AMINexusReporter : NSObject <AMIEventReporter>
{
    NSString *_producerId;
    NSString *_schemaId;
    id <NexusIOSClientService> _nexusClient;
}

@property(retain, nonatomic) id <NexusIOSClientService> nexusClient; // @synthesize nexusClient=_nexusClient;
@property(retain, nonatomic) NSString *schemaId; // @synthesize schemaId=_schemaId;
@property(retain, nonatomic) NSString *producerId; // @synthesize producerId=_producerId;
- (void).cxx_destruct;
- (void)report:(id)arg1;
- (id)initWithProducerId:(id)arg1 schemaId:(id)arg2 nexusClient:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

