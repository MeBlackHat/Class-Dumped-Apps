//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPAction.h"

@class NSString;

@interface SPTSleepTimerAction : SPAction
{
    _Bool _isTimerActivated;
    NSString *_actionTitle;
    long long _actionIcon;
    CDUnknownBlockType _task;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType task; // @synthesize task=_task;
@property(nonatomic) _Bool isTimerActivated; // @synthesize isTimerActivated=_isTimerActivated;
@property(nonatomic) long long actionIcon; // @synthesize actionIcon=_actionIcon;
@property(copy, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
- (id)execute:(id)arg1;
- (id)logEventName;
- (id)iconColor;
- (long long)icon;
- (id)title;
- (id)initWithTitle:(id)arg1 icon:(long long)arg2 isTimerActivated:(_Bool)arg3 logContext:(id)arg4 task:(CDUnknownBlockType)arg5;

@end

