//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WASignalDecryptJournalId : NSObject
{
    NSString *_domain;
    NSString *_uniqueId;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(readonly, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (_Bool)isEqual:(id)arg1;
- (id)stringJournalId;
- (id)initWithDomain:(id)arg1 uniqueId:(id)arg2;

@end

