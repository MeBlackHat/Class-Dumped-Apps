//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WAMessageRetrySendTaskState : NSObject
{
    NSString *_key;
    unsigned long long _count;
}

@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)initWithRetryKey:(id)arg1 retryCount:(unsigned long long)arg2;

@end

