//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber;

@interface PINDiskCacheMetadata : NSObject
{
    NSDate *_createdDate;
    NSDate *_lastModifiedDate;
    NSNumber *_size;
    double _ageLimit;
}

- (void).cxx_destruct;
@property(nonatomic) double ageLimit; // @synthesize ageLimit=_ageLimit;
@property(retain, nonatomic) NSNumber *size; // @synthesize size=_size;
@property(retain, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(retain, nonatomic) NSDate *createdDate; // @synthesize createdDate=_createdDate;

@end

