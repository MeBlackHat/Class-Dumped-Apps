//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface BVDisplayResponse : NSObject
{
    NSNumber *_offset;
    NSString *_locale;
    NSNumber *_totalResults;
    NSNumber *_limit;
}

@property(retain) NSNumber *limit; // @synthesize limit=_limit;
@property(retain) NSNumber *totalResults; // @synthesize totalResults=_totalResults;
@property(retain) NSString *locale; // @synthesize locale=_locale;
@property(retain) NSNumber *offset; // @synthesize offset=_offset;
- (void).cxx_destruct;
- (id)createResult:(id)arg1 includes:(id)arg2;
- (id)getIncludes:(id)arg1;
- (id)initWithApiResponse:(id)arg1;

@end

