//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWEPublishTaskMessage-Protocol.h"

@class AWEPublishBaseTask, MBCircularProgressBarView, NSString, UIButton, UIImageView;

@interface AWEPublishProgressView : UIView <AWEPublishTaskMessage>
{
    _Bool _isInPublish;
    CDUnknownBlockType _didClickBlock;
    CDUnknownBlockType _beginPublishBlock;
    CDUnknownBlockType _endPublishBlock;
    UIImageView *_coverImageView;
    UIView *_maskView;
    MBCircularProgressBarView *_circleProgressBar;
    UIButton *_button;
    AWEPublishBaseTask *_taskV2;
}

+ (void)generateDraftCover:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) AWEPublishBaseTask *taskV2; // @synthesize taskV2=_taskV2;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) MBCircularProgressBarView *circleProgressBar; // @synthesize circleProgressBar=_circleProgressBar;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(nonatomic) _Bool isInPublish; // @synthesize isInPublish=_isInPublish;
@property(copy, nonatomic) CDUnknownBlockType endPublishBlock; // @synthesize endPublishBlock=_endPublishBlock;
@property(copy, nonatomic) CDUnknownBlockType beginPublishBlock; // @synthesize beginPublishBlock=_beginPublishBlock;
@property(copy, nonatomic) CDUnknownBlockType didClickBlock; // @synthesize didClickBlock=_didClickBlock;
- (void)publishShareToastWithType:(unsigned long long)arg1 task:(id)arg2 model:(id)arg3;
- (void)firAnalyticsUPVLogEventWithTask:(id)arg1 didEndWithResult:(long long)arg2 error:(id)arg3;
- (void)setHidden:(_Bool)arg1;
- (void)p_buttonPressed;
- (void)task:(id)arg1 didWholeEndWithResult:(long long)arg2 error:(id)arg3;
- (void)task:(id)arg1 didEndWithResult:(long long)arg2 error:(id)arg3;
- (void)task:(id)arg1 progressDidChangeWithInfo:(id)arg2;
- (void)task:(id)arg1 didAppendWithInfo:(id)arg2;
- (void)configProgressViewWithPhotoTaskV2:(id)arg1;
- (void)configProgressViewWithTaskV2:(id)arg1;
- (void)p_beginPublish;
- (void)dismiss:(_Bool)arg1;
- (void)show:(_Bool)arg1;
- (void)updateProgress;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

