//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface catVideoModal : NSObject
{
    NSString *_videoTag;
    NSString *_videoValue;
    NSMutableArray *_attrArray;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSMutableArray *attrArray; // @synthesize attrArray=_attrArray;
@property(copy, nonatomic) NSString *videoValue; // @synthesize videoValue=_videoValue;
@property(copy, nonatomic) NSString *videoTag; // @synthesize videoTag=_videoTag;
- (id)initWithVideoDict:(id)arg1;

@end

