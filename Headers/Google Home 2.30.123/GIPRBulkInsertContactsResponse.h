//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface GIPRBulkInsertContactsResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *insertedPersonArray; // @dynamic insertedPersonArray;
@property(readonly, nonatomic) unsigned long long insertedPersonArray_Count; // @dynamic insertedPersonArray_Count;
@property(copy, nonatomic) NSString *revertToken; // @dynamic revertToken;

@end

