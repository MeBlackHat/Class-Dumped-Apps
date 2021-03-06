//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, REDTokenField, UIColor;

@protocol REDTokenFieldDataSource <NSObject>

@optional
- (UIColor *)tokenField:(REDTokenField *)arg1 colorSchemeForTokenAtIndex:(unsigned long long)arg2;
- (NSString *)tokenFieldCollapsedText:(REDTokenField *)arg1;
- (unsigned long long)numberOfTokensInTokenField:(REDTokenField *)arg1;
- (NSString *)tokenField:(REDTokenField *)arg1 titleForTokenAtIndex:(unsigned long long)arg2;
@end

