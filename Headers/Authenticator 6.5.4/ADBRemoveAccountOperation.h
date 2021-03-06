//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ADBOperation.h"

@class MSIDAccountMetadataCacheAccessor, MSIDBrokerOperationRemoveAccountRequest, MSIDDefaultTokenCacheAccessor;

@interface ADBRemoveAccountOperation : ADBOperation
{
    MSIDBrokerOperationRemoveAccountRequest *_request;
    MSIDDefaultTokenCacheAccessor *_appSpecificCacheAccessor;
    MSIDAccountMetadataCacheAccessor *_accountMetadataCacheAccessor;
}

+ (void)load;
- (void).cxx_destruct;
@property(retain, nonatomic) MSIDAccountMetadataCacheAccessor *accountMetadataCacheAccessor; // @synthesize accountMetadataCacheAccessor=_accountMetadataCacheAccessor;
@property(retain, nonatomic) MSIDDefaultTokenCacheAccessor *appSpecificCacheAccessor; // @synthesize appSpecificCacheAccessor=_appSpecificCacheAccessor;
@property(retain, nonatomic) MSIDBrokerOperationRemoveAccountRequest *request; // @synthesize request=_request;
- (void)invokeWithRequestParameters:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)needsUi;
- (id)initWithRequest:(id)arg1 error:(id *)arg2;

@end

