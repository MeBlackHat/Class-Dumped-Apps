//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SendBirdSDK/SBDUserMessageParams.h>

@class NSString;

@interface SBDScheduledUserMessageParams : SBDUserMessageParams
{
    NSString *_scheduledDateTimeString;
    NSString *_scheduledTimezone;
}

@property(retain) NSString *scheduledTimezone; // @synthesize scheduledTimezone=_scheduledTimezone;
@property(retain) NSString *scheduledDateTimeString; // @synthesize scheduledDateTimeString=_scheduledDateTimeString;
- (void).cxx_destruct;
- (_Bool)setScheduleWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 min:(long long)arg5 timezone:(id)arg6;
- (id)initWithMessage:(id)arg1 year:(long long)arg2 month:(long long)arg3 day:(long long)arg4 hour:(long long)arg5 min:(long long)arg6 timezone:(id)arg7;

@end

