//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEShareBaseChannel.h"

@class NSString;

@interface AWEReportShareChannel : AWEShareBaseChannel
{
    NSString *_shareType;
}

+ (id)channelWithType:(id)arg1;
+ (void)__awe__codeRunnerRun_39;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *shareType; // @synthesize shareType=_shareType;
- (_Bool)share;
- (_Bool)prepareWithContext:(id)arg1;
- (id)shareImage;
- (id)shareTitle;
- (long long)shareCategory;

@end

