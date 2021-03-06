//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PPRMOCMagnesUtils : NSObject
{
}

+ (id)dataToHex:(id)arg1;
+ (id)mergeDictionaries:(id)arg1 to:(id)arg2;
+ (id)base64Decode:(id)arg1;
+ (id)base64Encode:(id)arg1;
+ (id)urlEncode:(id)arg1;
+ (_Bool)getMagnesDebugFlag;
+ (void)logMagnesInfo:(id)arg1;
+ (id)getPayloadEndpointForEnvironment:(int)arg1;
+ (id)loadFromUserDefaultsForKey:(id)arg1;
+ (void)storeToUserDefaultsForKey:(id)arg1 withValue:(id)arg2;
+ (id)generatePayPalClientMetadataId;
+ (id)generateUUIDString;
+ (id)generateMagnesResultWithDeviceInfo:(id)arg1;

@end

