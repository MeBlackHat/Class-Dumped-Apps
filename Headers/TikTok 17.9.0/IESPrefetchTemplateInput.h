//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESPrefetchTemplateInput-Protocol.h"

@class IESPrefetchFlatSchema, NSDictionary, NSString;

@interface IESPrefetchTemplateInput : NSObject <IESPrefetchTemplateInput>
{
    NSDictionary *variables;
    IESPrefetchFlatSchema *schema;
    NSString *name;
    NSString *traceId;
}

@property(copy, nonatomic) NSString *traceId; // @synthesize traceId;
@property(copy, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) IESPrefetchFlatSchema *schema; // @synthesize schema;
@property(copy, nonatomic) NSDictionary *variables; // @synthesize variables;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

