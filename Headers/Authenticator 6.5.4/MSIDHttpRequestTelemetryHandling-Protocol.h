//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MSAL/NSObject-Protocol.h>

@class NSData, NSError, NSHTTPURLResponse, NSString, NSURLRequest;
@protocol MSIDRequestContext;

@protocol MSIDHttpRequestTelemetryHandling <NSObject>
- (void)responseReceivedEventWithContext:(id <MSIDRequestContext>)arg1 urlRequest:(NSURLRequest *)arg2 httpResponse:(NSHTTPURLResponse *)arg3 data:(NSData *)arg4 error:(NSError *)arg5;
- (void)sendRequestEventWithId:(NSString *)arg1;
@end

