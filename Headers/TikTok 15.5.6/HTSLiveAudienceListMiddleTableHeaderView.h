//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;
@protocol IESLiveEnvironment;

@interface HTSLiveAudienceListMiddleTableHeaderView : UIView
{
    UILabel *_titleLabel;
    UILabel *_rightLable;
    id <IESLiveEnvironment> _liveEnvironment;
}

@property(retain, nonatomic) id <IESLiveEnvironment> liveEnvironment; // @synthesize liveEnvironment=_liveEnvironment;
@property(retain, nonatomic) UILabel *rightLable; // @synthesize rightLable=_rightLable;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)updateStrWithLeftStr:(id)arg1 rightStr:(id)arg2;
- (void)updateLableWithStr:(id)arg1 leftTextLength:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

