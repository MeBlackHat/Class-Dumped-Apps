//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FNFAssetResourceLoadingContentInformationRequest : NSObject
{
    _Bool _byteRangeAccessSupported;
    long long _contentLength;
    NSString *_contentType;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isByteRangeAccessSupported) _Bool byteRangeAccessSupported; // @synthesize byteRangeAccessSupported=_byteRangeAccessSupported;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(nonatomic) long long contentLength; // @synthesize contentLength=_contentLength;

@end

