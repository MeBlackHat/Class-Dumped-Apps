//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AVPlayer, AVPlayerLayer, NSURL;
@protocol UjetVideoCaptureViewControllerDelegate;

@interface UjetVideoPlayViewController : UIViewController
{
    id <UjetVideoCaptureViewControllerDelegate> _delegate;
    NSURL *_videoUrl;
    AVPlayer *_avPlayer;
    AVPlayerLayer *_avPlayerLayer;
}

@property(retain, nonatomic) AVPlayerLayer *avPlayerLayer; // @synthesize avPlayerLayer=_avPlayerLayer;
@property(retain, nonatomic) AVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property(retain, nonatomic) NSURL *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(nonatomic) __weak id <UjetVideoCaptureViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)play;
- (void)choose;
- (void)cancel;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithVideoUrl:(id)arg1;

@end

