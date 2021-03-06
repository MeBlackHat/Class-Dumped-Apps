//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService.h"

#import "HTSService-Protocol.h"

@class NSString;

@interface HTSShareService : HTSService <HTSService>
{
}

+ (_Bool)isEnableSocialKitForTwitterAndFacebook;
+ (void)setEnableSocialKitForTwitterAndFacebook:(_Bool)arg1;
+ (_Bool)isPlatformAvailable:(long long)arg1;
+ (_Bool)shareTypeAvailable:(long long)arg1;
+ (_Bool)shareSinaWeiboAvailable;
+ (_Bool)shareQQAvailable;
+ (_Bool)shareWeChatAvailable;
- (_Bool)handleOpenURL:(id)arg1;
- (void)shareWithModel:(id)arg1 platform:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)shareWithModel:(id)arg1 type:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

