//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ELMLogger, ELMStore;

@interface XUIDataStoreBatchUpdateProcessor : NSObject
{
    id <ELMStore> _store;
    id <ELMLogger> _logger;
}

+ (id)extensionRegistryForMutationPayload;
- (void).cxx_destruct;
@property(retain, nonatomic) id <ELMLogger> logger; // @synthesize logger=_logger;
- (void)processBatchUpdate:(id)arg1 usingThemePicker:(id)arg2;
- (id)initWithStore:(id)arg1;

@end

