//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSNumber, NSString;

@interface AWESearchAladdinTopicModel : AWEBaseApiModel
{
    NSString *_itemID;
    NSString *_awemeIDList;
    NSString *_imageURL;
    NSString *_name;
    long long _type;
    NSNumber *_videoCount;
}

+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *videoCount; // @synthesize videoCount=_videoCount;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *awemeIDList; // @synthesize awemeIDList=_awemeIDList;
@property(copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;

@end

