//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;
@protocol WAServerDate;

@interface XMPPParticipantAddRequest : NSObject
{
    NSString *_inviteCode;
    NSDate<WAServerDate> *_expirationDate;
}

+ (id)participantAddRequestFromAddRequestElement:(id)arg1;
@property(retain, nonatomic) NSDate<WAServerDate> *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSString *inviteCode; // @synthesize inviteCode=_inviteCode;
- (void).cxx_destruct;

@end

