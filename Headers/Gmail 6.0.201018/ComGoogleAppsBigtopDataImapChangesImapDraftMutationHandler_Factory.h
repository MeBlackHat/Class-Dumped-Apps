//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DaggerInternalFactory-Protocol.h"

@class NSString;
@protocol JavaxInjectProvider;

@interface ComGoogleAppsBigtopDataImapChangesImapDraftMutationHandler_Factory : NSObject <DaggerInternalFactory>
{
    id <JavaxInjectProvider> detailedMessageToMimeMessageConverterProvider_;
    id <JavaxInjectProvider> connectionTaskRunnerProvider_;
    id <JavaxInjectProvider> databaseProvider_;
    id <JavaxInjectProvider> draftsCoordinatorProvider_;
    id <JavaxInjectProvider> imapDraftAttachmentHelperProvider_;
    id <JavaxInjectProvider> imapDraftRfc822MessageIdReferencesHelperProvider_;
    id <JavaxInjectProvider> draftsTableControllerProvider_;
    id <JavaxInjectProvider> folderResolverProvider_;
    id <JavaxInjectProvider> messageSummaryTableControllerProvider_;
    id <JavaxInjectProvider> smtpSenderProvider_;
    id <JavaxInjectProvider> imapExecutorProvider_;
    id <JavaxInjectProvider> imapHostConfigProvider_;
    id <JavaxInjectProvider> clockProvider_;
}

- (void)dealloc;
- (id)get;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

