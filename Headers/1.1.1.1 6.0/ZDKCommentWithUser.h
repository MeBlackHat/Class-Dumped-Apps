//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ZDKComment, ZDKSupportUser;

@interface ZDKCommentWithUser : NSObject
{
    ZDKComment *_comment;
    ZDKSupportUser *_user;
}

+ (id)buildCommentWithUser:(id)arg1 withUsers:(id)arg2;
@property(readonly, nonatomic) ZDKSupportUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) ZDKComment *comment; // @synthesize comment=_comment;
- (void).cxx_destruct;
- (id)initWithComment:(id)arg1 andUser:(id)arg2;

@end

