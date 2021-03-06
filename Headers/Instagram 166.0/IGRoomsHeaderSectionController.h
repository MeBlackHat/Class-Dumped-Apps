//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListGenericSectionController.h>

#import <InstagramAppCoreFramework/IGRoomsProfileCardViewDelegate-Protocol.h>

@class IGUserSession, NSString, UIViewController;
@protocol IGRoomsHeaderSectionControllerDelegate;

@interface IGRoomsHeaderSectionController : IGListGenericSectionController <IGRoomsProfileCardViewDelegate>
{
    IGUserSession *_userSession;
    NSString *_analyticsModule;
    UIViewController *_sharesheetViewController;
    id <IGRoomsHeaderSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGRoomsHeaderSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *sharesheetViewController; // @synthesize sharesheetViewController=_sharesheetViewController;
- (id)cellForItemAtIndex:(long long)arg1;
- (void)IGRoomsProfileCardViewDidTapShareLink:(id)arg1;
- (void)IGRoomsProfileCardViewDidTapPrivacyLink:(id)arg1;
- (void)IGRoomsProfileCardViewDidTapLinkAccount:(id)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)initWithUserSession:(id)arg1 analyticsModule:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

