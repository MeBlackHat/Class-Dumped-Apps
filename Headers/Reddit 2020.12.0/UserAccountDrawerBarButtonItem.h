//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseBarButtonItem.h>

@class AccountManager, ChatAvatarImageView;

@interface UserAccountDrawerBarButtonItem : BaseBarButtonItem
{
    AccountManager *_accountManager;
    ChatAvatarImageView *_userAvatarImageView;
}

@property(retain, nonatomic) ChatAvatarImageView *userAvatarImageView; // @synthesize userAvatarImageView=_userAvatarImageView;
@property(readonly, nonatomic) AccountManager *accountManager; // @synthesize accountManager=_accountManager;
- (void).cxx_destruct;
- (void)userAccountUpdated:(id)arg1;
- (void)updateUserAvatarImage;
- (void)setUpCustomView;
- (id)initWithAccountManager:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)dealloc;

@end

