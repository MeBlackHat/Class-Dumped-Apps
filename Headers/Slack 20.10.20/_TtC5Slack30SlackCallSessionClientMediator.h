//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC5Slack30SlackCallSessionClientMediator : NSObject
{
    // Error parsing type: , name: mediaBackendType
    // Error parsing type: , name: lastCallMediaBackendType
    // Error parsing type: , name: dependencies
    // Error parsing type: , name: $__lazy_storage_$_orcaSessionClient
    // Error parsing type: , name: $__lazy_storage_$_chimeSessionClient
}

- (void).cxx_destruct;
- (_Bool)isChimeRegionEnabled;
- (_Bool)isCallRefactorEnabled;
- (_Bool)isVideoCallEnabled;
- (id)callSessionClientWithDependencies:(id)arg1;
- (void)revertMediaBackend;
- (void)resetMediaBackend;
- (void)setMediaBackendWithType:(id)arg1;
- (void)setMediaBackendWithInfo:(id)arg1;
- (id)init;

@end

