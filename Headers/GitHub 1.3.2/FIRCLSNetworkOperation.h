//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FIRCLSFABAsyncOperation.h"

@class FIRCLSDataCollectionToken, NSString;

@interface FIRCLSNetworkOperation : FIRCLSFABAsyncOperation
{
    FIRCLSDataCollectionToken *_token;
    NSString *_googleAppID;
}

@property(readonly, nonatomic) NSString *googleAppID; // @synthesize googleAppID=_googleAppID;
@property(readonly, nonatomic) FIRCLSDataCollectionToken *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (id)localeIdentifier;
- (id)userAgentString;
- (id)mutableRequestWithDefaultHTTPHeadersForURL:(id)arg1 timeout:(double)arg2;
- (id)mutableRequestWithDefaultHTTPHeaderFieldsAndTimeoutForURL:(id)arg1;
- (void)startWithToken:(id)arg1;
- (id)initWithGoogleAppID:(id)arg1 token:(id)arg2;

@end

