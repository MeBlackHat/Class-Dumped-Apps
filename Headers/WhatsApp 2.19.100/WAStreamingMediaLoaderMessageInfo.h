//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, WAMessage, WAStreamingMediaLoaderInfoEncrypted;

@interface WAStreamingMediaLoaderMessageInfo : NSObject
{
    NSMutableDictionary *_messageForUniqueKey;
    WAMessage *_originalMessage;
    NSString *_originalMessageUniqueKey;
    WAStreamingMediaLoaderInfoEncrypted *_loaderInfo;
}

+ (id)infoForMessage:(id)arg1;
@property(readonly, nonatomic) WAStreamingMediaLoaderInfoEncrypted *loaderInfo; // @synthesize loaderInfo=_loaderInfo;
@property(readonly, copy, nonatomic) NSString *originalMessageUniqueKey; // @synthesize originalMessageUniqueKey=_originalMessageUniqueKey;
@property(readonly, nonatomic) WAMessage *originalMessage; // @synthesize originalMessage=_originalMessage;
- (void).cxx_destruct;
- (id)attachedMessages;
- (id)attachedMessageUniqueKeys;
- (void)detachMessageWithUniqueKey:(id)arg1;
- (id)messageForUniqueKey:(id)arg1;
- (void)attachMessage:(id)arg1 forUniqueKey:(id)arg2;
- (id)initWithMessage:(id)arg1;

@end

