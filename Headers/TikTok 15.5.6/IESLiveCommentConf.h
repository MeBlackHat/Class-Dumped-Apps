//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IESLiveCommentConf : NSObject
{
    _Bool _isAnchor;
    _Bool _isMediaRoomScene;
    _Bool _isLandscape;
    double _slideOffset;
    NSString *_placeholderText;
}

@property(copy, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
@property(nonatomic) double slideOffset; // @synthesize slideOffset=_slideOffset;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
@property(nonatomic) _Bool isMediaRoomScene; // @synthesize isMediaRoomScene=_isMediaRoomScene;
@property(nonatomic) _Bool isAnchor; // @synthesize isAnchor=_isAnchor;
- (void).cxx_destruct;
- (id)initWithDefaultConf;

@end

