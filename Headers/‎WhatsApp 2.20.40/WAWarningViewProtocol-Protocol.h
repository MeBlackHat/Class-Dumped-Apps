//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/NSObject-Protocol.h>

@class UIColor, UIView;

@protocol WAWarningViewProtocol <NSObject>
@property(retain, nonatomic) UIColor *textColor;
- (void)setTrailingAccessoryView:(UIView *)arg1 withAction:(void (^)(void))arg2;
- (void)setLeadingAccessoryView:(UIView *)arg1 withAction:(void (^)(void))arg2;
@end

