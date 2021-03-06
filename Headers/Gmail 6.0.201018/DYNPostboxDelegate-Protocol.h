//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DYNPostboxView, NSData, NSString, UIImage;

@protocol DYNPostboxDelegate <NSObject>
- (void)postboxDidChangeFirstResponderState:(_Bool)arg1;
- (void)postboxDidTapSendButton:(DYNPostboxView *)arg1;
- (void)postboxDidTapCalendarEventButton:(DYNPostboxView *)arg1;
- (void)postboxDidTapVideoCallButton:(DYNPostboxView *)arg1;
- (void)postboxDidTapDriveButton:(DYNPostboxView *)arg1;
- (void)postboxDidTapCameraButton:(DYNPostboxView *)arg1;
- (void)postboxDidTapPhotoAlbumButton:(DYNPostboxView *)arg1;
- (void)postboxDidTapAtMentionButton:(DYNPostboxView *)arg1;
- (void)postboxDidChangeOffTheRecord:(_Bool)arg1;
- (void)postboxDidTapDeleteChipButton:(DYNPostboxView *)arg1;
- (void)postbox:(DYNPostboxView *)arg1 imageWasPasted:(UIImage *)arg2 imageData:(NSData *)arg3 utType:(NSString *)arg4 fileName:(NSString *)arg5;
- (void)postboxContentDidChange:(DYNPostboxView *)arg1;
- (void)postboxDidUpdateAutocompleteQuery:(NSString *)arg1;
- (void)postboxWillBeginEditing:(DYNPostboxView *)arg1;
- (int)sendButtonState;
- (void)postboxFullScreenComposingChanged:(_Bool)arg1;
- (struct UIEdgeInsets)safeAreaInsets;
- (double)flexibleHeaderHeight;
@end

