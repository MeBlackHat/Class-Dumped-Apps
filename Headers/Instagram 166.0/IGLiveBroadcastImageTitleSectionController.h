//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

@class IGLiveBroadcastImageTitleModel, IGTableLayoutSpec;
@protocol IGLiveBroadcastImageTitleSectionControllerDelegate;

@interface IGLiveBroadcastImageTitleSectionController : IGListSectionController
{
    IGLiveBroadcastImageTitleModel *_model;
    IGTableLayoutSpec *_tableLayoutSpec;
    id <IGLiveBroadcastImageTitleSectionControllerDelegate> _modelDelegate;
}

- (void).cxx_destruct;
- (void)_updateUserSource;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)_configureCell:(id)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)initWithTableLayoutSpec:(id)arg1 modelDelegate:(id)arg2;

@end

