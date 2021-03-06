//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLoginFormViewLoggerProtocol-Protocol.h"

@class NSString, SPTLoginErrorLogger;
@protocol SPTLoginLogger;

@interface SPTLoginSplitEmailSignupViewLogger : NSObject <SPTLoginFormViewLoggerProtocol>
{
    id <SPTLoginLogger> _logger;
    NSString *_screenIdentifier;
    NSString *_fieldIdentifier;
    NSString *_buttonIdentifier;
    SPTLoginErrorLogger *_errorLogger;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTLoginErrorLogger *errorLogger; // @synthesize errorLogger=_errorLogger;
@property(copy, nonatomic) NSString *buttonIdentifier; // @synthesize buttonIdentifier=_buttonIdentifier;
@property(copy, nonatomic) NSString *fieldIdentifier; // @synthesize fieldIdentifier=_fieldIdentifier;
@property(copy, nonatomic) NSString *screenIdentifier; // @synthesize screenIdentifier=_screenIdentifier;
@property(retain, nonatomic) id <SPTLoginLogger> logger; // @synthesize logger=_logger;
- (void)logUserDidTapSubmitButton;
- (void)logUserDidSeeView;
- (void)logUserDidInteractWithField:(id)arg1;
- (void)logErrorWithCode:(unsigned long long)arg1 fieldIdentifier:(id)arg2;
- (id)initWithLogger:(id)arg1 screenIdentifier:(id)arg2 fieldIdentifier:(id)arg3;
- (id)initWithLogger:(id)arg1 screenIdentifier:(id)arg2 fieldIdentifier:(id)arg3 buttonIdentifer:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

