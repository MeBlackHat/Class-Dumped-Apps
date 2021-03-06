//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class DBASSISTANTClientData, DBASSISTANTRequestParams, NSString;

@interface DBASSISTANTGetAssistanceArg : NSObject <DBSerializable, NSCopying>
{
    DBASSISTANTRequestParams *_requestParams;
    DBASSISTANTClientData *_clientData;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) DBASSISTANTClientData *clientData; // @synthesize clientData=_clientData;
@property(readonly, nonatomic) DBASSISTANTRequestParams *requestParams; // @synthesize requestParams=_requestParams;
- (void).cxx_destruct;
- (_Bool)isEqualToGetAssistanceArg:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initDefault;
- (id)initWithRequestParams:(id)arg1 clientData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

