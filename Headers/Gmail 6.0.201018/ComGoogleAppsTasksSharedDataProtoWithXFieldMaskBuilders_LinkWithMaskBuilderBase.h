//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsTasksSharedDataProtoWithXFieldMaskBuilders_LinkWithMaskBuildable-Protocol.h"

@class ComGoogleAppsTasksUtilsXfieldmaskXFieldMask_Builder, NSString, TDLLink_Builder;

@interface ComGoogleAppsTasksSharedDataProtoWithXFieldMaskBuilders_LinkWithMaskBuilderBase : NSObject <ComGoogleAppsTasksSharedDataProtoWithXFieldMaskBuilders_LinkWithMaskBuildable>
{
    TDLLink_Builder *protoBuilder_;
    ComGoogleAppsTasksUtilsXfieldmaskXFieldMask_Builder *fieldMaskBuilder_;
}

- (void)dealloc;
- (void)resetWithTDLLink_Builder:(id)arg1 withComGoogleAppsTasksUtilsXfieldmaskXFieldMask_Builder:(id)arg2;
- (id)buildFieldMaskProto;
- (id)buildFieldMask;
- (id)buildProto;
- (id)setCalendarEventLinkWithMaskWithComGoogleAppsTasksSharedDataProtoWithXFieldMaskBuilders_LinkCalendarEventLinkWithMaskBuildable:(id)arg1;
- (id)setCalendarEventLinkWithMaskWithTDLLink_CalendarEventLink:(id)arg1 withComGoogleAppsTasksUtilsXfieldmaskXFieldMask:(id)arg2;
- (id)clearCalendarEventLink;
- (id)setCalendarEventLinkWithTDLLink_CalendarEventLink:(id)arg1;
- (id)setDocumentLinkWithMaskWithComGoogleAppsTasksSharedDataProtoWithXFieldMaskBuilders_LinkDocumentLinkWithMaskBuildable:(id)arg1;
- (id)setDocumentLinkWithMaskWithTDLLink_DocumentLink:(id)arg1 withComGoogleAppsTasksUtilsXfieldmaskXFieldMask:(id)arg2;
- (id)clearDocumentLink;
- (id)setDocumentLinkWithTDLLink_DocumentLink:(id)arg1;
- (id)setGmailDeepLinkWithMaskWithComGoogleAppsTasksSharedDataProtoWithXFieldMaskBuilders_LinkGmailDeepLinkWithMaskBuildable:(id)arg1;
- (id)setGmailDeepLinkWithMaskWithTDLLink_GmailDeepLink:(id)arg1 withComGoogleAppsTasksUtilsXfieldmaskXFieldMask:(id)arg2;
- (id)clearGmailDeepLink;
- (id)setGmailDeepLinkWithTDLLink_GmailDeepLink:(id)arg1;
- (id)setGenericUrlWithMaskWithComGoogleAppsTasksSharedDataProtoWithXFieldMaskBuilders_LinkGenericUrlWithMaskBuildable:(id)arg1;
- (id)setGenericUrlWithMaskWithTDLLink_GenericUrl:(id)arg1 withComGoogleAppsTasksUtilsXfieldmaskXFieldMask:(id)arg2;
- (id)clearGenericUrl;
- (id)setGenericUrlWithTDLLink_GenericUrl:(id)arg1;
- (id)setLinkTypeWithTDLLink_LinkType:(id)arg1;
- (id)setUrlWithNSString:(id)arg1;
- (id)mergeFromWithComGoogleAppsTasksSharedDataProtoWithXFieldMaskBuilders_LinkWithMaskBuilderBase:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

