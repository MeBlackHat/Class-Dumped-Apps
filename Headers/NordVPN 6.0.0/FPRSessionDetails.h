//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface FPRSessionDetails : NSObject
{
    NSString *_sessionId;
    unsigned long long _options;
    NSDate *_sessionCreationTime;
}

@property(retain, nonatomic) NSDate *sessionCreationTime; // @synthesize sessionCreationTime=_sessionCreationTime;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
- (_Bool)isVerbose;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long sessionLengthInMinutes;
- (id)initWithSessionId:(id)arg1 options:(unsigned long long)arg2;

@end

