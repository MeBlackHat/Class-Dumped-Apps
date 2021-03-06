//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/SMAModelObject.h>

@class NSDictionary, NSURL;

@interface SMANativeAdEvent : SMAModelObject
{
    unsigned long long _eventType;
    unsigned long long _methodType;
    NSURL *_url;
    NSDictionary *_customdata;
    NSDictionary *_extension;
}

+ (id)codingKeys;
@property(copy, nonatomic) NSDictionary *extension; // @synthesize extension=_extension;
@property(copy, nonatomic) NSDictionary *customdata; // @synthesize customdata=_customdata;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) unsigned long long methodType; // @synthesize methodType=_methodType;
@property(nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
- (void).cxx_destruct;
- (_Bool)isValid;
- (void)applyDefaultValues;
- (id)initWithDictionary:(id)arg1;

@end

