//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASTCTProvider, NSString;

@interface ASTAPITakePhotoArgs : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int cameraType; // @dynamic cameraType;
@property(nonatomic) int flashMode; // @dynamic flashMode;
@property(nonatomic) _Bool hasCameraType; // @dynamic hasCameraType;
@property(nonatomic) _Bool hasFlashMode; // @dynamic hasFlashMode;
@property(nonatomic) _Bool hasMode; // @dynamic hasMode;
@property(nonatomic) _Bool hasOpenOnly; // @dynamic hasOpenOnly;
@property(nonatomic) _Bool hasProvider; // @dynamic hasProvider;
@property(nonatomic) _Bool hasSelfTimerDelayMs; // @dynamic hasSelfTimerDelayMs;
@property(nonatomic) _Bool hasSubMode; // @dynamic hasSubMode;
@property(copy, nonatomic) NSString *mode; // @dynamic mode;
@property(nonatomic) _Bool openOnly; // @dynamic openOnly;
@property(retain, nonatomic) ASTCTProvider *provider; // @dynamic provider;
@property(nonatomic) long long selfTimerDelayMs; // @dynamic selfTimerDelayMs;
@property(copy, nonatomic) NSString *subMode; // @dynamic subMode;

@end

