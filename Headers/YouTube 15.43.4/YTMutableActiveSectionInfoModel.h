//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTActiveSectionInfoModel.h>

@class NSData, NSString;

@interface YTMutableActiveSectionInfoModel : YTActiveSectionInfoModel
{
}

- (void)parseAndExtractFieldsFromProtoIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSData *data; // @dynamic data;
@property(retain, nonatomic) NSString *sectionIdentifier; // @dynamic sectionIdentifier;
@property(nonatomic) int activeItemIndexInSection; // @dynamic activeItemIndexInSection;
- (id)initWithEntityStore:(id)arg1;

@end

