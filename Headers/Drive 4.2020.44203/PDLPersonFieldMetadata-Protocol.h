//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol PDLPersonFieldMetadata <NSCopying, NSCoding, NSObject>
@property(readonly, nonatomic) NSString *encodedProfileId;
@property(readonly, nonatomic) _Bool hasDeviceData;
@property(readonly, nonatomic) _Bool hasCloudData;
@property(readonly, nonatomic) _Bool primary;
@property(readonly, nonatomic) long long category;
@property(readonly, nonatomic) long long containerType;
@property(readonly, nonatomic) NSArray *matchingInfoArray;
@end

