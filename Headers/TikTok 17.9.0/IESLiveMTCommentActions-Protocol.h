//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IESLiveMTCommentActions <NSObject>

@optional
- (void)commentSucceed:(NSString *)arg1;
- (void)keyboardWillHide;
- (void)keyboardWillShow;
- (void)checkIfDisableComment;
- (void)openCommentWithoutCheck;
- (void)checkIfCommentEnable;
- (void)onShowLiveCommentKeyBoard:(_Bool)arg1;
- (void)sendBarrage:(NSString *)arg1;
- (void)sendComment:(NSString *)arg1 fromGuide:(_Bool)arg2;
@end

