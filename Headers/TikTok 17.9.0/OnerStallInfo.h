//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OnerStallInfo : NSObject
{
    long long _stallCount;
    long long _stallDuration;
    long long _statsInterval;
    NSString *_userId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) long long statsInterval; // @synthesize statsInterval=_statsInterval;
@property(nonatomic) long long stallDuration; // @synthesize stallDuration=_stallDuration;
@property(nonatomic) long long stallCount; // @synthesize stallCount=_stallCount;

@end

