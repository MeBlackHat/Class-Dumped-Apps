//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WAMMSMediaUploadOperation, WamEventMediaUpload2;

@protocol WAMMSMediaUploadOperationDelegate <NSObject>
- (void)uploadTask:(WAMMSMediaUploadOperation *)arg1 willRetryWithUploadEvent:(WamEventMediaUpload2 *)arg2;
- (void)uploadTask:(WAMMSMediaUploadOperation *)arg1 didUpdateProgress:(double)arg2;
@end

