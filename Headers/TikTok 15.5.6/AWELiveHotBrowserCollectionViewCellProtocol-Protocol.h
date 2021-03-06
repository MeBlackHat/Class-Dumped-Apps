//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWELiveHotRoomCountResponseModel, NSString, UIColor, UIImageView;

@protocol AWELiveHotBrowserCollectionViewCellProtocol <NSObject>
+ (Class)getImplementationClass;
+ (NSString *)reuseIdentifier;
@property(nonatomic) _Bool didStoryViewOpened;
@property(nonatomic) unsigned long long style;
@property(retain, nonatomic) UIImageView *avatarView;
- (void)stopAvatarAnimation;
- (void)startAvatarAnimation;
- (void)setData:(AWELiveHotRoomCountResponseModel *)arg1;

@optional
- (void)setBubbleColor:(UIColor *)arg1;
@end

