//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol WAMessageAttributedTextSliceViewContentViewDelegate;

@interface WAMessageAttributedTextSliceViewContentView : UIView
{
    id <WAMessageAttributedTextSliceViewContentViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property __weak id <WAMessageAttributedTextSliceViewContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)drawRect:(struct CGRect)arg1;
- (void)fillRects:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

