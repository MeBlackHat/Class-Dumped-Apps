//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapAOSRequestReformer.h"

@class NSString;

@interface AMapADIURequestReformer : AMapAOSRequestReformer
{
    NSString *_tid;
    NSString *_diu;
    NSString *_diu2;
    NSString *_diu3;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *diu3; // @synthesize diu3=_diu3;
@property(copy, nonatomic) NSString *diu2; // @synthesize diu2=_diu2;
@property(copy, nonatomic) NSString *diu; // @synthesize diu=_diu;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (id)postData;
- (id)assembledURL:(id)arg1;
- (id)v6Url;
- (id)url;
- (id)parameters;
- (id)v6BaseURL;
- (id)baseURL;
- (id)method;
- (id)init;

@end

