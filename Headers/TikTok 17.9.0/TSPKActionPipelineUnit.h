//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TSPKPipelineUnit.h"

@interface TSPKActionPipelineUnit : TSPKPipelineUnit
{
}

+ (void)reportWithEventName:(id)arg1 backtraces:(id)arg2 params:(id)arg3 filterParams:(id)arg4;
- (void)appendPageNameAndReportWithEventName:(id)arg1 backtraces:(id)arg2 params:(id)arg3 filterParams:(id)arg4;
- (void)exectuteOnMainThread:(CDUnknownBlockType)arg1;
- (id)eventNameWithEvent:(id)arg1;
- (void)actionWithEvent:(id)arg1;
- (void)forwardEvent:(id)arg1;

@end

