//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

#import "SLKViewControllerLeakDetectorRootViewControllersSource-Protocol.h"

@class NSArray, UIViewController;

@interface _TtC5Slack9SLKWindow : UIWindow <SLKViewControllerLeakDetectorRootViewControllersSource>
{
    // Error parsing type: , name: rootViewControllerChangeListeners
    // Error parsing type: , name: previousRootViewControllers
    // Error parsing type: , name: rootViewControllerChangeTimestamp
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithWindowScene:(id)arg1;
@property(nonatomic, readonly) NSArray *slk_additionalRootViewControllers;
@property(nonatomic, retain) UIViewController *rootViewController;

@end

