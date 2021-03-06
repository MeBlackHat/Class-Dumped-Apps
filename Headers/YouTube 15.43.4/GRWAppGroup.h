//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface GRWAppGroup : NSObject
{
    NSURL *_containerURLForCurrentAppGroup;
    unsigned long long _currentAppGroupType;
}

+ (id)containerURLForCommonAppGroup;
+ (id)commonAppGroupIdentifier;
+ (unsigned long long)commonAppGroupType;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long currentAppGroupType; // @synthesize currentAppGroupType=_currentAppGroupType;
@property(retain, nonatomic) NSURL *containerURLForCurrentAppGroup; // @synthesize containerURLForCurrentAppGroup=_containerURLForCurrentAppGroup;
- (id)appGroupIdentifierForType:(unsigned long long)arg1;
- (void)logSetupError;
- (void)determineAppGroup;
- (id)init;

@end

