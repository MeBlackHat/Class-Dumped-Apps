//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SetupRequest.h"

@class NSArray;

@interface GetScannedNetworksRequest : SetupRequest
{
    NSArray *_networks;
}

+ (id)networksFromJSONArray:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *networks; // @synthesize networks=_networks;
- (long long)processResponseWithStatus:(long long)arg1 data:(id)arg2;
- (void)execute;
- (id)initWithDevice:(id)arg1;

@end

