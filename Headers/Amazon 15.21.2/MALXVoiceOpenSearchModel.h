//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class MALXVoiceOpenToolTipModel, NSString;
@protocol Optional;

@interface MALXVoiceOpenSearchModel : JSONModel
{
    NSString *_query;
    NSString<Optional> *_category;
    NSString<Optional> *_sortCriteria;
    MALXVoiceOpenToolTipModel<Optional> *_toolTip;
}

@property(retain, nonatomic) MALXVoiceOpenToolTipModel<Optional> *toolTip; // @synthesize toolTip=_toolTip;
@property(retain, nonatomic) NSString<Optional> *sortCriteria; // @synthesize sortCriteria=_sortCriteria;
@property(retain, nonatomic) NSString<Optional> *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
- (void).cxx_destruct;

@end

