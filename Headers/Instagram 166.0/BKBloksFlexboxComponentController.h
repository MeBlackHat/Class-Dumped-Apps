//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/BKBloksComponentController.h>

#import <InstagramAppCoreFramework/BKBloksFlexboxViewMountDelegate-Protocol.h>

@interface BKBloksFlexboxComponentController : BKBloksComponentController <BKBloksFlexboxViewMountDelegate>
{
}

- (void)componentWillRelinquishView:(id)arg1;
- (void)componentDidAcquireView:(id)arg1;
- (void)onMount:(id)arg1;
- (void)addMountListenerForView:(id)arg1 model:(id)arg2 context:(id)arg3;

@end

