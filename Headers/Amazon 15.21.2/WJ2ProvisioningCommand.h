//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface WJ2ProvisioningCommand : NSObject
{
    NSData *_uuid;
    NSData *_payload;
}

@property(retain, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(retain, nonatomic) NSData *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)serialize:(id)arg1;
- (id)init:(id)arg1 payload:(id)arg2;

@end

