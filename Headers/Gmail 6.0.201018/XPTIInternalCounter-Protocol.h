//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"
#import "XPTClearcutLongHistogram-Protocol.h"
#import "XPTNameHashComparable-Protocol.h"

@class ComGoogleWirelessAndroidPlayPlaylogProtoCountersProto_Counter;

@protocol XPTIInternalCounter <XPTClearcutLongHistogram, XPTNameHashComparable, JavaObject>
- (long long)peekValueWithLong:(long long)arg1;
- (ComGoogleWirelessAndroidPlayPlaylogProtoCountersProto_Counter *)toProtoAndClear;
- (_Bool)hasData;
@end

