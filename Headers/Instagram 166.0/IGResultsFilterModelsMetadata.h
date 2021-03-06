//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/NSCopying-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;

@interface IGResultsFilterModelsMetadata : NSObject <NSCopying>
{
    NSMutableDictionary *_filterAttributeTypeToModel;
    NSMutableDictionary *_filterAttributeTypeToDiffIdentifierToModel;
    NSString *_identifier;
    NSArray *_filterConfigs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *filterConfigs; // @synthesize filterConfigs=_filterConfigs;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)removeAllItems;
- (void)setSelectedItem:(id)arg1;
- (void)removeSelectedItem:(id)arg1;
- (id)getSelectedItemForKey:(id)arg1;
@property(readonly, nonatomic) NSArray *selectedItems;
- (void)renewIdentifier;
- (id)initWithFilterConfigs:(id)arg1;

@end

