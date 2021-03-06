//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TSPKPipelineUnit.h"

#import "TSPKDetectAction-Protocol.h"

@class NSMutableDictionary, NSString, TSPKLock;

@interface TSPKDetectorPipelineUnit : TSPKPipelineUnit <TSPKDetectAction>
{
    TSPKLock *_lock;
    NSMutableDictionary *_sceneDetectors;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *sceneDetectors; // @synthesize sceneDetectors=_sceneDetectors;
- (void)actionWithDetectEvent:(id)arg1;
- (void)handleEvent:(id)arg1;
- (void)setupConfig;
- (void)dealloc;
- (id)initWithUnitModel:(id)arg1;
- (id)uniqueType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

