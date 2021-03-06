//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTStyledViewController.h>

#import "YTPageStyleProvider-Protocol.h"
#import "YTTopController-Protocol.h"

@class GIMMe, NSString, YTCommandResponderEvent, YTQTMButton;
@protocol YTDataServices, YTResponder, YTServices;

@interface YTBaseModalEditorViewController : YTStyledViewController <YTPageStyleProvider, YTTopController>
{
    id <YTServices> _services;
    id <YTDataServices> _dataServices;
    id <YTResponder> _parentResponder;
    YTQTMButton *_closeButton;
    YTQTMButton *_doneButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)didTapCloseButton:(id)arg1;
- (void)dismissWithDismissalBlock:(CDUnknownBlockType)arg1;
- (void)didTapDoneButton:(id)arg1;
- (_Bool)isEqualTopController:(id)arg1;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
@property(readonly, nonatomic) long long pageStyle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak GIMMe *gimme;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTCommandResponderEvent *sourceEvent;
@property(readonly) Class superclass;

@end

