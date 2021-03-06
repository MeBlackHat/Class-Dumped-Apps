//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface SPTInAppMessageBannerMessage : NSObject
{
    NSString *_html;
    NSDictionary *_clickActions;
    NSString *_identifier;
    NSString *_uuid;
    NSURL *_impressionURL;
}

@property(readonly, nonatomic) NSURL *impressionURL; // @synthesize impressionURL=_impressionURL;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSDictionary *clickActions; // @synthesize clickActions=_clickActions;
@property(readonly, copy, nonatomic) NSString *html; // @synthesize html=_html;
- (void).cxx_destruct;
- (id)initWithHTML:(id)arg1 identifier:(id)arg2 uuid:(id)arg3 impressionURL:(id)arg4 clickActions:(id)arg5;

@end

