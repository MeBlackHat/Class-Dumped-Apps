//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface GSCNotificationAppPayload : NSObject <NSCopying>
{
    NSData *_data;
    NSString *_dataDescription;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *dataDescription; // @synthesize dataDescription=_dataDescription;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

