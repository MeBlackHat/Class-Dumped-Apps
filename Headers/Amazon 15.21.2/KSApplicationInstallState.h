//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CoralModel.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class KSApplicationInformation, KSApplicationInstanceInformation, KSPayloadEncryptionInformation, KSPushInformation, KSServerAuthenticationInformation, NSDate, NSNumber, NSString;

@interface KSApplicationInstallState : CoralModel <NSCoding, NSCopying>
{
    NSString *_applicationInstallId;
    NSNumber *_sequenceNumber;
    KSApplicationInformation *_applicationInformation;
    KSApplicationInstanceInformation *_applicationInstanceInformation;
    KSPushInformation *_pushInformation;
    NSString *_osNotificationState;
    KSPayloadEncryptionInformation *_payloadEncryptionInformation;
    KSServerAuthenticationInformation *_serverAuthenticationInformation;
    NSDate *_expirationTime;
}

+ (id)type;
@property(retain, nonatomic) NSDate *expirationTime; // @synthesize expirationTime=_expirationTime;
@property(retain, nonatomic) KSServerAuthenticationInformation *serverAuthenticationInformation; // @synthesize serverAuthenticationInformation=_serverAuthenticationInformation;
@property(retain, nonatomic) KSPayloadEncryptionInformation *payloadEncryptionInformation; // @synthesize payloadEncryptionInformation=_payloadEncryptionInformation;
@property(copy, nonatomic) NSString *osNotificationState; // @synthesize osNotificationState=_osNotificationState;
@property(retain, nonatomic) KSPushInformation *pushInformation; // @synthesize pushInformation=_pushInformation;
@property(retain, nonatomic) KSApplicationInstanceInformation *applicationInstanceInformation; // @synthesize applicationInstanceInformation=_applicationInstanceInformation;
@property(retain, nonatomic) KSApplicationInformation *applicationInformation; // @synthesize applicationInformation=_applicationInformation;
@property(retain, nonatomic) NSNumber *sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(copy, nonatomic) NSString *applicationInstallId; // @synthesize applicationInstallId=_applicationInstallId;
- (void).cxx_destruct;

@end

