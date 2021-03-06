//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@class GMSDASHConnection, GMSDASHRequestGroupID, GMSx_GTMSessionFetcher, NSArray;

@interface GMSDASHStreamingBody : NSData
{
    GMSDASHConnection *_connection;
    GMSDASHRequestGroupID *_groupID;
    NSData *_payload;
    _Bool _ignoreRequests;
    NSArray *_requests;
    GMSx_GTMSessionFetcher *_fetcher;
}

- (void).cxx_destruct;
@property __weak GMSx_GTMSessionFetcher *fetcher; // @synthesize fetcher=_fetcher;
- (void)logRequestPayload;
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;
- (const void *)bytes;
- (unsigned long long)length;
- (void)buildPayload;
- (id)collectRequests;
- (void)releaseRequests;
@property(readonly, copy) NSArray *sentRequests;
- (id)initWithConnection:(id)arg1 groupID:(id)arg2 ignoreRequests:(_Bool)arg3;

@end

