//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/PSPDFTextView.h>

@protocol PSPDFApplicationPolicy;

@interface PSPDFSecureTextView : PSPDFTextView
{
    id <PSPDFApplicationPolicy> _policy;
}

@property(nonatomic) __weak id <PSPDFApplicationPolicy> policy; // @synthesize policy=_policy;
- (void).cxx_destruct;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;

@end

