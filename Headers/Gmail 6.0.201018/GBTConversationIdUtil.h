//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GBTConversationIdUtil : NSObject
{
}

+ (void)setThreadIdPrefixForTest:(id)arg1;
+ (id)serializeClientAssignedConvId:(id)arg1 messageId:(id)arg2;
+ (id)serializeConvId:(id)arg1 messageId:(id)arg2;
+ (id)messageStorageIdSuffixForMessageId:(id)arg1;
+ (id)deserializeId:(id)arg1;

@end

