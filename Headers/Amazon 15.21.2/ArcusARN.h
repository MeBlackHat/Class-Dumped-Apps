//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ArcusARN : NSObject
{
    NSString *_partition;
    NSString *_service;
    NSString *_region;
    NSString *_accountId;
    NSString *_resourceType;
    NSString *_resource;
}

+ (void)validateARNFormat:(id)arg1;
+ (id)initFromString:(id)arg1;
@property(readonly, nonatomic) NSString *resource; // @synthesize resource=_resource;
@property(readonly, nonatomic) NSString *resourceType; // @synthesize resourceType=_resourceType;
@property(readonly, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property(readonly, nonatomic) NSString *region; // @synthesize region=_region;
@property(readonly, nonatomic) NSString *service; // @synthesize service=_service;
@property(readonly, nonatomic) NSString *partition; // @synthesize partition=_partition;
- (void).cxx_destruct;
- (id)stringRepresentation;
- (id)initWithPartition:(id)arg1 service:(id)arg2 region:(id)arg3 accountId:(id)arg4 resourceType:(id)arg5 resource:(id)arg6;

@end

