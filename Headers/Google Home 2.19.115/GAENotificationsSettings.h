//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GAENotificationsSettings : NSObject
{
    _Bool _notificationsEnabled;
}

@property(nonatomic) _Bool notificationsEnabled; // @synthesize notificationsEnabled=_notificationsEnabled;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)settingsByApplyingUpdateJSONObject:(id)arg1;
- (id)initWithJSONObject:(id)arg1;

@end

