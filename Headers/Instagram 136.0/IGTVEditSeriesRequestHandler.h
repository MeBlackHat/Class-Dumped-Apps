//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGFeedItemStore, IGUserSession;
@protocol IGTVSeriesEditListenerAnnouncer;

@interface IGTVEditSeriesRequestHandler : NSObject
{
    IGUserSession *_userSession;
    IGFeedItemStore *_feedItemStore;
    id <IGTVSeriesEditListenerAnnouncer> _editListenerAnnouncer;
}

- (void).cxx_destruct;
- (void)_handleFailedResponseWithSeriesId:(id)arg1;
- (void)_handleSuccessfulResponseWithSeriesId:(id)arg1 title:(id)arg2 seriesDescription:(id)arg3;
- (void)startRequestFromViewController:(id)arg1 withSeriesId:(id)arg2 title:(id)arg3 seriesDescription:(id)arg4;
- (id)initWithUserSession:(id)arg1;

@end

