//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SBDPreviousMessageListQuery : NSObject
{
    _Bool _reverse;
    _Bool _includeMetaArray;
    _Bool _includeReactions;
    _Bool _includeReplies;
    _Bool _includeParentMessageText;
    _Bool _includeThreadInfo;
    _Bool _loading;
    unsigned long long _limit;
    long long _messageTypeFilter;
    NSString *_customTypeFilter;
    NSArray *_senderUserIdsFilter;
    long long _minimumTimestamp;
    NSString *_channelURL;
    unsigned long long _channelType;
}

@property unsigned long long channelType; // @synthesize channelType=_channelType;
@property(retain, nonatomic) NSString *channelURL; // @synthesize channelURL=_channelURL;
@property long long minimumTimestamp; // @synthesize minimumTimestamp=_minimumTimestamp;
@property(getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property _Bool includeThreadInfo; // @synthesize includeThreadInfo=_includeThreadInfo;
@property _Bool includeParentMessageText; // @synthesize includeParentMessageText=_includeParentMessageText;
@property _Bool includeReplies; // @synthesize includeReplies=_includeReplies;
@property(nonatomic) _Bool includeReactions; // @synthesize includeReactions=_includeReactions;
@property(nonatomic) _Bool includeMetaArray; // @synthesize includeMetaArray=_includeMetaArray;
@property(copy, nonatomic) NSArray *senderUserIdsFilter; // @synthesize senderUserIdsFilter=_senderUserIdsFilter;
@property(copy, nonatomic) NSString *customTypeFilter; // @synthesize customTypeFilter=_customTypeFilter;
@property(nonatomic) long long messageTypeFilter; // @synthesize messageTypeFilter=_messageTypeFilter;
@property _Bool reverse; // @synthesize reverse=_reverse;
@property unsigned long long limit; // @synthesize limit=_limit;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)loadWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadPreviousMessagesWithLimit:(long long)arg1 reverse:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithChannel:(id)arg1;

@end

