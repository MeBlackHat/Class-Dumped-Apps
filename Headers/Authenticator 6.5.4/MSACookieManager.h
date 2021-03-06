//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSAClockSkewManager, MSADeviceIdentityManager, MSAEnvironmentInternal;

@interface MSACookieManager : NSObject
{
    MSAEnvironmentInternal *_environment;
    MSADeviceIdentityManager *_deviceManager;
    MSAClockSkewManager *_clockSkewManager;
}

+ (id)generateCookieWithName:(id)arg1 value:(id)arg2 domain:(id)arg3 expirationDate:(id)arg4;
- (void).cxx_destruct;
- (void)setClockSkewManager:(id)arg1;
- (id)clockSkewManager;
- (void)setDeviceManager:(id)arg1;
- (id)deviceManager;
- (_Bool)generateCookieWithName:(id)arg1 token:(id)arg2 deviceIdentity:(id)arg3 additionalParameters:(id)arg4 cookie:(out id *)arg5 error:(out id *)arg6;
- (_Bool)generateDIDCCookieForDevice:(id)arg1 cookie:(out id *)arg2 error:(out id *)arg3;
- (_Bool)generateCAWCookieForAccount:(id)arg1 deviceIdentity:(id)arg2 cookie:(out id *)arg3 error:(out id *)arg4;
- (_Bool)getCookiesForAccount:(id)arg1 cookies:(out id *)arg2 error:(out id *)arg3;
- (id)initForEnvironment:(id)arg1;
- (id)init;

@end

