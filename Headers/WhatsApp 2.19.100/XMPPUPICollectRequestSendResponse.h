//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMPPUPICollectRequestSendResponse : NSObject
{
    long long _amount_1000;
    NSString *_clTransactionId;
    NSString *_currency;
    NSString *_deviceId;
    NSString *_note;
    NSString *_receiverHandle;
    NSString *_senderHandle;
}

@property(copy, nonatomic) NSString *senderHandle; // @synthesize senderHandle=_senderHandle;
@property(copy, nonatomic) NSString *receiverHandle; // @synthesize receiverHandle=_receiverHandle;
@property(copy, nonatomic) NSString *note; // @synthesize note=_note;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(copy, nonatomic) NSString *clTransactionId; // @synthesize clTransactionId=_clTransactionId;
@property(nonatomic) long long amount_1000; // @synthesize amount_1000=_amount_1000;
- (void).cxx_destruct;
- (id)description;

@end

