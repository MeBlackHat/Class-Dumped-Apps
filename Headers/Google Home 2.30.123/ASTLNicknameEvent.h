//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface ASTLNicknameEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasNicknameEventType; // @dynamic hasNicknameEventType;
@property(nonatomic) _Bool hasPhoneLocale; // @dynamic hasPhoneLocale;
@property(nonatomic) int nicknameEventType; // @dynamic nicknameEventType;
@property(copy, nonatomic) NSString *phoneLocale; // @dynamic phoneLocale;

@end

