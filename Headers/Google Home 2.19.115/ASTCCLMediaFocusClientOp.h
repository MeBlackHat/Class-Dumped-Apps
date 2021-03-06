//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASTCCLClientOp-Protocol.h"

@class ASTContext, NSArray, NSString;

@interface ASTCCLMediaFocusClientOp : NSObject <ASTCCLClientOp>
{
    ASTContext *_context;
}

@property(nonatomic) __weak ASTContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)performClientOperation:(id)arg1 interationID:(int)arg2 deviceSpecificRendering:(id)arg3 statusCallback:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) NSArray *supportedClientOps;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

