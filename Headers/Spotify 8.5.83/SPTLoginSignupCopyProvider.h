//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SPTLoginTestManager;

@interface SPTLoginSignupCopyProvider : NSObject
{
    SPTLoginTestManager *_testManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTLoginTestManager *testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) NSString *signupIntentScreenTitle;
@property(readonly, nonatomic) NSString *signupButtonTitle;
- (id)initWithTestManager:(id)arg1;

@end

