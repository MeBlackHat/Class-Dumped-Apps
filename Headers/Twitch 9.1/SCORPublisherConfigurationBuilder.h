//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ComScore/SCORClientConfigurationBuilder.h>

@class NSString;
@protocol SCORPublisherUniqueDeviceIdDelegate;

@interface SCORPublisherConfigurationBuilder : SCORClientConfigurationBuilder
{
    struct Builder {
        struct CriticalSection;
        struct ClientConfigurationParams;
        struct PublisherUniqueDeviceIdListener *;
        struct String;
    } *_cppBuilder;
    shared_ptr_70a56b18 _deviceIdListener;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)vceEnabled;
- (void)setVceEnabled:(_Bool)arg1;
- (_Bool)httpRedirectCachingEnabled;
- (void)setHttpRedirectCachingEnabled:(_Bool)arg1;
- (_Bool)secureTransmissionEnabled;
- (void)setSecureTransmissionEnabled:(_Bool)arg1;
- (_Bool)keepAliveMeasurementEnabled;
- (void)setKeepAliveMeasurementEnabled:(_Bool)arg1;
- (id)startLabels;
- (void)setStartLabels:(id)arg1;
- (id)persistentLabels;
- (void)setPersistentLabels:(id)arg1;
@property(nonatomic) __weak id <SCORPublisherUniqueDeviceIdDelegate> publisherUniqueDeviceIdDelegate;
@property(copy) NSString *publisherId;
- (id)build;
- (shared_ptr_70a56b18)getDeviceIdListener;
- (void)dealloc;
- (id)init;

@end

