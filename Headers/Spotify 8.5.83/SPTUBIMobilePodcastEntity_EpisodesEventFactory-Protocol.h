//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventAbsoluteLocation, SPTUBIEventLocation, SPTUBIMobilePodcastEntity_Episodes_EmptyEventFactory, SPTUBIMobilePodcastEntity_Episodes_HeaderEventFactory;

@protocol SPTUBIMobilePodcastEntity_EpisodesEventFactory <NSObject>
- (id <SPTUBIMobilePodcastEntity_Episodes_EmptyEventFactory>)emptyFactory;
- (id <SPTUBIMobilePodcastEntity_Episodes_HeaderEventFactory>)headerFactory;
- (id <SPTUBIEventAbsoluteLocation>)absoluteLocation;
- (id <SPTUBIEventLocation>)_location;
@end

