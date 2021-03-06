//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;
@protocol VASVASTExtensionButtonsViewDelegate;

@interface VASVASTExtensionButtonsView : UIView
{
    NSArray *_buttons;
    id <VASVASTExtensionButtonsViewDelegate> _delegate;
    NSArray *_buttonsView;
    NSArray *_constraintsPortrait;
    NSArray *_constraintsLandscape;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *constraintsLandscape; // @synthesize constraintsLandscape=_constraintsLandscape;
@property(retain, nonatomic) NSArray *constraintsPortrait; // @synthesize constraintsPortrait=_constraintsPortrait;
@property(retain, nonatomic) NSArray *buttonsView; // @synthesize buttonsView=_buttonsView;
@property __weak id <VASVASTExtensionButtonsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateConstraintsForSize:(struct CGSize)arg1;
- (void)handleExtensionButtonTouch:(id)arg1;
- (void)createConstraints;
- (id)createExtensionButtonsViewFromButtons:(id)arg1;
- (void)hideAllButtons;
- (void)showAllButtons;
- (void)updateButtonVisibility:(double)arg1;
- (id)selectButtonsFromExtensions:(id)arg1;
- (id)initWithExtensions:(id)arg1 delegate:(id)arg2;

@end

