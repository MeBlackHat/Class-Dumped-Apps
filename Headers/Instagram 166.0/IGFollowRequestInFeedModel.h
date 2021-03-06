//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/IGNetegoItem-Protocol.h>

@class IGAdPlatformGapRules, NSArray, NSString;

@interface IGFollowRequestInFeedModel : NSObject <IGListDiffable, IGNetegoItem>
{
    IGAdPlatformGapRules *_gapRules;
    NSString *_pk;
    NSString *_trackingToken;
    NSArray *_items;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, copy, nonatomic) NSString *trackingToken; // @synthesize trackingToken=_trackingToken;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
@property(readonly, nonatomic) IGAdPlatformGapRules *gapRules;
- (unsigned long long)unitItemType;
- (id)unitItemId;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)type;
- (id)initWithPk:(id)arg1 items:(id)arg2 trackingToken:(id)arg3 gapRules:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

