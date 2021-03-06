//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnalyticsFramework/NSCoding-Protocol.h>
#import <AnalyticsFramework/NSCopying-Protocol.h>
#import <AnalyticsFramework/TBase-Protocol.h>

@class NSString;

@interface AnalyticsAdBrandSafety : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _tierIsSet;
    _Bool _tier_reason_rall;
    _Bool _tier_reason_rallIsSet;
    _Bool _tier_reason_sort;
    _Bool _tier_reason_sortIsSet;
    _Bool _tier_reason_whitelist;
    _Bool _tier_reason_whitelistIsSet;
    NSString *_tier;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool tier_reason_whitelistIsSet; // @synthesize tier_reason_whitelistIsSet=_tier_reason_whitelistIsSet;
@property(nonatomic) _Bool tier_reason_whitelist; // @synthesize tier_reason_whitelist=_tier_reason_whitelist;
@property(nonatomic) _Bool tier_reason_sortIsSet; // @synthesize tier_reason_sortIsSet=_tier_reason_sortIsSet;
@property(nonatomic) _Bool tier_reason_sort; // @synthesize tier_reason_sort=_tier_reason_sort;
@property(nonatomic) _Bool tier_reason_rallIsSet; // @synthesize tier_reason_rallIsSet=_tier_reason_rallIsSet;
@property(nonatomic) _Bool tier_reason_rall; // @synthesize tier_reason_rall=_tier_reason_rall;
@property(nonatomic) _Bool tierIsSet; // @synthesize tierIsSet=_tierIsSet;
@property(copy, nonatomic) NSString *tier; // @synthesize tier=_tier;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetTier_reason_whitelist;
- (void)unsetTier_reason_sort;
- (void)unsetTier_reason_rall;
- (void)unsetTier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTier:(id)arg1 tier_reason_rall:(_Bool)arg2 tier_reason_sort:(_Bool)arg3 tier_reason_whitelist:(_Bool)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

