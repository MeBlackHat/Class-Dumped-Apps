//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WAEphemeralSetting : NSObject
{
    unsigned int _ephemeralDuration;
    unsigned long long _settingTimestamp;
}

@property(readonly, nonatomic) unsigned long long settingTimestamp; // @synthesize settingTimestamp=_settingTimestamp;
@property(readonly, nonatomic) unsigned int ephemeralDuration; // @synthesize ephemeralDuration=_ephemeralDuration;
- (id)initWithEphemeralDuration:(int)arg1 settingTimestamp:(long long)arg2;

@end

