//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString;

@interface SPTLogin5LoginOk : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *accessToken; // @dynamic accessToken;
@property(nonatomic) int accessTokenExpiresIn; // @dynamic accessTokenExpiresIn;
@property(copy, nonatomic) NSData *storedCredential; // @dynamic storedCredential;
@property(copy, nonatomic) NSString *username; // @dynamic username;

@end

