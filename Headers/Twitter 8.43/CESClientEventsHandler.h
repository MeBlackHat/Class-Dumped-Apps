//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterClientEventKit/TFSScribeOutgoingEventsHandler-Protocol.h>

@interface CESClientEventsHandler : NSObject <TFSScribeOutgoingEventsHandler>
{
    // Error parsing type: , name: context
    // Error parsing type: , name: accountId
    // Error parsing type: , name: serviceRunner
}

- (void).cxx_destruct;
- (id)init;
- (void)handleScribeOutgoingEvents:(id)arg1 retryDistribution:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)flushGroupsWithAccountId:(id)arg1 priority:(int)arg2;
- (id)initWithContext:(id)arg1 accountId:(id)arg2 serviceRunner:(id)arg3;

@end

