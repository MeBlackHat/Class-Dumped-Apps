//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PowerLiftKit/PowerLiftUserAccount.h>

@class NSString;

@interface PowerLiftGenericUserAccount : PowerLiftUserAccount
{
    NSString *_organizationID;
    NSString *_userID;
}

- (void).cxx_destruct;
@property(readonly) NSString *userID; // @synthesize userID=_userID;
@property(readonly) NSString *organizationID; // @synthesize organizationID=_organizationID;
- (id)incidentAccounts;
- (id)initWithOrganizationID:(id)arg1 userID:(id)arg2;

@end

