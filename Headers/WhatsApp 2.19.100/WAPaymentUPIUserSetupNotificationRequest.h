//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAPaymentRequest.h"

@class WAUserJID;

@interface WAPaymentUPIUserSetupNotificationRequest : WAPaymentRequest
{
    WAUserJID *_jid;
}

+ (id)identifierForJID:(id)arg1;
@property(readonly, nonatomic) WAUserJID *jid; // @synthesize jid=_jid;
- (void).cxx_destruct;
- (void)executeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithJID:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

