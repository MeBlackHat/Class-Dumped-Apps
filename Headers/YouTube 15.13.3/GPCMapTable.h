//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSFastEnumeration-Protocol.h>

@class NSMutableDictionary;

@interface GPCMapTable : NSObject <NSFastEnumeration>
{
    NSMutableDictionary *storage_;
    int keyOptions_;
    int valueOptions_;
}

+ (id)mapTableWithKeyOptions:(int)arg1 valueOptions:(int)arg2;
+ (id)mapTable;
@property(readonly, nonatomic) int valueOptions; // @synthesize valueOptions=valueOptions_;
@property(readonly, nonatomic) int keyOptions; // @synthesize keyOptions=keyOptions_;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)allValues;
- (id)allKeys;
- (void)removeObjectForKeyPointer:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (void)dealloc;
- (id)initWithKeyOptions:(int)arg1 valueOptions:(int)arg2;
- (id)init;

@end

