//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TDLEntity_Builder;

@interface ComGoogleAppsTasksSharedDataProtoBusinessobjectBusinessObjectBuilders_BaseEntityBuilder : NSObject
{
    TDLEntity_Builder *protoBuilder_;
}

- (void)dealloc;
- (id)build;
- (id)asProtoBuilder;
- (id)setTaskRecurrenceWithTDLTaskRecurrence_Builder:(id)arg1;
- (id)clearTaskRecurrence;
- (id)setTaskRecurrenceWithTDLTaskRecurrence:(id)arg1;
- (id)setTaskListWithTDLTaskList_Builder:(id)arg1;
- (id)clearTaskList;
- (id)setTaskListWithTDLTaskList:(id)arg1;
- (id)setTaskWithTDLTask_Builder:(id)arg1;
- (id)clearTask;
- (id)setTaskWithTDLTask:(id)arg1;
- (id)setUserExperimentalWithTDLUserExperimental_Builder:(id)arg1;
- (id)clearUserExperimental;
- (id)setUserExperimentalWithTDLUserExperimental:(id)arg1;
- (id)setUserMetadataWithTDLUserMetadata_Builder:(id)arg1;
- (id)clearUserMetadata;
- (id)setUserMetadataWithTDLUserMetadata:(id)arg1;
- (id)setUserPrefsWithTDLUserPrefs_Builder:(id)arg1;
- (id)clearUserPrefs;
- (id)setUserPrefsWithTDLUserPrefs:(id)arg1;

@end

