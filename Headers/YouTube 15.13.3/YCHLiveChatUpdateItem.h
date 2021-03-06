//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YCHLiveChatUpdateItem : NSObject
{
    id _item;
    long long _indexBeforeUpdate;
    long long _indexAfterUpdate;
    long long _updateAction;
}

+ (id)reloadItem:(id)arg1 beforeIndex:(long long)arg2 afterIndex:(long long)arg3;
+ (id)moveItem:(id)arg1 beforeIndex:(long long)arg2 afterIndex:(long long)arg3;
+ (id)deleteItem:(id)arg1 beforeIndex:(long long)arg2;
+ (id)insertItem:(id)arg1 afterIndex:(long long)arg2;
@property(readonly, nonatomic) long long updateAction; // @synthesize updateAction=_updateAction;
@property(readonly, nonatomic) long long indexAfterUpdate; // @synthesize indexAfterUpdate=_indexAfterUpdate;
@property(readonly, nonatomic) long long indexBeforeUpdate; // @synthesize indexBeforeUpdate=_indexBeforeUpdate;
@property(readonly, nonatomic) id item; // @synthesize item=_item;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)description;
- (id)init;

@end

