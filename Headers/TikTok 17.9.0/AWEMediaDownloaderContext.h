//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEMediaDownloaderContextProtocol-Protocol.h"

@class AWEMediaDownloadCommonTask, AWEUIBottomBubbleView, NSLock, NSPointerArray, NSTimer, UIViewController;

@interface AWEMediaDownloaderContext : NSObject <AWEMediaDownloaderContextProtocol>
{
    UIViewController *currentAppearVC;
    AWEMediaDownloadCommonTask *_currentTask;
    AWEMediaDownloadCommonTask *_retryTask;
    NSPointerArray *_downloadBarViewList;
    double _progress;
    NSTimer *_downloadBarDismissTimer;
    NSTimer *_failBubbleDismissTimer;
    NSLock *_viewListLock;
    AWEUIBottomBubbleView *_downloadFailBubbleView;
    unsigned long long _retryTimes;
    double _downloadBarHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double downloadBarHeight; // @synthesize downloadBarHeight=_downloadBarHeight;
@property(nonatomic) unsigned long long retryTimes; // @synthesize retryTimes=_retryTimes;
@property(retain, nonatomic) AWEUIBottomBubbleView *downloadFailBubbleView; // @synthesize downloadFailBubbleView=_downloadFailBubbleView;
@property(retain, nonatomic) NSLock *viewListLock; // @synthesize viewListLock=_viewListLock;
@property(retain, nonatomic) NSTimer *failBubbleDismissTimer; // @synthesize failBubbleDismissTimer=_failBubbleDismissTimer;
@property(retain, nonatomic) NSTimer *downloadBarDismissTimer; // @synthesize downloadBarDismissTimer=_downloadBarDismissTimer;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSPointerArray *downloadBarViewList; // @synthesize downloadBarViewList=_downloadBarViewList;
@property(retain, nonatomic) AWEMediaDownloadCommonTask *retryTask; // @synthesize retryTask=_retryTask;
@property(retain, nonatomic) AWEMediaDownloadCommonTask *currentTask; // @synthesize currentTask=_currentTask;
@property(nonatomic) __weak UIViewController *currentAppearVC; // @synthesize currentAppearVC;
- (_Bool)hasDownloadFailBubbleViewBeenInstantiated;
- (id)currentDownloadAwemeID;
- (long long)currentTaskStatus;

@end

