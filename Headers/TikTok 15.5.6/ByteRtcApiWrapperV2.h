//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ByteRtcApiWrapperV2 : NSObject
{
    NSString *_lastestAppId;
}

+ (void)destroy;
+ (id)createByteRtcEngineWithAppId:(id)arg1 delegate:(id)arg2;
+ (id)sharedIntstance;
@property(copy, nonatomic) NSString *lastestAppId; // @synthesize lastestAppId=_lastestAppId;
- (void).cxx_destruct;

@end

