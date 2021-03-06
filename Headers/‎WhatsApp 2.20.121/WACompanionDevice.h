//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Core/NSCopying-Protocol.h>

@class NSDate, NSString, WADeviceJID, WAEC25519PublicKey, WAPBADVDeviceIdentity, WAPBCompanionDeviceInfo, WAPBCompanionDeviceInfo_PairInfo, WAPBCompanionDeviceInfo_PersistedCompanionProps;
@protocol WADeviceDate, WAServerDate;

@interface WACompanionDevice : NSObject <NSCopying>
{
    WADeviceJID *_deviceJID;
    unsigned long long _deviceJIDVersion;
    WAPBCompanionDeviceInfo *_info;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WAPBCompanionDeviceInfo *info; // @synthesize info=_info;
@property(readonly, nonatomic) unsigned long long deviceJIDVersion; // @synthesize deviceJIDVersion=_deviceJIDVersion;
@property(readonly, nonatomic) WADeviceJID *deviceJID; // @synthesize deviceJID=_deviceJID;
- (id)debugDescription;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)encoded;
- (_Bool)matchesUserJID:(id)arg1;
- (id)lastSeenAt:(id)arg1;
- (id)removedAt:(id)arg1;
@property(readonly, nonatomic) NSString *locationRegion;
@property(readonly, nonatomic) NSString *locationCity;
@property(readonly, nonatomic) NSDate<WAServerDate> *lastSeenDate;
@property(readonly, nonatomic) NSDate<WADeviceDate> *removeDate;
@property(readonly, nonatomic) NSString *operatingSystemName;
@property(readonly, nonatomic) NSDate<WADeviceDate> *pairDate;
@property(readonly, nonatomic) int deviceType;
@property(readonly, copy, nonatomic) WAPBADVDeviceIdentity *deviceIdentity;
@property(readonly, nonatomic) WAEC25519PublicKey *identityKey;
@property(readonly, nonatomic) WAPBCompanionDeviceInfo_PersistedCompanionProps *companionProps;
@property(readonly, nonatomic) WAPBCompanionDeviceInfo_PairInfo *pairInfo;
- (id)initWithJID:(id)arg1 deviceJIDVersion:(unsigned long long)arg2 pendingDevice:(id)arg3 companionData:(id)arg4 locationCity:(id)arg5 locationRegion:(id)arg6;
- (id)initWithJID:(id)arg1 data:(id)arg2;
- (id)initWithJID:(id)arg1 info:(id)arg2;

@end

