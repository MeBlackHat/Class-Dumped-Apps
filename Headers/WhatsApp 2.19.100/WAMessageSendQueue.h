//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, WAMessageRegularSendTask;

@interface WAMessageSendQueue : NSObject
{
    NSMutableArray *_sortedSendingTasks;
    NSMutableArray *_sortedUploadTasks;
    NSMutableDictionary *_messageIDToTask;
    WAMessageRegularSendTask *_pendingSendTask;
}

@property(readonly, nonatomic) WAMessageRegularSendTask *pendingSendTask; // @synthesize pendingSendTask=_pendingSendTask;
- (void).cxx_destruct;
- (void)addTasksForUploading:(id)arg1;
- (id)nextTaskForMediaUploadWithMediaUploadAttemptIdentifier:(id)arg1;
- (void)clearPendingTaskForSending;
- (void)addTasksForSending:(id)arg1;
- (id)dequeueTaskForMessageSend;
@property(readonly, copy, nonatomic) NSArray *runningUploadTasks;
- (id)removeSendTaskWithParentMessageID:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)sendTaskForMessageID:(id)arg1;
- (id)init;

@end

