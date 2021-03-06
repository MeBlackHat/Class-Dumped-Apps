//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GRPCCallOptions, GRPCUnaryProtoCall, GWCAcceptManagerInvitationRequest, GWCCreateAccessPointRequest, GWCCreateDraftAccessPointRequest, GWCCreateManagerRequest, GWCCreateRegistrationTicketRequest, GWCDeleteAccessPointRequest, GWCDeleteGroupRequest, GWCDeleteManagerRequest, GWCGetGroupRequest, GWCJoinGroupMeshRequest, GWCListGroupsRequest, GWCSetHybridDeviceEnabledRequest, GWCUpdateStructureIdRequest;
@protocol GRPCProtoResponseHandler;

@protocol GWCGroupsService2 <NSObject>
- (GRPCUnaryProtoCall *)acceptManagerInvitationWithMessage:(GWCAcceptManagerInvitationRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)deleteManagerWithMessage:(GWCDeleteManagerRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)createManagerWithMessage:(GWCCreateManagerRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)deleteGroupWithMessage:(GWCDeleteGroupRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)listGroupsWithMessage:(GWCListGroupsRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)getGroupWithMessage:(GWCGetGroupRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)updateStructureIdWithMessage:(GWCUpdateStructureIdRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)setHybridDeviceEnabledWithMessage:(GWCSetHybridDeviceEnabledRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)deleteAccessPointWithMessage:(GWCDeleteAccessPointRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)joinGroupMeshWithMessage:(GWCJoinGroupMeshRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)createDraftAccessPointWithMessage:(GWCCreateDraftAccessPointRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)createAccessPointWithMessage:(GWCCreateAccessPointRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)createRegistrationTicketWithMessage:(GWCCreateRegistrationTicketRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
@end

