//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAStaticPinController-Protocol.h"

@class NSLayoutConstraint, NSString, UIImageView, UIView, WAMapView, WAPinHoleView, WAStaticPinCalloutView;
@protocol WAStaticPinControllerDelegate;

@interface WANewStaticPinController : NSObject <WAStaticPinController>
{
    UIView *_container;
    UIImageView *_imageViewPin;
    WAPinHoleView *_pinHoleView;
    UIImageView *_imageViewPinFloating;
    WAStaticPinCalloutView *_pinCallout;
    NSLayoutConstraint *_calloutXPositionConstraint;
    NSLayoutConstraint *_calloutYPositionConstraint;
    _Bool _doNotHighlightCallout;
    _Bool _pinCalloutVisible;
    _Bool _pinHidden;
    _Bool _pinFloating;
    _Bool _ignoreInsets;
    _Bool _startFloating;
    id <WAStaticPinControllerDelegate> _delegate;
    WAMapView *_mapView;
    UIView *_profilePicture;
    struct CGPoint _position;
}

+ (id)controllerAttachedToWAMapView:(id)arg1;
@property(retain, nonatomic) UIView *profilePicture; // @synthesize profilePicture=_profilePicture;
@property(nonatomic) __weak WAMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) _Bool startFloating; // @synthesize startFloating=_startFloating;
@property(nonatomic) __weak id <WAStaticPinControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool ignoreInsets; // @synthesize ignoreInsets=_ignoreInsets;
@property(nonatomic, getter=isPinFloating) _Bool pinFloating; // @synthesize pinFloating=_pinFloating;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(nonatomic, getter=isPinHidden) _Bool pinHidden; // @synthesize pinHidden=_pinHidden;
@property(nonatomic, getter=isPinCalloutVisible) _Bool pinCalloutVisible; // @synthesize pinCalloutVisible=_pinCalloutVisible;
@property(nonatomic) _Bool doNotHighlightCallout; // @synthesize doNotHighlightCallout=_doNotHighlightCallout;
- (void).cxx_destruct;
- (void)updateCalloutConstraintConstant;
- (void)enterStickerMode;
- (void)configurePinCalloutWithPlacemark:(id)arg1 showActivity:(_Bool)arg2;
- (void)setPinCalloutVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)pinCalloutTapped;
- (void)reportDropCompletionToDelegate;
- (void)animateFloatingPinWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)makePinAppear;
- (void)preparePinToAppear;
- (void)setPinFloating:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dropPin;
- (void)liftPin;
- (void)setAlpha:(double)arg1;
- (void)setPinCalloutTitle:(id)arg1;
- (void)setPinHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGPoint)centerForFloatingPinWhenFloating:(_Bool)arg1;
- (struct CGRect)mapBounds;
- (void)layout;
- (struct CGPoint)pinOrigin;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

