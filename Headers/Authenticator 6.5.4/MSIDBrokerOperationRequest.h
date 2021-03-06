//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MSAL/MSIDBaseBrokerOperationRequest.h>

#import <MSAL/MSIDJsonSerializable-Protocol.h>

@class NSString;

@interface MSIDBrokerOperationRequest : MSIDBaseBrokerOperationRequest <MSIDJsonSerializable>
{
    NSString *_brokerKey;
    long long _protocolVersion;
    NSString *_clientVersion;
    NSString *_clientAppVersion;
    NSString *_clientAppName;
    long long _clientSDK;
}

+ (_Bool)fillRequest:(id)arg1 keychainAccessGroup:(id)arg2 clientMetadata:(id)arg3 context:(id)arg4;
- (void).cxx_destruct;
@property(nonatomic) long long clientSDK; // @synthesize clientSDK=_clientSDK;
@property(retain, nonatomic) NSString *clientAppName; // @synthesize clientAppName=_clientAppName;
@property(retain, nonatomic) NSString *clientAppVersion; // @synthesize clientAppVersion=_clientAppVersion;
@property(retain, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(nonatomic) long long protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(retain, nonatomic) NSString *brokerKey; // @synthesize brokerKey=_brokerKey;
- (id)logInfo;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

