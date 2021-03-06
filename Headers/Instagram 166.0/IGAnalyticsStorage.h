//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGAnalyticsStorageProtocol-Protocol.h>

@class NSString;
@protocol IGDateScheduler;

@interface IGAnalyticsStorage : NSObject <IGAnalyticsStorageProtocol>
{
    NSString *_storagePath;
    double _dataExpirationDelay;
    id <IGDateScheduler> _scheduler;
}

- (void).cxx_destruct;
- (id)readExposureTimestamps;
- (void)writeExposureTimestamps:(id)arg1;
- (id)initWithStoragePath:(id)arg1 dataExpirationDelay:(double)arg2 scheduler:(id)arg3;
- (id)initWithDirectoryPath:(id)arg1 uniqueIdentifier:(id)arg2 dataExpirationDelay:(double)arg3 scheduler:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

