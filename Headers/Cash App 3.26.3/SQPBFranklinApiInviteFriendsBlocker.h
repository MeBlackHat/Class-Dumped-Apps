//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SQPBFranklinApiContactAccessPreparationScreen, SQPBFranklinApiInviteFriendsOpportunityScreen, SQPBFranklinApiInviteFriendsScreen;

@interface SQPBFranklinApiInviteFriendsBlocker : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SQPBFranklinApiContactAccessPreparationScreen *contactAccessPreparationScreen; // @dynamic contactAccessPreparationScreen;
@property(nonatomic) _Bool hasContactAccessPreparationScreen; // @dynamic hasContactAccessPreparationScreen;
@property(nonatomic) _Bool hasInviteFriendsOpportunityScreen; // @dynamic hasInviteFriendsOpportunityScreen;
@property(nonatomic) _Bool hasInviteFriendsScreen; // @dynamic hasInviteFriendsScreen;
@property(retain, nonatomic) SQPBFranklinApiInviteFriendsOpportunityScreen *inviteFriendsOpportunityScreen; // @dynamic inviteFriendsOpportunityScreen;
@property(retain, nonatomic) SQPBFranklinApiInviteFriendsScreen *inviteFriendsScreen; // @dynamic inviteFriendsScreen;

@end

