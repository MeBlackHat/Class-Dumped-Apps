//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class A9VSFezRoom, A9VSFezRoomAssetData, A9VSFezRoomCaptureViewController;

@protocol A9VSFezRoomCaptureViewControllerDelegate <NSObject>
- (void)roomCaptureViewController:(A9VSFezRoomCaptureViewController *)arg1 didCaptureRoom:(A9VSFezRoom *)arg2 withAssetData:(A9VSFezRoomAssetData *)arg3;
- (void)didCancelRoomCaptureProcess;
@end

