//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTApplicationScopeFeatureFlagSignalFactory-Protocol.h"

@class NSString, NSUserDefaults;

@interface SPTApplicationScopeFeatureFlagSignalFactoryImplementation : NSObject <SPTApplicationScopeFeatureFlagSignalFactory>
{
    NSUserDefaults *_userDefaults;
}

+ (CDUnknownBlockType)defaultFeatureFlagSignalMapper;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (id)signal:(id)arg1 withDefaultState:(long long)arg2;
- (id)signal:(id)arg1 withOverride:(id)arg2;
- (id)signalWithInverse:(id)arg1;
- (id)signalWithAny:(id)arg1;
- (id)signalWithAll:(id)arg1;
- (id)userDefaultsSignalWithKey:(id)arg1 mapper:(CDUnknownBlockType)arg2;
- (id)userDefaultsSignalWithKey:(id)arg1;
- (id)writeableSignal;
- (id)constantSignalWithState:(long long)arg1;
- (id)initWithUserDefaults:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

