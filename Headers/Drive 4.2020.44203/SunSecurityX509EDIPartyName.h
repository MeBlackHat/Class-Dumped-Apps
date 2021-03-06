//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SunSecurityX509GeneralNameInterface-Protocol.h"

@class NSString;

@interface SunSecurityX509EDIPartyName : NSObject <SunSecurityX509GeneralNameInterface>
{
    NSString *assigner_;
    NSString *party_;
    int myhash_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (int)subtreeDepth;
- (int)constrainsWithSunSecurityX509GeneralNameInterface:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)getPartyName;
- (id)getAssignerName;
- (void)encodeWithSunSecurityUtilDerOutputStream:(id)arg1;
- (int)getType;
- (id)initWithSunSecurityUtilDerValue:(id)arg1;
- (id)initWithNSString:(id)arg1;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

