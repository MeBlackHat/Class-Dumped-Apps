//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

@interface GDKWhoHasAccessAvatarState : NSObject
{
    _Bool _animated_8;
    UIImage *_avatar_6;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool animated; // @synthesize animated=_animated_8;
@property(readonly, nonatomic) UIImage *avatar; // @synthesize avatar=_avatar_6;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithAvatar:(id)arg1 animated:(_Bool)arg2;

@end

