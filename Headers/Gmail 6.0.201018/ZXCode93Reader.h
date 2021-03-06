//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZXOneDReader.h"

@class ZXIntArray;

@interface ZXCode93Reader : ZXOneDReader
{
    ZXIntArray *_counters;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ZXIntArray *counters; // @synthesize counters=_counters;
- (_Bool)checkOneChecksum:(id)arg1 checkPosition:(int)arg2 weightMax:(int)arg3 error:(id *)arg4;
- (_Bool)checkChecksums:(id)arg1 error:(id *)arg2;
- (id)decodeExtended:(id)arg1;
- (unsigned short)patternToChar:(int)arg1;
- (int)toPattern:(id)arg1;
- (id)findAsteriskPattern:(id)arg1;
- (id)decodeRow:(int)arg1 row:(id)arg2 hints:(id)arg3 error:(id *)arg4;
- (id)init;

@end

