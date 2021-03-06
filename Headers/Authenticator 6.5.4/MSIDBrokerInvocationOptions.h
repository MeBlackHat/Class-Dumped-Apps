//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MSIDBrokerInvocationOptions : NSObject
{
    _Bool _isUniversalLink;
    long long _minRequiredBrokerType;
    long long _protocolType;
    long long _brokerAADRequestVersion;
    NSString *_brokerBaseUrlString;
    NSString *_versionDisplayableName;
    NSArray *_requiredSchemes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *requiredSchemes; // @synthesize requiredSchemes=_requiredSchemes;
@property(nonatomic) _Bool isUniversalLink; // @synthesize isUniversalLink=_isUniversalLink;
@property(retain, nonatomic) NSString *versionDisplayableName; // @synthesize versionDisplayableName=_versionDisplayableName;
@property(retain, nonatomic) NSString *brokerBaseUrlString; // @synthesize brokerBaseUrlString=_brokerBaseUrlString;
@property(nonatomic) long long brokerAADRequestVersion; // @synthesize brokerAADRequestVersion=_brokerAADRequestVersion;
@property(nonatomic) long long protocolType; // @synthesize protocolType=_protocolType;
@property(nonatomic) long long minRequiredBrokerType; // @synthesize minRequiredBrokerType=_minRequiredBrokerType;
- (id)requiredSchemesForBrokerType:(long long)arg1 requestType:(long long)arg2;
- (id)displayableNameForBrokerType:(long long)arg1;
- (id)brokerBaseUrlForCommunicationProtocolType:(long long)arg1 aadRequestVersion:(long long)arg2;
@property(readonly, nonatomic) _Bool isRequiredBrokerPresent;
- (id)init;
- (id)initWithRequiredBrokerType:(long long)arg1 protocolType:(long long)arg2 aadRequestVersion:(long long)arg3;

@end

