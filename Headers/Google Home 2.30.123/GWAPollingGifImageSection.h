//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWAGifImageSection.h"

#import "GWAMegalogsSupportingComponent-Protocol.h"

@class GWAMegalogsContext, NSArray, NSNumber, NSString;
@protocol GWAFlowSectionDelegate;

@interface GWAPollingGifImageSection : GWAGifImageSection <GWAMegalogsSupportingComponent>
{
    long long _pollingIntervalInMilliseconds;
    _Bool _hasStaredPolling;
    long long _uiReference;
    id <GWAFlowSectionDelegate> _delegate;
    GWAMegalogsContext *megalogsContext;
    GWAMegalogsContext *megalogsParentContext;
    NSNumber *megalogsUIReference;
    NSArray *subcomponentsSupportingMegalogs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *subcomponentsSupportingMegalogs; // @synthesize subcomponentsSupportingMegalogs;
@property(retain, nonatomic) NSNumber *megalogsUIReference; // @synthesize megalogsUIReference;
@property(nonatomic) __weak GWAMegalogsContext *megalogsParentContext; // @synthesize megalogsParentContext;
@property(retain, nonatomic) GWAMegalogsContext *megalogsContext; // @synthesize megalogsContext;
- (id)delegate;
- (void)prepareMegalogsContexts;
- (void)setDelegate:(id)arg1;
- (id)initWithImageWithCaption:(id)arg1 pollingRate:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

