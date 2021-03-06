//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _TtC11PhoneFactor24MFAAdditionalAuthDetails;

@interface _TtC11PhoneFactor10MFASession : NSObject
{
    // Error parsing type: , name: guid
    // Error parsing type: , name: padUrl
    // Error parsing type: , name: expiration
    // Error parsing type: , name: groupKey
    // Error parsing type: , name: username
    // Error parsing type: , name: tenantId
    // Error parsing type: , name: userObjectId
    // Error parsing type: , name: userObjectIdHash
    // Error parsing type: , name: accountName
    // Error parsing type: , name: mode
    // Error parsing type: , name: pinChangeRequired
    // Error parsing type: , name: userCanChangePin
    // Error parsing type: , name: pinRetries
    // Error parsing type: , name: fraudAllowed
    // Error parsing type: , name: fraudBlock
    // Error parsing type: , name: oathTokenEnabled
    // Error parsing type: , name: oathCounter
    // Error parsing type: , name: firstEntropyNumber
    // Error parsing type: , name: secondEntropyNumber
    // Error parsing type: , name: thirdEntropyNumber
    // Error parsing type: , name: additionalAuthDetails
    // Error parsing type: , name: returnLocationData
    // Error parsing type: , name: backgroundTaskIdentifier
    // Error parsing type: , name: authenticationInput
    // Error parsing type: , name: eventSource
}

+ (id)decodeFromEncodedData:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (id)telemetryKeyValueProperties;
- (id)encodeToData;
- (_Bool)isEntropySession;
- (_Bool)isExpiredSession;
- (_Bool)isForegroundSession;
- (id)initWithAuthDetailsResponse:(id)arg1;
- (id)initWithNotificationPayload:(id)arg1 backgroundTaskIdentifier:(unsigned long long)arg2 authenticationInput:(unsigned long long)arg3;
- (id)initWithGuid:(id)arg1 padUrl:(id)arg2 expiration:(unsigned long long)arg3 groupKey:(id)arg4 username:(id)arg5 tenantId:(id)arg6 userObjectId:(id)arg7 userObjectIdHash:(id)arg8 accountName:(id)arg9 mode:(int)arg10 pinChangeRequired:(_Bool)arg11 userCanChangePin:(_Bool)arg12 pinRetries:(int)arg13 fraudAllowed:(_Bool)arg14 fraudBlock:(_Bool)arg15 oathTokenEnabled:(_Bool)arg16 oathCounter:(unsigned long long)arg17 firstEntropyNumber:(id)arg18 secondEntropyNumber:(id)arg19 thirdEntropyNumber:(id)arg20 additionalAuthDetailsString:(id)arg21 returnLocationData:(_Bool)arg22 backgroundTaskIdentifier:(unsigned long long)arg23 authenticationInput:(unsigned long long)arg24 eventSource:(id)arg25;
@property(nonatomic, copy) NSString *eventSource;
@property(nonatomic) unsigned long long authenticationInput; // @synthesize authenticationInput;
@property(nonatomic) unsigned long long backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier;
@property(nonatomic, readonly) _Bool returnLocationData; // @synthesize returnLocationData;
@property(nonatomic, readonly) _TtC11PhoneFactor24MFAAdditionalAuthDetails *additionalAuthDetails; // @synthesize additionalAuthDetails;
@property(nonatomic, readonly) NSString *thirdEntropyNumber;
@property(nonatomic, readonly) NSString *secondEntropyNumber;
@property(nonatomic, readonly) NSString *firstEntropyNumber;
@property(nonatomic, readonly) unsigned long long oathCounter; // @synthesize oathCounter;
@property(nonatomic, readonly) _Bool oathTokenEnabled; // @synthesize oathTokenEnabled;
@property(nonatomic, readonly) _Bool fraudBlock; // @synthesize fraudBlock;
@property(nonatomic, readonly) _Bool fraudAllowed; // @synthesize fraudAllowed;
@property(nonatomic, readonly) int pinRetries; // @synthesize pinRetries;
@property(nonatomic, readonly) _Bool userCanChangePin; // @synthesize userCanChangePin;
@property(nonatomic, readonly) _Bool pinChangeRequired; // @synthesize pinChangeRequired;
@property(nonatomic, readonly) int mode; // @synthesize mode;
@property(nonatomic, readonly) NSString *accountName;
@property(nonatomic, readonly) NSString *userObjectIdHash;
@property(nonatomic, readonly) NSString *userObjectId;
@property(nonatomic, readonly) NSString *tenantId;
@property(nonatomic, readonly) NSString *username;
@property(nonatomic, readonly) NSString *groupKey;
@property(nonatomic, readonly) unsigned long long expiration; // @synthesize expiration;
@property(nonatomic, readonly) NSString *padUrl;
@property(nonatomic, readonly) NSString *guid;

@end

