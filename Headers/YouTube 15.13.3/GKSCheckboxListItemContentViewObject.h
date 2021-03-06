//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GKSListItemContentViewObject.h>

#import <Module_Framework/GKSListItemViewAccessoryViewFactory-Protocol.h>

@class NSString, UIColor;
@protocol GKSCheckboxListItemDelegate;

@interface GKSCheckboxListItemContentViewObject : GKSListItemContentViewObject <GKSListItemViewAccessoryViewFactory>
{
    _Bool _isSelected;
    id <GKSCheckboxListItemDelegate> _delegate;
    UIColor *_checkedColor;
    unsigned long long _checkboxPosition;
}

@property(nonatomic) unsigned long long checkboxPosition; // @synthesize checkboxPosition=_checkboxPosition;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) UIColor *checkedColor; // @synthesize checkedColor=_checkedColor;
@property(nonatomic) __weak id <GKSCheckboxListItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (Class)contentViewClass;
- (id)accessoryView;
- (id)init;
- (id)initSelected:(_Bool)arg1 checkboxPosition:(unsigned long long)arg2;
- (id)initSelected:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

