//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeriscopeSDK/PHPhotoLibraryChangeObserver-Protocol.h>

@class NSString;
@protocol PTVScreenshotObserverDelegate;

@interface PTVScreenshotObserver : NSObject <PHPhotoLibraryChangeObserver>
{
    PTVScreenshotObserver *_weakSelf;
    _Bool _isObservingPhotoLibrary;
    double _lastScreenshotNotificationTimestamp;
    _Bool _observingScreenshotNotifications;
    id <PTVScreenshotObserverDelegate> _delegate;
}

@property(readonly, nonatomic, getter=isObservingScreenshotNotifications) _Bool observingScreenshotNotifications; // @synthesize observingScreenshotNotifications=_observingScreenshotNotifications;
@property(nonatomic) __weak id <PTVScreenshotObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)fetchMostRecentScreenshot:(CDUnknownBlockType)arg1;
- (void)photoLibraryDidChange;
- (void)stopObservingPhotoLibrary;
- (void)startObservingPhotoLibrary;
- (long long)photosAuthorizationStatus;
- (void)userDidTakeScreenshot;
- (void)stopObservingScreenshotNotifications;
- (void)startObservingScreenshotNotifications;
- (void)stopObserving;
- (void)startObserving;
- (double)currentTimestamp;
- (id)initWithDelegate:(id)arg1;
- (id)init;
- (void)photoLibraryDidChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

