//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GRPCProtoResponseHandler-Protocol.h"

@class GPBMessage, NSString;
@protocol GCKGRPCProtoResponseHandlerDelegate, OS_dispatch_queue;

@interface GCKGRPCProtoResponseHandler : NSObject <GRPCProtoResponseHandler>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    GPBMessage *_requestMessage;
    Class _responseClass;
    id <GCKGRPCProtoResponseHandlerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GCKGRPCProtoResponseHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) Class responseClass; // @synthesize responseClass=_responseClass;
@property(readonly, nonatomic) GPBMessage *requestMessage; // @synthesize requestMessage=_requestMessage;
@property(readonly) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)didCloseWithTrailingMetadata:(id)arg1 error:(id)arg2;
- (void)didReceiveProtoMessage:(id)arg1;
- (id)initWithRequest:(id)arg1 responseClass:(Class)arg2 queue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

