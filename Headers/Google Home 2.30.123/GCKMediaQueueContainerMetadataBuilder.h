//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface GCKMediaQueueContainerMetadataBuilder : NSObject
{
    long long _containerType;
    NSString *_title;
    NSArray *_sections;
    double _containerDuration;
    NSArray *_containerImages;
    NSArray *_authors;
    NSArray *_narrators;
    NSString *_publisher;
    NSString *_releaseDate;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(copy, nonatomic) NSString *publisher; // @synthesize publisher=_publisher;
@property(copy, nonatomic) NSArray *narrators; // @synthesize narrators=_narrators;
@property(copy, nonatomic) NSArray *authors; // @synthesize authors=_authors;
@property(copy, nonatomic) NSArray *containerImages; // @synthesize containerImages=_containerImages;
@property(nonatomic) double containerDuration; // @synthesize containerDuration=_containerDuration;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long containerType; // @synthesize containerType=_containerType;
- (id)build;
- (id)initWithContainerMetadata:(id)arg1;
- (id)initWithContainerType:(long long)arg1;

@end

