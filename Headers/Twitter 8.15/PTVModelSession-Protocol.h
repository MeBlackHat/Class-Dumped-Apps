//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@protocol PTVModelSessionTask, PTVModelSessionTaskContext;

@protocol PTVModelSession <NSObject>
- (void)ptv_decrementMode:(long long)arg1;
- (void)ptv_incrementMode:(long long)arg1;
- (id <PTVModelSessionTask>)ptv_taskWithMode:(long long)arg1 context:(id <PTVModelSessionTaskContext>)arg2;
@end

