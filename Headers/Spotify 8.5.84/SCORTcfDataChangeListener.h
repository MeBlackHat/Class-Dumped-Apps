//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSUserDefaults;

@interface SCORTcfDataChangeListener : NSObject
{
    _Bool _isRegistered;
    NSArray *_keys;
    NSUserDefaults *_userDefaults;
    CDUnknownBlockType _onChangedCallback;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType onChangedCallback; // @synthesize onChangedCallback=_onChangedCallback;
@property(readonly, nonatomic) __weak NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, nonatomic) __weak NSArray *keys; // @synthesize keys=_keys;
@property(nonatomic) _Bool isRegistered; // @synthesize isRegistered=_isRegistered;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)tryUnregister;
- (void)tryRegister;
- (id)initWithUserDefaults:(id)arg1 forKeys:(id)arg2 andOnChangedCallback:(CDUnknownBlockType)arg3;

@end

