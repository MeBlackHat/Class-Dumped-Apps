//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AndroidCompatAnnotationUnsupportedAppUsage-Protocol.h"

@class NSString;

@interface AndroidCompatAnnotationUnsupportedAppUsage : NSObject <AndroidCompatAnnotationUnsupportedAppUsage>
{
    long long trackingBug_;
    int maxTargetSdk_;
    NSString *implicitMember_;
    NSString *publicAlternatives_;
    NSString *overrideSourcePosition_;
    NSString *expectedSignature_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)expectedSignatureDefault;
+ (id)overrideSourcePositionDefault;
+ (id)publicAlternativesDefault;
+ (id)implicitMemberDefault;
+ (int)maxTargetSdkDefault;
+ (long long)trackingBugDefault;
@property(readonly) NSString *expectedSignature; // @synthesize expectedSignature=expectedSignature_;
@property(readonly) NSString *overrideSourcePosition; // @synthesize overrideSourcePosition=overrideSourcePosition_;
@property(readonly) NSString *publicAlternatives; // @synthesize publicAlternatives=publicAlternatives_;
@property(readonly) NSString *implicitMember; // @synthesize implicitMember=implicitMember_;
@property(readonly) int maxTargetSdk; // @synthesize maxTargetSdk=maxTargetSdk_;
@property(readonly) long long trackingBug; // @synthesize trackingBug=trackingBug_;
- (void)dealloc;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)annotationType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

