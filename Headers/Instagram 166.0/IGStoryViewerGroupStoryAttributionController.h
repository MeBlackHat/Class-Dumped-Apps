//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGStoryViewerHeaderAttributionType-Protocol.h>

@class IGDirectShareRecipientReelOwner, IGMedia, IGUserSession, NSString;
@protocol IGPartialModalSheetListener;

@interface IGStoryViewerGroupStoryAttributionController : NSObject <IGStoryViewerHeaderAttributionType>
{
    IGDirectShareRecipientReelOwner *_groupOwner;
    IGMedia *_media;
    _Bool _isDisabledAttributionType;
    IGUserSession *_userSession;
    NSString *_sourceModule;
    id <IGPartialModalSheetListener> _partialModalSheetListener;
}

- (void).cxx_destruct;
- (id)_getAttributedString;
- (id)analyticsStrings;
- (void)didTakeActionWithTitle:(id)arg1 attributionDelegate:(id)arg2 navigationController:(id)arg3;
- (id)newAttributionView;
- (_Bool)shouldBeActionableAttributionInAttributionRevamp;
- (_Bool)shouldBeIncludedInMultiAttributionBottomSheet;
- (_Bool)alwaysShowActionSheetOnTap;
- (_Bool)userInteractionEnabled;
- (id)actionSheetButtonTitles;
- (id)initWithGroupOwner:(id)arg1 media:(id)arg2 isDisabledAttributionType:(_Bool)arg3 userSession:(id)arg4 partialModalSheetListener:(id)arg5 sourceModule:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

