//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, TFSTwitterAPICommandService;

@interface TFNTwitterUserDataSourceServiceCommandQueue : NSObject
{
    _Bool _scheduledNextProcessing;
    TFSTwitterAPICommandService *_commandService;
    double _interval;
    NSMutableArray *_pendingCommands;
    double _lastStartedTime;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool scheduledNextProcessing; // @synthesize scheduledNextProcessing=_scheduledNextProcessing;
@property(readonly, nonatomic) double lastStartedTime; // @synthesize lastStartedTime=_lastStartedTime;
@property(readonly, nonatomic) NSMutableArray *pendingCommands; // @synthesize pendingCommands=_pendingCommands;
@property(readonly, nonatomic) double interval; // @synthesize interval=_interval;
@property(readonly, nonatomic) TFSTwitterAPICommandService *commandService; // @synthesize commandService=_commandService;
- (void)private_scheduleNextProcessingWithRemainingInterval:(double)arg1;
- (void)private_processCommand;
- (void)addCommand:(id)arg1;
- (id)initWithCommandService:(id)arg1 interval:(double)arg2;
- (id)init;

@end

