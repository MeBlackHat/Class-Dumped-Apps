//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class MSADAToken, MSADeviceCredentials, NSMutableDictionary, NSString;

@interface MSADeviceIdentity : NSObject <NSCoding>
{
    NSMutableDictionary *_propertyBag;
    NSString *_puid;
    _Bool _isAccessibleAttributeUpdated;
    MSADAToken *_daToken;
    MSADeviceCredentials *_credentials;
}

@property(nonatomic) _Bool isAccessibleAttributeUpdated; // @synthesize isAccessibleAttributeUpdated=_isAccessibleAttributeUpdated;
@property(readonly) MSADeviceCredentials *credentials; // @synthesize credentials=_credentials;
@property(retain, nonatomic) MSADAToken *daToken; // @synthesize daToken=_daToken;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *puid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCredentials:(id)arg1 daToken:(id)arg2 puid:(id)arg3;
- (id)initWithCredentials:(id)arg1 puid:(id)arg2;
- (id)init;

@end

