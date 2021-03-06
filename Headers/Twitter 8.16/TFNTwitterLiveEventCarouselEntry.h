//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCopying-Protocol.h>

@class NSString;

@interface TFNTwitterLiveEventCarouselEntry : NSObject <NSCopying>
{
    _Bool _selected;
    NSString *_entryID;
    long long _type;
}

+ (id)nextPlayableCarouselEntryAfterIndex:(unsigned long long)arg1 inCarouselEntries:(id)arg2;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(readonly, copy, nonatomic) NSString *entryID; // @synthesize entryID=_entryID;
- (void).cxx_destruct;
- (_Bool)isEqualToCarouselEntry:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEntryType:(long long)arg1 entryID:(id)arg2 selected:(_Bool)arg3;
@property(readonly, nonatomic, getter=isEligibleForDocking) _Bool eligibleForDocking;

@end

