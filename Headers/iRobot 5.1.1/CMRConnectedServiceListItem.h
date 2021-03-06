//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CMRConnectedServiceListItem : NSObject
{
    long long _serviceType;
    NSString *_title;
    NSString *_descriptionId;
    NSString *_iconId;
    NSString *_accessoryImageId;
}

+ (id)ConnectedServiceListItemWithServiceType:(long long)arg1 title:(id)arg2 descriptionId:(id)arg3 iconId:(id)arg4 accessoryImageId:(id)arg5;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *accessoryImageId; // @synthesize accessoryImageId=_accessoryImageId;
@property(readonly, nonatomic) NSString *iconId; // @synthesize iconId=_iconId;
@property(readonly, nonatomic) NSString *descriptionId; // @synthesize descriptionId=_descriptionId;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithServiceType:(long long)arg1 title:(id)arg2 descriptionId:(id)arg3 iconId:(id)arg4 accessoryImageId:(id)arg5;

@end

