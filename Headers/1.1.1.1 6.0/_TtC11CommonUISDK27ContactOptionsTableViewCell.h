//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <CommonUISDK/_TtP11CommonUISDK19MenuOptionInvocable_-Protocol.h>

@class _TtC11CommonUISDK20MenuOptionsPresenter;

@interface _TtC11CommonUISDK27ContactOptionsTableViewCell : UITableViewCell <_TtP11CommonUISDK19MenuOptionInvocable_>
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: menuPresenter
    // Error parsing type: , name: cardView
    // Error parsing type: , name: optionsView
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: stackView
    // Error parsing type: , name: titleLabel
}

- (void).cxx_destruct;
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copyText;
- (void)longPressAction;
- (void)prepareForReuse;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;
@property(nonatomic, retain) _TtC11CommonUISDK20MenuOptionsPresenter *menuPresenter; // @synthesize menuPresenter;

@end

