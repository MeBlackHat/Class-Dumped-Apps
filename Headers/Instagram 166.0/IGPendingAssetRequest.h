//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PHAsset;

@interface IGPendingAssetRequest : NSObject
{
    unsigned long long _requestID;
    PHAsset *_assetFetchingFrom;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithAsset:(id)arg1 contentEditingInputRequestID:(unsigned long long)arg2;
- (id)initWithImageRequestID:(int)arg1;

@end

