//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ElectrodeContainer/_TtC18ElectrodeContainer15ElectrodeObject.h>

@class NSArray, NSString;

@interface _TtC18ElectrodeContainer20ItemSummaryWithLists : _TtC18ElectrodeContainer15ElectrodeObject
{
    // Error parsing type: , name: usItemId
    // Error parsing type: , name: productName
    // Error parsing type: , name: imageUrl
    // Error parsing type: , name: price
    // Error parsing type: , name: lists
}

- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1;
- (id)init;
- (id)initWithUsItemId:(id)arg1 productName:(id)arg2 imageUrl:(id)arg3 price:(double)arg4 lists:(id)arg5;
@property(nonatomic, readonly) NSArray *lists;
@property(nonatomic, readonly) double price; // @synthesize price;
@property(nonatomic, readonly) NSString *imageUrl;
@property(nonatomic, readonly) NSString *productName;
@property(nonatomic, readonly) NSString *usItemId;

@end

