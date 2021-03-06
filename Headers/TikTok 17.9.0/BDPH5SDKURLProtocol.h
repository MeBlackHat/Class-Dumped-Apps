//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSURLProtocol.h>

@class NSMutableArray, NSThread;

@interface BDPH5SDKURLProtocol : NSURLProtocol
{
    NSThread *_clientThread;
    NSMutableArray *_modes;
}

+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
@property(retain) NSMutableArray *modes; // @synthesize modes=_modes;
@property(retain) NSThread *clientThread; // @synthesize clientThread=_clientThread;
- (void).cxx_destruct;
- (void)callBlock:(CDUnknownBlockType)arg1;
- (void)handleError:(id)arg1;
- (void)handleResponse:(id)arg1 data:(id)arg2;
- (void)requestH5JSSDKFile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestCDNFile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestLocalFile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopLoading;
- (void)startLoading;

@end

