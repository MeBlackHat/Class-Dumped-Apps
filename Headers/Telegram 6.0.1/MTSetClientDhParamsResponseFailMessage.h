//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MtProtoKit/MTSetClientDhParamsResponseMessage.h>

@class NSData;

@interface MTSetClientDhParamsResponseFailMessage : MTSetClientDhParamsResponseMessage
{
    NSData *_nextNonceHash3;
}

@property(readonly, nonatomic) NSData *nextNonceHash3; // @synthesize nextNonceHash3=_nextNonceHash3;
- (void).cxx_destruct;
- (id)initWithNonce:(id)arg1 serverNonce:(id)arg2 nextNonceHash3:(id)arg3;

@end

