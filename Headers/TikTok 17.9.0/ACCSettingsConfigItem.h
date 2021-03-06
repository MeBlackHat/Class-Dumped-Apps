//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSNumber, NSString;

@interface ACCSettingsConfigItem : MTLModel <MTLJSONSerializing>
{
    NSNumber *_enablePreUpload;
    NSNumber *_preUploadEncryptionMode;
    NSNumber *_publishCloseClientWatermark;
    NSNumber *_dnsEnable;
    NSNumber *_dnsMainType;
    NSNumber *_dnsBackType;
    NSNumber *_dnsExpiredTime;
    NSString *_dnsOwnServer;
    NSString *_dnsGoogleServer;
}

+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *dnsGoogleServer; // @synthesize dnsGoogleServer=_dnsGoogleServer;
@property(retain, nonatomic) NSString *dnsOwnServer; // @synthesize dnsOwnServer=_dnsOwnServer;
@property(retain, nonatomic) NSNumber *dnsExpiredTime; // @synthesize dnsExpiredTime=_dnsExpiredTime;
@property(retain, nonatomic) NSNumber *dnsBackType; // @synthesize dnsBackType=_dnsBackType;
@property(retain, nonatomic) NSNumber *dnsMainType; // @synthesize dnsMainType=_dnsMainType;
@property(retain, nonatomic) NSNumber *dnsEnable; // @synthesize dnsEnable=_dnsEnable;
@property(retain, nonatomic) NSNumber *publishCloseClientWatermark; // @synthesize publishCloseClientWatermark=_publishCloseClientWatermark;
@property(retain, nonatomic) NSNumber *preUploadEncryptionMode; // @synthesize preUploadEncryptionMode=_preUploadEncryptionMode;
@property(retain, nonatomic) NSNumber *enablePreUpload; // @synthesize enablePreUpload=_enablePreUpload;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

