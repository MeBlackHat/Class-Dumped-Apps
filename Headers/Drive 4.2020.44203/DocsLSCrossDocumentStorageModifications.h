//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet, NSString;

@interface DocsLSCrossDocumentStorageModifications : NSObject
{
    _Bool _allPendingCommandsPersisted;
    _Bool _hasPendingChanges;
    _Bool _isFastTrack;
    _Bool _isNotCreated;
    _Bool _needsSnapshot;
    NSString *_documentType;
    double _driveLastServerUpdatedTimestamp;
    NSArray *_fontFamilies;
    NSString *_jobset;
    double _lastServerUpdatedTimestampInMilliseconds;
    long long _syncFailures;
    NSMutableSet *_modifications;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *modifications; // @synthesize modifications=_modifications;
@property(nonatomic) long long syncFailures; // @synthesize syncFailures=_syncFailures;
@property(nonatomic) _Bool needsSnapshot; // @synthesize needsSnapshot=_needsSnapshot;
@property(nonatomic) double lastServerUpdatedTimestampInMilliseconds; // @synthesize lastServerUpdatedTimestampInMilliseconds=_lastServerUpdatedTimestampInMilliseconds;
@property(copy, nonatomic) NSString *jobset; // @synthesize jobset=_jobset;
@property(nonatomic) _Bool isNotCreated; // @synthesize isNotCreated=_isNotCreated;
@property(nonatomic) _Bool isFastTrack; // @synthesize isFastTrack=_isFastTrack;
@property(nonatomic) _Bool hasPendingChanges; // @synthesize hasPendingChanges=_hasPendingChanges;
@property(retain, nonatomic) NSArray *fontFamilies; // @synthesize fontFamilies=_fontFamilies;
@property(nonatomic) double driveLastServerUpdatedTimestamp; // @synthesize driveLastServerUpdatedTimestamp=_driveLastServerUpdatedTimestamp;
@property(copy, nonatomic) NSString *documentType; // @synthesize documentType=_documentType;
@property(nonatomic) _Bool allPendingCommandsPersisted; // @synthesize allPendingCommandsPersisted=_allPendingCommandsPersisted;
- (_Bool)hasModifications;
- (_Bool)hasSyncFailures;
- (_Bool)hasNeedsSnapshot;
- (_Bool)hasLastServerUpdatedTimestampInMilliseconds;
- (_Bool)hasJobset;
- (_Bool)hasIsNotCreated;
- (_Bool)hasIsFastTrack;
- (_Bool)hasHasPendingChanges;
- (_Bool)hasFontFamilies;
- (_Bool)hasDriveLastServerUpdatedTimestamp;
- (_Bool)hasDocumentType;
- (_Bool)hasAllPendingCommandsPersisted;
- (id)init;

@end

