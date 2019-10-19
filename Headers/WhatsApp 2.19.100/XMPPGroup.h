//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSError, NSString, WAGroupJID, WAUserJID;
@protocol WAServerDate;

@interface XMPPGroup : NSObject
{
    _Bool _locked;
    _Bool _announcementOnly;
    _Bool _frequentlyForwardedRestricted;
    CDStruct_0714743d _expectedValues;
    WAGroupJID *_jid;
    NSString *_subject;
    WAUserJID *_creatorJID;
    NSDate<WAServerDate> *_creationDate;
    NSDate<WAServerDate> *_subjectTimestamp;
    WAUserJID *_subjectOwnerJID;
    NSError *_groupDescriptionError;
    NSString *_groupDescriptionID;
    WAUserJID *_groupDescriptionOwnerJID;
    NSDate<WAServerDate> *_groupDescriptionTimestamp;
    NSDictionary *_invitedParticipantJIDs;
    long long _size;
    NSString *_groupDescription;
    NSArray *_participants;
}

+ (id)groupFromGroupElement:(id)arg1 expectedValues:(CDStruct_0714743d)arg2 expectedParticipantJIDs:(id)arg3;
+ (id)groupFromGroupElement:(id)arg1 expectedValues:(CDStruct_0714743d)arg2;
+ (id)groupFromGroupElement:(id)arg1;
@property(nonatomic) CDStruct_0714743d expectedValues; // @synthesize expectedValues=_expectedValues;
@property(copy, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(copy, nonatomic) NSString *groupDescription; // @synthesize groupDescription=_groupDescription;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(readonly, nonatomic) NSDictionary *invitedParticipantJIDs; // @synthesize invitedParticipantJIDs=_invitedParticipantJIDs;
@property(retain, nonatomic) NSDate<WAServerDate> *groupDescriptionTimestamp; // @synthesize groupDescriptionTimestamp=_groupDescriptionTimestamp;
@property(retain, nonatomic) WAUserJID *groupDescriptionOwnerJID; // @synthesize groupDescriptionOwnerJID=_groupDescriptionOwnerJID;
@property(copy, nonatomic) NSString *groupDescriptionID; // @synthesize groupDescriptionID=_groupDescriptionID;
@property(retain, nonatomic) NSError *groupDescriptionError; // @synthesize groupDescriptionError=_groupDescriptionError;
@property(nonatomic) _Bool frequentlyForwardedRestricted; // @synthesize frequentlyForwardedRestricted=_frequentlyForwardedRestricted;
@property(nonatomic) _Bool announcementOnly; // @synthesize announcementOnly=_announcementOnly;
@property(nonatomic) _Bool locked; // @synthesize locked=_locked;
@property(retain, nonatomic) WAUserJID *subjectOwnerJID; // @synthesize subjectOwnerJID=_subjectOwnerJID;
@property(retain, nonatomic) NSDate<WAServerDate> *subjectTimestamp; // @synthesize subjectTimestamp=_subjectTimestamp;
@property(retain, nonatomic) NSDate<WAServerDate> *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) WAUserJID *creatorJID; // @synthesize creatorJID=_creatorJID;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) WAGroupJID *jid; // @synthesize jid=_jid;
- (void).cxx_destruct;
- (void)addParticipantsFromGroupElement:(id)arg1 expectedParticipantJIDs:(id)arg2;
@property(readonly, nonatomic) _Bool hasParticipants;
- (void)addGroupDescriptionFromGroupElement:(id)arg1;
@property(readonly, nonatomic) _Bool hasGroupDescriptionValue;

@end

