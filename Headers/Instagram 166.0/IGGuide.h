//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGValueObject.h>

#import <FBSharedFramework/IGContentGateableMediaItem-Protocol.h>
#import <FBSharedFramework/IGDiscoveryGridItemType-Protocol.h>
#import <FBSharedFramework/IGIntentTransitionFocusItem-Protocol.h>
#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGMedia, NSString;

@interface IGGuide : IGValueObject <IGDiscoveryGridItemType, IGContentGateableMediaItem, IGIntentTransitionFocusItem, IGListDiffable, NSCopying, NSCoding>
{
}

+ (id)valueWithJSONDictionary:(id)arg1 objectStores:(id)arg2 error:(id *)arg3;
+ (void)initialize;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)intentTransitionFocusItem;
- (id)associatedMedia:(_Bool)arg1;
@property(readonly, nonatomic) IGMedia *media;
- (_Bool)isReportedByUser;
- (id)coverMediaPhoto;
@property(nonatomic) _Bool hasSensitiveMediaRevealed;
- (id)sharingFrictionInfo;
- (id)mediaOverlayInfo;
- (id)mediaId;
- (id)photo;
- (id)gating;
- (id)intentTransitionFocusIdentifier;
- (id)newGuideWithNumberOfItems:(long long)arg1;
- (id)newGuideWithCoverMedia:(id)arg1;
- (id)newGuideWithDetailText:(id)arg1;
- (id)newGuideWithTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

