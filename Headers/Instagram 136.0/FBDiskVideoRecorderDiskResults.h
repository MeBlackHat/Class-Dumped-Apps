//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FBDiskVideoRecorderDiskResults : NSObject
{
    _Bool _partiallyRecorded;
    NSArray *_recorderResults;
    NSArray *_fileURLs;
}

@property(readonly, nonatomic) _Bool partiallyRecorded; // @synthesize partiallyRecorded=_partiallyRecorded;
@property(readonly, copy, nonatomic) NSArray *fileURLs; // @synthesize fileURLs=_fileURLs;
@property(readonly, copy, nonatomic) NSArray *recorderResults; // @synthesize recorderResults=_recorderResults;
- (void).cxx_destruct;
- (id)initWithRecorderResults:(id)arg1 partiallyRecorded:(_Bool)arg2;

@end

