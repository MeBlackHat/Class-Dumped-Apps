//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/GHKChatErrorBarView-Protocol.h>

@class NSString, UILabel;

@interface GHKChatErrorBarViewGM2 : UIView <GHKChatErrorBarView>
{
    UILabel *_errorLabel;
    UILabel *_retryLabel;
    double _originYAnchor;
}

- (void).cxx_destruct;
@property(nonatomic) double originYAnchor; // @synthesize originYAnchor=_originYAnchor;
- (struct CGRect)resizeFrame:(struct CGRect)arg1 withHeight:(double)arg2;
- (id)uiView;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

