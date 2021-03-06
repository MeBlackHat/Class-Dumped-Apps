//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTShareMediaAction-Protocol.h"

@class ComGoogleCommonBaseOptional, JBTIActionsHelper, JBTISmartMailComponentContextImpl, NSString;
@protocol JBTMedia;

@interface JBTIShareMediaActionImpl : NSObject <JBTShareMediaAction>
{
    id <JBTMedia> media_;
    JBTISmartMailComponentContextImpl *smartMailContext_;
    ComGoogleCommonBaseOptional *userActionRecorder_;
    ComGoogleCommonBaseOptional *userActionMetric_;
    JBTIActionsHelper *actionsHelper_;
}

- (void)dealloc;
- (void)recordClick;
- (id)getMedia;
- (id)getLoggingId;
- (id)getActionType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

