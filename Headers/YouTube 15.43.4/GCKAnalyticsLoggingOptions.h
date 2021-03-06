//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSCopying-Protocol.h>

@interface GCKAnalyticsLoggingOptions : NSObject <NSCopying>
{
    _Bool _errorInfoReportEnabled;
    double _mDNSRequestCounterInterval;
    double _mDNSRequestStatisticsSampleRate;
    double _errorInfoReportInterval;
    double _errorInfoReportSampleRate;
}

@property(nonatomic) double errorInfoReportSampleRate; // @synthesize errorInfoReportSampleRate=_errorInfoReportSampleRate;
@property(nonatomic) double errorInfoReportInterval; // @synthesize errorInfoReportInterval=_errorInfoReportInterval;
@property(nonatomic) _Bool errorInfoReportEnabled; // @synthesize errorInfoReportEnabled=_errorInfoReportEnabled;
@property(nonatomic) double mDNSRequestStatisticsSampleRate; // @synthesize mDNSRequestStatisticsSampleRate=_mDNSRequestStatisticsSampleRate;
@property(nonatomic) double mDNSRequestCounterInterval; // @synthesize mDNSRequestCounterInterval=_mDNSRequestCounterInterval;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

