//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSDictionary;

@interface IGUploadSessionContext : FBValueObject <NSCopying, NSCoding>
{
    NSDictionary *_mediaKeyToStatus;
    long long _retryCount;
    long long _lastErrorResponseCode;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long lastErrorResponseCode; // @synthesize lastErrorResponseCode=_lastErrorResponseCode;
@property(readonly, nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(readonly, copy, nonatomic) NSDictionary *mediaKeyToStatus; // @synthesize mediaKeyToStatus=_mediaKeyToStatus;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithMediaKeyToStatus:(id)arg1 retryCount:(long long)arg2 lastErrorResponseCode:(long long)arg3;
- (id)initWithCoder:(id)arg1;

@end

