//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WACameraHelper : NSObject
{
}

+ (double)cameraLongPressDelayedDuration;
+ (_Bool)allowLongPress;
+ (id)defaultCapturePhotoSettingsWithFlashMode:(long long)arg1;
+ (void)requestCameraPermissionWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)showCameraAccessReminderScreenForSource:(long long)arg1;
+ (void)recoverUnsavedMediaIfNeeded;
+ (id)temporaryMediaPathWithExtension:(id)arg1;
+ (id)cameraMediaDirectory;
+ (id)videoCaptureDeviceWithPreferredPosition:(long long)arg1;
+ (double)rightAnglesForVideoOrientation:(long long)arg1;
+ (void)setUpPersistentAudioActivityIfNeeded;
+ (void)cameraDidEnterBackground:(id)arg1;
- (void).cxx_destruct;
- (id)init;

@end

