//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSString;

@interface AWEDynamicLocalizationsResponseModel : AWEBaseApiModel
{
    long long _versionNumber;
    NSString *_languagePackageURLString;
}

+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *languagePackageURLString; // @synthesize languagePackageURLString=_languagePackageURLString;
@property(nonatomic) long long versionNumber; // @synthesize versionNumber=_versionNumber;

@end

