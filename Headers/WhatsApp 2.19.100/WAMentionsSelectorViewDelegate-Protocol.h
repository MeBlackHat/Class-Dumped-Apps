//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WAMentionsSelectorView, WAUserJID;

@protocol WAMentionsSelectorViewDelegate <NSObject>
- (void)mentionsSelectorView:(WAMentionsSelectorView *)arg1 didSelectContactWithName:(NSString *)arg2 jid:(WAUserJID *)arg3 forTextRange:(struct _NSRange)arg4;
@end

