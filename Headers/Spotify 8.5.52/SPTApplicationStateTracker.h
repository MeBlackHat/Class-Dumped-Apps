//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPTApplicationStateTracker : NSObject
{
    struct mutex _invalidationMutex;
    struct ApplicationStateTracker *_applicationStateTracker;
}

@property(nonatomic) struct ApplicationStateTracker *applicationStateTracker; // @synthesize applicationStateTracker=_applicationStateTracker;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setApplicationState:(long long)arg1;
- (void)invalidate;
- (id)initWithApplicationStateTracker:(struct ApplicationStateTracker *)arg1;

@end

