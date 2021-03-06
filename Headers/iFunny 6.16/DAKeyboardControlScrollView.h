//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class UIResponder, UIView;

@interface DAKeyboardControlScrollView : UIScrollView
{
    UIResponder *activeInput;
    UIView *activeKeyboard;
    struct CGRect originalKeyboardFrame;
    double keyboardTriggerOffset;
}

- (void).cxx_destruct;
@property(nonatomic) double keyboardTriggerOffset; // @synthesize keyboardTriggerOffset;
- (void)panGestureDidChange;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)responderDidBecomeActive:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end

