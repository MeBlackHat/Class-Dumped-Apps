//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ElectrodeContainer/_TtC18ElectrodeContainer15ElectrodeObject.h>

@class NSString, _TtC18ElectrodeContainer4Item;

@interface _TtC18ElectrodeContainer18ShowMapForItemData : _TtC18ElectrodeContainer15ElectrodeObject
{
    // Error parsing type: , name: storeId
    // Error parsing type: , name: listId
    // Error parsing type: , name: pitaTag
    // Error parsing type: , name: item
}

- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1;
- (id)init;
- (id)initWithStoreId:(id)arg1 listId:(id)arg2 pitaTag:(id)arg3 item:(id)arg4;
@property(nonatomic, readonly) _TtC18ElectrodeContainer4Item *item; // @synthesize item;
@property(nonatomic, readonly) NSString *pitaTag;
@property(nonatomic, readonly) NSString *listId;
@property(nonatomic, readonly) NSString *storeId;

@end

