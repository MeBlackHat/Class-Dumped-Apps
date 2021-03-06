//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/SMAVastModel.h>

@class NSArray, NSString, NSURL, SMAVastAdSystem, SMAVastRoot, SMAVastViewableImpression;

@interface SMAVastWrapper : SMAVastModel
{
    _Bool _followAdditionalWrappers;
    _Bool __allowMultipleAds;
    _Bool __fallbackOnNoAd;
    NSURL *_vastAdTagURI;
    NSArray *_errorURLs;
    SMAVastAdSystem *_adSystem;
    SMAVastViewableImpression *_viewableImpression;
    NSArray *_creatives;
    NSArray *_impressionURLs;
    NSString *_blockedAdCategories;
    NSArray *_verifications;
    SMAVastRoot *_wrappedVASTRoot;
    NSArray *__extensions;
    id __pricing;
    id __adVerifications;
    NSArray *_exVerifications;
}

+ (id)codingKeys;
@property(copy, nonatomic) NSArray *exVerifications; // @synthesize exVerifications=_exVerifications;
@property(nonatomic) _Bool _fallbackOnNoAd; // @synthesize _fallbackOnNoAd=__fallbackOnNoAd;
@property(nonatomic) _Bool _allowMultipleAds; // @synthesize _allowMultipleAds=__allowMultipleAds;
@property(retain, nonatomic) id _adVerifications; // @synthesize _adVerifications=__adVerifications;
@property(retain, nonatomic) id _pricing; // @synthesize _pricing=__pricing;
@property(copy, nonatomic) NSArray *_extensions; // @synthesize _extensions=__extensions;
@property(retain, nonatomic) SMAVastRoot *wrappedVASTRoot; // @synthesize wrappedVASTRoot=_wrappedVASTRoot;
@property(copy, nonatomic) NSArray *verifications; // @synthesize verifications=_verifications;
@property(copy, nonatomic) NSString *blockedAdCategories; // @synthesize blockedAdCategories=_blockedAdCategories;
@property(nonatomic) _Bool followAdditionalWrappers; // @synthesize followAdditionalWrappers=_followAdditionalWrappers;
@property(copy, nonatomic) NSArray *impressionURLs; // @synthesize impressionURLs=_impressionURLs;
@property(copy, nonatomic) NSArray *creatives; // @synthesize creatives=_creatives;
@property(retain, nonatomic) SMAVastViewableImpression *viewableImpression; // @synthesize viewableImpression=_viewableImpression;
@property(retain, nonatomic) SMAVastAdSystem *adSystem; // @synthesize adSystem=_adSystem;
@property(copy, nonatomic) NSArray *errorURLs; // @synthesize errorURLs=_errorURLs;
@property(copy, nonatomic) NSURL *vastAdTagURI; // @synthesize vastAdTagURI=_vastAdTagURI;
- (void).cxx_destruct;
- (void)applyDefaultValues;
- (id)initWithDictionary:(id)arg1;

@end

