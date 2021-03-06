//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle;

@interface IGLocaleHelper : NSObject
{
    NSBundle *_bundle;
}

+ (id)displayTextOfCurrentLocale;
+ (id)currentNSLocale;
+ (id)currentAppLocale;
+ (void)changeAppLocale:(id)arg1;
+ (id)iosBundleIdentifierWithOverwrite:(id)arg1;
+ (_Bool)localeIsCJK;
+ (_Bool)localeIsUS;
+ (_Bool)localeIsValidForNetzDG;
+ (_Bool)localeIsGermany;
+ (_Bool)localeIsThai;
+ (_Bool)localeIsRussian;
+ (_Bool)localeHasSpecialCharacters;
+ (_Bool)keyboardLocaleIsFarEast;
+ (_Bool)localeIsEnglish;
+ (id)localeForCurrentKeyboard;
+ (id)_fbLocaleForLanguage:(id)arg1;
+ (id)fbLocaleForCurrentLanguage;
+ (id)localeForCurrentLanguage;
+ (_Bool)_isLocale:(id)arg1 inLocaleArray:(id)arg2;
+ (void)_onInputModeChanged:(id)arg1;
+ (void)_onLocaleChanged:(id)arg1;
+ (void)initialize;
+ (id)sharedLocaleHelper;
- (void).cxx_destruct;
- (void)_setupIGPreferredLanguage;
- (id)currentBundle;
- (id)init;

@end

