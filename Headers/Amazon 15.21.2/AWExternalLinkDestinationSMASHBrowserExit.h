//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWExternalLinkDestination.h"

@class NSURL;

@interface AWExternalLinkDestinationSMASHBrowserExit : AWExternalLinkDestination
{
    NSURL *_returnURL;
}

+ (id)destinationRefMarker;
+ (id)destinationForPathComponents:(id)arg1 queryComponents:(id)arg2;
@property(retain) NSURL *returnURL; // @synthesize returnURL=_returnURL;
- (void).cxx_destruct;
- (id)updateWithUrl:(id)arg1 pathComponents:(id)arg2 queryComponents:(id)arg3;
- (_Bool)handleRoutingRequest:(id)arg1;
- (_Bool)canMatchRoutingRequest:(id)arg1;
- (unsigned long long)refTagDestination;
- (void)go;
- (id)initWithReturnURL:(id)arg1;

@end

