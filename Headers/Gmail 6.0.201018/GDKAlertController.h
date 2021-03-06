//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKAlertControlling-Protocol.h"

@class GDKTheme, NSString;

@interface GDKAlertController : NSObject <GDKAlertControlling>
{
    GDKTheme *_theme;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GDKTheme *theme; // @synthesize theme=_theme;
- (id)alertControllerForAttributedMessage:(id)arg1;
- (void)presentAttributedAlertMessage:(id)arg1 fromPresenter:(id)arg2;
- (void)presentAlertMessage:(id)arg1 fromPresenter:(id)arg2;
- (id)initWithTheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

