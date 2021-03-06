//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTCommentDetailSectionHeaderControllerDelegate-Protocol.h>
#import <Module_Framework/YTCommentDetailSectionViewModelDelegate-Protocol.h>
#import <Module_Framework/YTCommentSectionFeedControllerDelegate-Protocol.h>
#import <Module_Framework/YTSectionControllerBuilderProtocol-Protocol.h>

@class GIMMe, NSString, YTICommentThreadRenderer, YTServiceSectionController;

@interface YTCommentDetailSectionControllerBuilder : NSObject <YTCommentDetailSectionHeaderControllerDelegate, YTCommentDetailSectionViewModelDelegate, YTCommentSectionFeedControllerDelegate, YTSectionControllerBuilderProtocol>
{
    YTICommentThreadRenderer *_commentThreadRenderer;
    GIMMe *_gimme;
    YTServiceSectionController *_sectionController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak YTServiceSectionController *sectionController; // @synthesize sectionController=_sectionController;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (id)topLevelEntries;
- (id)buildFeedControllerWithDataSource:(id)arg1;
- (void)setupInnerTubeFeedControllerDataSource:(id)arg1;
- (id)buildDataSourceForModel:(id)arg1 service:(id)arg2;
- (id)headerController;
- (void)removeViewerOwnedComment;
- (void)commentDetailSectionViewModelDidHandlePollStatusUpdateEvent:(id)arg1;
- (_Bool)commentDetailSectionViewModelShouldStageNewEntry:(id)arg1;
- (void)commentSectionFeedControllerDidHandleEntries:(id)arg1;
- (void)updateSectionController:(id)arg1 withModel:(id)arg2;
- (void)loadSectionController:(id)arg1 withModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

