//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSString, PhotosMCCollectionId;

@interface SFPDPhotosAcceptEnvelopeRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *authkey; // @dynamic authkey;
@property(retain, nonatomic) PhotosMCCollectionId *collectionId; // @dynamic collectionId;
@property(nonatomic) _Bool hasAuthkey; // @dynamic hasAuthkey;
@property(nonatomic) _Bool hasCollectionId; // @dynamic hasCollectionId;
@property(nonatomic) _Bool hasPin; // @dynamic hasPin;
@property(nonatomic) _Bool pin; // @dynamic pin;

@end

