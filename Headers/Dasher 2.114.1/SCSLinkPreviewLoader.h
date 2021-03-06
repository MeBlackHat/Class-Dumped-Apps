//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ServiceCore/SCSLinkPreviewDelegate-Protocol.h>

@class NSString, SCServiceCloud;

@interface SCSLinkPreviewLoader : NSObject <SCSLinkPreviewDelegate>
{
    SCServiceCloud *_serviceCloud;
    CDUnknownBlockType _linkPreviewCompletionBlock;
    CDUnknownBlockType _linkPreviewControllerCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType linkPreviewControllerCompletionBlock; // @synthesize linkPreviewControllerCompletionBlock=_linkPreviewControllerCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType linkPreviewCompletionBlock; // @synthesize linkPreviewCompletionBlock=_linkPreviewCompletionBlock;
@property(retain, nonatomic) SCServiceCloud *serviceCloud; // @synthesize serviceCloud=_serviceCloud;
- (void).cxx_destruct;
- (void)articlePreviewEvent:(id)arg1 didLoadArticleViewController:(id)arg2 error:(id)arg3;
- (void)articlePreviewEvent:(id)arg1 didLoadPreviewData:(id)arg2 error:(id)arg3;
- (_Bool)isArticleURL:(id)arg1;
- (_Bool)isKnowledgeLinked;
- (_Bool)canLoadArticlePreviewForURL:(id)arg1;
- (void)viewControllerForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getLinkPreviewForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

