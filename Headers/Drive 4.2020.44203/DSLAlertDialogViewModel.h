//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DSLAlertDialogViewModel : NSObject
{
    _Bool _useDefaultDismissButton_23;
    _Bool _dismissOnBackgroundTap_22;
    NSString *_title_5;
    NSString *_message_7;
    NSString *_dismissButtonText_17;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool dismissOnBackgroundTap; // @synthesize dismissOnBackgroundTap=_dismissOnBackgroundTap_22;
@property(readonly, copy, nonatomic) NSString *dismissButtonText; // @synthesize dismissButtonText=_dismissButtonText_17;
@property(readonly, nonatomic) _Bool useDefaultDismissButton; // @synthesize useDefaultDismissButton=_useDefaultDismissButton_23;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message_7;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title_5;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithTitle:(id)arg1 message:(id)arg2 useDefaultDismissButton:(_Bool)arg3 dismissButtonText:(id)arg4 dismissOnBackgroundTap:(_Bool)arg5;

@end

