//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "IESLiveMTPushMessageViewDelegate-Protocol.h"

@class HTSLiveMessageListNode, IESLiveMTPushMessageView, NSString, UIView;
@protocol IESLiveMTPushMessageActions;

@interface IESLiveMTMessageListPushCellView : UITableViewCell <IESLiveMTPushMessageViewDelegate>
{
    HTSLiveMessageListNode *_node;
    id <IESLiveMTPushMessageActions> _pushMessageActionCreator;
    UIView *_background;
    IESLiveMTPushMessageView *_pushMessageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IESLiveMTPushMessageView *pushMessageView; // @synthesize pushMessageView=_pushMessageView;
@property(retain, nonatomic) UIView *background; // @synthesize background=_background;
@property(retain, nonatomic) id <IESLiveMTPushMessageActions> pushMessageActionCreator; // @synthesize pushMessageActionCreator=_pushMessageActionCreator;
@property(retain, nonatomic) HTSLiveMessageListNode *node; // @synthesize node=_node;
- (void)pushMessageView:(id)arg1 didClickWithPushMessage:(id)arg2;
- (void)refreshWith:(id)arg1 width:(double)arg2;
- (void)loadViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

