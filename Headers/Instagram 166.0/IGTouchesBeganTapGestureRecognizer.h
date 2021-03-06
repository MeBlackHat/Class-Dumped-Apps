//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class FBTimer;

@interface IGTouchesBeganTapGestureRecognizer : UIGestureRecognizer
{
    FBTimer *_timer;
    _Bool _tapIsPossible;
    struct CGPoint _initialPosition;
    _Bool _wasTapped;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool tapIsPossible; // @synthesize tapIsPossible=_tapIsPossible;
@property(readonly, nonatomic) _Bool wasTapped; // @synthesize wasTapped=_wasTapped;
- (void)_timeExpired;
- (void)reset;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

