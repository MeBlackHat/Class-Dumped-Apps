//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>

@interface IGDirectMessageMarkType : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    unsigned long long _visualItemSeen_targetItemType;
}

+ (id)visualItemSeenWithTargetItemType:(unsigned long long)arg1;
+ (id)visualItemScreenshotted;
+ (id)visualItemReplayed;
+ (id)threadItemSeen;
- (void)matchThreadItemSeen:(CDUnknownBlockType)arg1 visualItemSeen:(CDUnknownBlockType)arg2 visualItemReplayed:(CDUnknownBlockType)arg3 visualItemScreenshotted:(CDUnknownBlockType)arg4;
- (_Bool)matchBooleanThreadItemSeen:(CDUnknownBlockType)arg1 visualItemSeen:(CDUnknownBlockType)arg2 visualItemReplayed:(CDUnknownBlockType)arg3 visualItemScreenshotted:(CDUnknownBlockType)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

