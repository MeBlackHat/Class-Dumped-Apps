//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface BaseVirtualRequestorImpl : NSObject
{
    NSDictionary *_config;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *config; // @synthesize config=_config;
- (id)getResponseWithURL:(id)arg1 overridingKey:(id)arg2;
- (id)getResponseWithURL:(id)arg1;
- (id)initWithConfig:(id)arg1;

@end

