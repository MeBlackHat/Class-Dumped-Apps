//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpeedTestEngine/AMAuctionManagerDelegate-Protocol.h>

@class AMAdViewPoolManager, AMAppMonetBidder, AMAppMonetContext, AMAuctionManager, AMBidManager, AMDeviceData, AMPreferences, NSMutableDictionary, NSString;
@protocol AMAdServerWrapper, OS_dispatch_queue, OS_dispatch_source;

@interface AMBaseManager : NSObject <AMAuctionManagerDelegate>
{
    NSString *_applicationId;
    AMAppMonetContext *_appMonetContext;
    AMDeviceData *_deviceData;
    AMAuctionManager *_auctionManager;
    AMAppMonetBidder *_appMonetBidder;
    id <AMAdServerWrapper> _adServerWrapper;
    AMAdViewPoolManager *_adViewPoolManager;
    AMBidManager *_bidManager;
    AMPreferences *_preferences;
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_source> *_cleanTimer;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSMutableDictionary *_corsDictionary;
}

+ (void)enableVerboseLogging:(_Bool)arg1;
@property(retain, nonatomic) NSMutableDictionary *corsDictionary; // @synthesize corsDictionary=_corsDictionary;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue; // @synthesize backgroundQueue=_backgroundQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *cleanTimer; // @synthesize cleanTimer=_cleanTimer;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, nonatomic) AMPreferences *preferences; // @synthesize preferences=_preferences;
@property(readonly, nonatomic) AMBidManager *bidManager; // @synthesize bidManager=_bidManager;
@property(readonly, nonatomic) AMAdViewPoolManager *adViewPoolManager; // @synthesize adViewPoolManager=_adViewPoolManager;
@property(readonly, nonatomic) id <AMAdServerWrapper> adServerWrapper; // @synthesize adServerWrapper=_adServerWrapper;
@property(readonly, nonatomic) AMAppMonetBidder *appMonetBidder; // @synthesize appMonetBidder=_appMonetBidder;
@property(readonly, nonatomic) AMAuctionManager *auctionManager; // @synthesize auctionManager=_auctionManager;
@property(readonly, nonatomic) AMDeviceData *deviceData; // @synthesize deviceData=_deviceData;
@property(readonly, nonatomic) AMAppMonetContext *appMonetContext; // @synthesize appMonetContext=_appMonetContext;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopTimer;
- (void)setupIntervalExecution;
- (void)checkRequiredInitParameters:(id)arg1;
- (void)auctionManager:(id)arg1 started:(id)arg2;
- (void)preFetchBids:(id)arg1;
- (id)initWithApplicationId:(id)arg1 andAdServerWrapper:(id)arg2 andBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

