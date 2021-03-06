//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FNUtils : NSObject
{
}

+ (id)shareTypeForActivityType:(id)arg1;
+ (id)shareSubject;
+ (id)shareTitleWithContent:(id)arg1;
+ (struct CGSize)screenSize;
+ (id)extractYoutubeID:(id)arg1;
+ (int)videoDurationFromString:(id)arg1;
+ (id)urlFromString:(id)arg1;
+ (id)createTextInputPasswordRule;
+ (long long)validatePassword:(id)arg1;
+ (_Bool)isValidNick:(id)arg1;
+ (_Bool)isValidNickSubstring:(id)arg1;
+ (_Bool)isValidCoubURL:(id)arg1;
+ (_Bool)isValidURL:(id)arg1;
+ (_Bool)isValidEmail:(id)arg1;
+ (id)createErrorWithText:(id)arg1;
+ (id)createError:(id)arg1;
+ (id)enabledForColor:(id)arg1;
+ (_Bool)isDefaultPlaceholderAvatarImageWithUser:(id)arg1 smallSize:(_Bool)arg2;
+ (id)placeholderAvatarImageWithUser:(id)arg1 smallSize:(_Bool)arg2;
+ (id)cellSeparatorWithFrame:(struct CGRect)arg1 color:(id)arg2;
+ (id)errorDescriptionWithError:(id)arg1;
+ (id)errorTitleWithError:(id)arg1;
+ (int)errorCodeWithError:(id)arg1;
+ (struct CGRect)roundedFrame:(struct CGRect)arg1;
+ (id)closeButtonWithTarget:(id)arg1 selector:(SEL)arg2;
+ (id)backButtonWithTarget:(id)arg1 selector:(SEL)arg2;
+ (id)shuffleButtonWithTarget:(id)arg1 selector:(SEL)arg2;
+ (id)menuButtonWithTarget:(id)arg1 selector:(SEL)arg2 withIconImage:(id)arg3;
+ (void)enableCancelButton:(id)arg1;
+ (id)imageFromView:(id)arg1;
+ (id)imageFromColor:(id)arg1;
+ (id)colorByIndex:(int)arg1;
+ (id)randomErrorString;
+ (void)setBackgroundColor:(id)arg1 toActivityViewController:(id)arg2;
+ (void)showLoginAlertWithCompletion:(CDUnknownBlockType)arg1;
+ (void)showIFunnyProAnnouncementIfNeededForElementIndex:(unsigned long long)arg1;
+ (void)showIFunnyProAnnouncementWithSuccess:(CDUnknownBlockType)arg1;
+ (void)showBanAlert:(id)arg1 strikesCount:(long long)arg2 dismissCompletion:(CDUnknownBlockType)arg3;
+ (id)attributedStringFromString:(id)arg1 fontSize:(float)arg2;
+ (unsigned long long)getMemoryUsage;
+ (float)getCPUUsage;
+ (id)createUUID;

@end

