//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1UserViewLayoutDelegate-Protocol.h>

@class NSString;

@interface T1SmallProfileCardUserViewLayoutDelegate : NSObject <T1UserViewLayoutDelegate>
{
}

+ (id)_t1_spacerItemForViewModel:(id)arg1 cachedTextSizing:(id)arg2 cellStyle:(long long)arg3 expanded:(_Bool)arg4 layoutHelper:(id)arg5 spacing:(CDUnknownBlockType)arg6;
+ (void)_t1_getFullNamePropertiesForViewModel:(id)arg1 cachedTextSizing:(id)arg2 cellStyle:(long long)arg3 expanded:(_Bool)arg4 layoutMetrics:(id)arg5 outSize:(struct CGSize *)arg6 outLines:(long long *)arg7 outFont:(id *)arg8 outEndPosition:(struct CGPoint *)arg9;
+ (id)_t1_createLayoutHelperForUserViewModel:(id)arg1 cellStyle:(long long)arg2 actionControlProvider:(id)arg3 expanded:(_Bool)arg4 layoutState:(id)arg5 authorBadgeSize:(struct CGSize)arg6;
+ (double)_t1_heightForLayoutHelper:(id)arg1 layoutMetrics:(id)arg2;
+ (struct CGRect)_t1_contentRectForLayoutWithLayoutMetrics:(id)arg1;
+ (struct CGSize)defaultAvatarSizeForStyle:(long long)arg1 showBio:(_Bool)arg2 layoutMetrics:(id)arg3;
+ (id)infoTextFontForCellStyle:(long long)arg1 expanded:(_Bool)arg2;
+ (id)socialTextFontForCellStyle:(long long)arg1 expanded:(_Bool)arg2;
+ (id)usernameFontForCellStyle:(long long)arg1 expanded:(_Bool)arg2;
+ (id)fullNameFontForCellStyle:(long long)arg1 expanded:(_Bool)arg2;
+ (double)estimatedHeightForUserViewModel:(id)arg1 cellStyle:(long long)arg2 avatarSize:(struct CGSize)arg3 showBio:(_Bool)arg4 bioMaxLines:(unsigned long long)arg5 showUserBlocked:(_Bool)arg6 showDesignatorBadge:(_Bool)arg7 expanded:(_Bool)arg8 layoutMetrics:(id)arg9;
+ (double)heightForUserViewModel:(id)arg1 account:(id)arg2 cellStyle:(long long)arg3 followControlType:(unsigned long long)arg4 followControlVariant:(unsigned long long)arg5 avatarSize:(struct CGSize)arg6 showBio:(_Bool)arg7 bioMaxLines:(unsigned long long)arg8 showUserBlocked:(_Bool)arg9 showDesignatorBadge:(_Bool)arg10 showFollowsYou:(_Bool)arg11 expanded:(_Bool)arg12 layoutMetrics:(id)arg13;
+ (double)heightForUserViewModel:(id)arg1 account:(id)arg2 cellStyle:(long long)arg3 actionControlProvider:(id)arg4 avatarSize:(struct CGSize)arg5 showBio:(_Bool)arg6 bioMaxLines:(unsigned long long)arg7 showUserBlocked:(_Bool)arg8 showDesignatorBadge:(_Bool)arg9 showFollowsYou:(_Bool)arg10 expanded:(_Bool)arg11 layoutMetrics:(id)arg12;
+ (id)sharedLayoutDelegate;
- (void)sizeThatFitsHelper:(id)arg1 layoutSubviewsForView:(id)arg2 atWidth:(double)arg3;
- (id)adjustedLayoutMetricsForLayoutMetrics:(id)arg1;
- (id)layoutStateForUserView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

