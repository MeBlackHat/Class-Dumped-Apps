//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VASPostEventExperience;
@protocol VASPEXHandlerDelegate;

@interface VASLoadedPostEventExperience : NSObject
{
    VASPostEventExperience *_experience;
    id <VASPEXHandlerDelegate> _handler;
}

- (void).cxx_destruct;
@property(readonly) id <VASPEXHandlerDelegate> handler; // @synthesize handler=_handler;
@property(readonly) VASPostEventExperience *experience; // @synthesize experience=_experience;
- (id)initWithExperience:(id)arg1 handler:(id)arg2;

@end

