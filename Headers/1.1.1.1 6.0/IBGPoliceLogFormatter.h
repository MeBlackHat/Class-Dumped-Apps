//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter;

@interface IBGPoliceLogFormatter : NSObject
{
    NSDateFormatter *_dateFormatter;
}

+ (id)stringFromModule:(long long)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
- (void).cxx_destruct;
- (id)formatForInternalLog:(id)arg1 withModule:(long long)arg2 file:(id)arg3;
- (id)formatForConsole:(id)arg1 withModule:(long long)arg2;

@end

