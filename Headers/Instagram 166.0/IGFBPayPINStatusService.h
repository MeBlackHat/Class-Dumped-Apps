//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBPayAuthTicketIDCache, IGUserSession;

@interface IGFBPayPINStatusService : NSObject
{
    IGUserSession *_userSession;
    _Bool _shouldUseSharedQuery;
    FBPayAuthTicketIDCache *_authTicketIDCache;
}

- (void).cxx_destruct;
- (void)pinStatusWithAuthTicketIds:(id)arg1 loggingSessionID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithUserSession:(id)arg1;

@end

