//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface GOOTransitioningViewLayout : NSObject
{
    UIView *_superview;
    struct CGPoint _center;
    struct CGRect _bounds;
    struct CGAffineTransform _transform;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) UIView *superview; // @synthesize superview=_superview;
- (id)init;

@end

