//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface IGStoryMusicDynamicRevealPhraseViewModel : NSObject
{
    NSArray *_lines;
    double _startTime;
    double _endTime;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) NSArray *lines; // @synthesize lines=_lines;
- (id)initWithLines:(id)arg1 startTime:(double)arg2 endTime:(double)arg3;

@end

