//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/YTGraftingViewController-Protocol.h>
#import <Module_Framework/YTResponder-Protocol.h>

@class NSString, YTICommand;
@protocol YTResponder;

@interface MDXSeamlessSignInVEStandInViewController : UIViewController <YTGraftingViewController, YTResponder>
{
    YTICommand *_navEndpoint;
    id <YTResponder> _parentResponder;
    int _pageVEType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int pageVEType; // @synthesize pageVEType=_pageVEType;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (id)navEndpoint;
- (id)initWithParentResponder:(id)arg1 pageVEType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

