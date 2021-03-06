//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MonoClockTimestamp, NSMutableArray;

@interface LicenseEventAudit : NSObject
{
    MonoClockTimestamp *_licenseEventLDLStart;
    MonoClockTimestamp *_licenseEventLDLDelivered;
    MonoClockTimestamp *_licenseEventSDLStart;
    MonoClockTimestamp *_licenseEventSDLEnd;
    MonoClockTimestamp *_licenseEventSDLDelivered;
    NSMutableArray *_licenseRequestTimingsLDL;
    NSMutableArray *_licenseRequestTimingsSDL;
    NSMutableArray *_licenseUpgradeTimings;
}

@property(retain, nonatomic) NSMutableArray *licenseUpgradeTimings; // @synthesize licenseUpgradeTimings=_licenseUpgradeTimings;
@property(retain, nonatomic) NSMutableArray *licenseRequestTimingsSDL; // @synthesize licenseRequestTimingsSDL=_licenseRequestTimingsSDL;
@property(retain, nonatomic) NSMutableArray *licenseRequestTimingsLDL; // @synthesize licenseRequestTimingsLDL=_licenseRequestTimingsLDL;
@property(retain, nonatomic) MonoClockTimestamp *licenseEventSDLDelivered; // @synthesize licenseEventSDLDelivered=_licenseEventSDLDelivered;
@property(retain, nonatomic) MonoClockTimestamp *licenseEventSDLEnd; // @synthesize licenseEventSDLEnd=_licenseEventSDLEnd;
@property(retain, nonatomic) MonoClockTimestamp *licenseEventSDLStart; // @synthesize licenseEventSDLStart=_licenseEventSDLStart;
@property(retain, nonatomic) MonoClockTimestamp *licenseEventLDLDelivered; // @synthesize licenseEventLDLDelivered=_licenseEventLDLDelivered;
@property(retain, nonatomic) MonoClockTimestamp *licenseEventLDLStart; // @synthesize licenseEventLDLStart=_licenseEventLDLStart;
- (void).cxx_destruct;
- (unsigned long long)longestUpgradeTime;
- (id)auditDictionary;
- (void)recordEvent:(unsigned long long)arg1 timestamp:(id)arg2;
- (id)init;

@end

