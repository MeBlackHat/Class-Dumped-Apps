//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCRequestBaseDelegate-Protocol.h"

@class NSArray, NSDictionary, SRDSCompletionRequest;

@protocol SRDSCompletionRequestDelegate <SCRequestBaseDelegate>
- (void)request:(SRDSCompletionRequest *)arg1 didSucceedWithV2Completions:(NSDictionary *)arg2;
- (void)request:(SRDSCompletionRequest *)arg1 didSucceedWithCompletions:(NSArray *)arg2;
@end

