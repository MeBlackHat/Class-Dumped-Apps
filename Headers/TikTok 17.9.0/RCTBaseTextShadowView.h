//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTShadowView.h"

@class NSAttributedString, RCTTextAttributes;

@interface RCTBaseTextShadowView : RCTShadowView
{
    NSAttributedString *_cachedAttributedText;
    RCTTextAttributes *_cachedTextAttributes;
    RCTTextAttributes *_textAttributes;
}

@property(retain, nonatomic) RCTTextAttributes *textAttributes; // @synthesize textAttributes=_textAttributes;
- (void).cxx_destruct;
- (void)didSetProps:(id)arg1;
- (void)didUpdateReactSubviews;
- (void)dirtyLayout;
- (id)attributedTextWithBaseTextAttributes:(id)arg1;
- (void)setReactTag:(id)arg1;
- (id)init;

@end

