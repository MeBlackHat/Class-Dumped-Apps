//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface MPHTTPNetworkTaskData : NSObject
{
    NSMutableData *_responseData;
    CDUnknownBlockType _responseHandler;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _shouldRedirectWithNewRequest;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType shouldRedirectWithNewRequest; // @synthesize shouldRedirectWithNewRequest=_shouldRedirectWithNewRequest;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
- (id)initWithResponseHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2 shouldRedirectWithNewRequest:(CDUnknownBlockType)arg3;
- (id)init;

@end

