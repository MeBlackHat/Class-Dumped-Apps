//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString, NSURL, SPTConcertsDate, SPTConcertsDateFormatter;

@interface SPTConcertsConcertModel : NSObject
{
    _Bool _isRecommendedToUser;
    _Bool _isFestival;
    NSString *_title;
    NSString *_subtitle;
    NSArray *_artists;
    NSDate *_date;
    SPTConcertsDate *_startDate;
    NSString *_venue;
    NSString *_venueLocation;
    NSString *_eventID;
    NSURL *_ticketingPartnerURL;
    NSString *_festivalTitle;
    SPTConcertsDateFormatter *_dateFormatter;
}

- (void).cxx_destruct;
@property(nonatomic) __weak SPTConcertsDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(readonly, copy, nonatomic) NSString *festivalTitle; // @synthesize festivalTitle=_festivalTitle;
@property(readonly, nonatomic) _Bool isFestival; // @synthesize isFestival=_isFestival;
@property(readonly, nonatomic) _Bool isRecommendedToUser; // @synthesize isRecommendedToUser=_isRecommendedToUser;
@property(readonly, nonatomic) NSURL *ticketingPartnerURL; // @synthesize ticketingPartnerURL=_ticketingPartnerURL;
@property(readonly, copy, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
@property(readonly, copy, nonatomic) NSString *venueLocation; // @synthesize venueLocation=_venueLocation;
@property(readonly, copy, nonatomic) NSString *venue; // @synthesize venue=_venue;
@property(readonly, nonatomic) SPTConcertsDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, copy, nonatomic) NSArray *artists; // @synthesize artists=_artists;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *dayText;
@property(readonly, copy, nonatomic) NSString *monthText;
- (id)artistsFromDictionary:(id)arg1;
- (id)dateFromDictionary:(id)arg1 withKey:(id)arg2;
- (id)initWithDictionary:(id)arg1 dateFormatter:(id)arg2;

@end

