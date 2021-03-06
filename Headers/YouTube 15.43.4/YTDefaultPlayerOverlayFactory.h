//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTPlayerOverlayFactory-Protocol.h"

@class GIMMe, NSString;
@protocol YTAdsPlayerServices;

@interface YTDefaultPlayerOverlayFactory : NSObject <YTPlayerOverlayFactory>
{
    id <YTAdsPlayerServices> _adsPlayerServices;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (id)VRContentVideoPlayerOverlayWithParentResponder:(id)arg1;
- (id)adVideoPlayerOverlayWithParentResponder:(id)arg1;
- (id)contentVideoPlayerOverlayWithParentResponder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

