//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DSCCard;

@interface DSCCardListModelTransaction : NSObject
{
    long long _type;
    unsigned long long _index;
    DSCCard *_card;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DSCCard *card; // @synthesize card=_card;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)initWithType:(long long)arg1 atIndex:(unsigned long long)arg2 withCard:(id)arg3;
- (id)initWithType:(long long)arg1 atIndex:(unsigned long long)arg2;

@end

