//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDKHandoffBehavior, NSNumber, NSString;
@protocol SSOIdentity;

@interface GDKTeamDrivesParamsBuilder : NSObject
{
    _Bool _disableUnavailableTeamDriveMoveDestinations;
    _Bool _disableCreateTeamDrives;
    GDKHandoffBehavior *_handoffBehavior_15;
    id <SSOIdentity> _identity;
    unsigned long long _hiddenTeamDrivesPromoMinTeamDriveCount;
    NSString *_searchPlaceholderText;
    unsigned long long _headerMode;
    NSNumber *_handoffBehavior_hazzer;
}

+ (id)builderFromExistingObject:(id)arg1;
+ (id)builderWithIdentity:(id)arg1 searchPlaceholderText:(id)arg2;
@property(retain, nonatomic) NSNumber *handoffBehavior_hazzer; // @synthesize handoffBehavior_hazzer=_handoffBehavior_hazzer;
@property(nonatomic) unsigned long long headerMode; // @synthesize headerMode=_headerMode;
@property(copy, nonatomic) NSString *searchPlaceholderText; // @synthesize searchPlaceholderText=_searchPlaceholderText;
@property(nonatomic) unsigned long long hiddenTeamDrivesPromoMinTeamDriveCount; // @synthesize hiddenTeamDrivesPromoMinTeamDriveCount=_hiddenTeamDrivesPromoMinTeamDriveCount;
@property(nonatomic) _Bool disableCreateTeamDrives; // @synthesize disableCreateTeamDrives=_disableCreateTeamDrives;
@property(nonatomic) _Bool disableUnavailableTeamDriveMoveDestinations; // @synthesize disableUnavailableTeamDriveMoveDestinations=_disableUnavailableTeamDriveMoveDestinations;
@property(retain, nonatomic) id <SSOIdentity> identity; // @synthesize identity=_identity;
- (void).cxx_destruct;
- (id)build;
@property(retain, nonatomic) GDKHandoffBehavior *handoffBehavior; // @synthesize handoffBehavior=_handoffBehavior_15;

@end

