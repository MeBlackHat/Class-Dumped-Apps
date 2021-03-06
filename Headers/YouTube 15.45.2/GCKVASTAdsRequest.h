//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSCopying-Protocol.h>
#import <Module_Framework/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface GCKVASTAdsRequest : NSObject <NSCopying, NSSecureCoding>
{
    NSURL *_adTagUrl;
    NSString *_adsResponse;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *adsResponse; // @synthesize adsResponse=_adsResponse;
@property(retain, nonatomic) NSURL *adTagUrl; // @synthesize adTagUrl=_adTagUrl;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)JSONObject;
- (id)initWithJSONObject:(id)arg1;
- (id)initWithAdTagURL:(id)arg1 adsResponse:(id)arg2;

@end

