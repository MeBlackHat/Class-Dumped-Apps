//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterAVCore/NSCopying-Protocol.h>

@class NSString;

@interface TAVAnalyticsPromotedMetadata : NSObject <NSCopying>
{
    _Bool _isEarned;
    NSString *_impressionID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isEarned; // @synthesize isEarned=_isEarned;
@property(readonly, copy, nonatomic) NSString *impressionID; // @synthesize impressionID=_impressionID;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithImpressionID:(id)arg1 isEarned:(_Bool)arg2;
- (id)init;

@end

