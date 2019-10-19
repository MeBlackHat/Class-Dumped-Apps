//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLLocation, NSString, WamEventLocationPicker;

@protocol WALocationSearchEngine <NSObject>
@property(readonly, nonatomic) long long wamId;
- (void)stop;
- (void)fetchNextPage:(NSString *)arg1 completion:(void (^)(unsigned long long, NSError *, NSArray *, NSString *))arg2;
- (void)searchWithQuery:(NSString *)arg1 location:(CLLocation *)arg2 radius:(double)arg3 region:(CDStruct_26e8d939)arg4 fieldStats:(WamEventLocationPicker *)arg5 completion:(void (^)(unsigned long long, NSError *, NSArray *, NSString *))arg6;
@end

