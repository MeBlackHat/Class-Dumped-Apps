//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface UjetRZDBCoalesce : NSObject
{
    long long _beginCount;
    NSMutableArray *_notifications;
}

+ (void)setCurrentCoalesce:(id)arg1;
+ (id)currentCoalesce;
+ (void)coalesceBlock:(CDUnknownBlockType)arg1;
+ (void)commit;
+ (void)begin;
@property(readonly, nonatomic) NSMutableArray *notifications; // @synthesize notifications=_notifications;
@property(nonatomic) long long beginCount; // @synthesize beginCount=_beginCount;
- (void).cxx_destruct;
- (void)addNotification:(id)arg1;
- (id)init;

@end

