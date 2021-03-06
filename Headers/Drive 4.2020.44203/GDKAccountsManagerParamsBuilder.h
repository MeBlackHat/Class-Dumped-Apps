//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDKCredentials, GDKTheme;

@interface GDKAccountsManagerParamsBuilder : NSObject
{
    _Bool _enableOneGoogleAccountSnackbarAfterSignIn;
    GDKCredentials *_credentials;
    GDKTheme *_theme;
}

+ (id)builderFromExistingObject:(id)arg1;
+ (id)builderWithCredentials:(id)arg1 theme:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) GDKTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) _Bool enableOneGoogleAccountSnackbarAfterSignIn; // @synthesize enableOneGoogleAccountSnackbarAfterSignIn=_enableOneGoogleAccountSnackbarAfterSignIn;
@property(retain, nonatomic) GDKCredentials *credentials; // @synthesize credentials=_credentials;
- (id)build;

@end

