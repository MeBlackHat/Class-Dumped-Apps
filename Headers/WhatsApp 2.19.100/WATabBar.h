//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITabBar.h>

@protocol WATabBarDelegate;

@interface WATabBar : UITabBar
{
}

- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) __weak id <WATabBarDelegate> delegate; // @dynamic delegate;

@end

