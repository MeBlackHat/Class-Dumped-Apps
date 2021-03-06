//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/FNROBaseObject.h>

@class NSArray, NSString;

@interface FNROProvider : FNROBaseObject
{
    NSString *_type;
    NSString *_source_type;
    NSString *_url;
    NSString *_title;
    NSString *_video_url;
    NSString *_image_url;
    NSString *_author;
    NSArray *_tags;
    NSString *_trackback_url;
}

+ (id)objectMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *trackback_url; // @synthesize trackback_url=_trackback_url;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSString *author; // @synthesize author=_author;
@property(retain, nonatomic) NSString *image_url; // @synthesize image_url=_image_url;
@property(retain, nonatomic) NSString *video_url; // @synthesize video_url=_video_url;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *source_type; // @synthesize source_type=_source_type;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;

@end

