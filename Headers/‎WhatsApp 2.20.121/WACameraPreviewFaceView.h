//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, WACameraFaceObject;

@interface WACameraPreviewFaceView : UIView
{
    UIImageView *_outlineImageView;
    WACameraFaceObject *_faceObject;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WACameraFaceObject *faceObject; // @synthesize faceObject=_faceObject;
- (void)updateFrame;
- (void)fadeOutAfterDelay:(double)arg1;
- (id)initWithFaceObject:(id)arg1;

@end

