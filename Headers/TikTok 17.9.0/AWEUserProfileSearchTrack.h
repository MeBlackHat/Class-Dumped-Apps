//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface AWEUserProfileSearchTrack : NSObject
{
    _Bool _fromTopButton;
    NSDictionary *_trackerParam;
    NSString *_searchResultId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool fromTopButton; // @synthesize fromTopButton=_fromTopButton;
@property(retain, nonatomic) NSString *searchResultId; // @synthesize searchResultId=_searchResultId;
@property(retain, nonatomic) NSDictionary *trackerParam; // @synthesize trackerParam=_trackerParam;
- (id)searchFollowEvent;

@end

