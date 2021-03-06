//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface ASTOPAInstallationCard : UIView
{
    UILabel *_appStoreLabel;
    UIImageView *_appStoreLogo;
    UIImageView *_opaLogo;
    UILabel *_promptLabel;
}

@property(retain, nonatomic) UILabel *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(retain, nonatomic) UIImageView *opaLogo; // @synthesize opaLogo=_opaLogo;
@property(retain, nonatomic) UIImageView *appStoreLogo; // @synthesize appStoreLogo=_appStoreLogo;
@property(retain, nonatomic) UILabel *appStoreLabel; // @synthesize appStoreLabel=_appStoreLabel;
- (void).cxx_destruct;
- (void)setupLayoutConstraints;
- (void)setupSubviews;
- (id)init;

@end

