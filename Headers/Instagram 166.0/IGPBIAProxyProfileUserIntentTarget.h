//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBIntentTarget-Protocol.h>

@class IGMedia, IGUserDetailConfiguration, NSString;
@protocol IGSponsoredInfoProviding;

@interface IGPBIAProxyProfileUserIntentTarget : NSObject <FBIntentTarget>
{
    _Bool _shouldShowUFI;
    IGMedia *_media;
    IGUserDetailConfiguration *_configuration;
    id <IGSponsoredInfoProviding> _sponsoredInfoProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <IGSponsoredInfoProviding> sponsoredInfoProvider; // @synthesize sponsoredInfoProvider=_sponsoredInfoProvider;
@property(readonly, nonatomic) _Bool shouldShowUFI; // @synthesize shouldShowUFI=_shouldShowUFI;
@property(readonly, nonatomic) IGUserDetailConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) IGMedia *media; // @synthesize media=_media;
- (id)initWithMedia:(id)arg1 configuration:(id)arg2 shouldShowUFI:(_Bool)arg3 sponsoredInfoProvider:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

