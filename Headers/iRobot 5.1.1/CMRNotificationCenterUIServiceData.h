//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CMRNotificationCenterUIServiceData : NSObject
{
    struct Handle<std::__1::shared_ptr<core::NotificationCenterUIServiceData>, std::__1::shared_ptr<core::NotificationCenterUIServiceData>> _cppRefHandle;
}

+ (id)create;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setMapRecommendationResult:(id)arg1;
- (void)setNotificationCenterSupported:(_Bool)arg1;
- (void)setNotificationCenterEnabled:(_Bool)arg1;
- (void)setNotificationToUpdate:(id)arg1;
- (id)getHtmlFooterContent;
- (id)getHtmlHeadContent;
- (id)getMapRecommendationResult;
- (id)getUpdatedNotification;
- (int)getNumberOfUnreadNotifications;
- (id)getUnreadNotifications;
- (id)getReadNotifications;
- (id)getNotificationList;
- (_Bool)getNotificationCenterSupported;
- (_Bool)getNotificationCenterEnabled;
- (id)getStateChangelist;
- (const shared_ptr_b221ff68 *)cppRef;
- (id)initWithCpp:(const shared_ptr_b221ff68 *)arg1;

@end

