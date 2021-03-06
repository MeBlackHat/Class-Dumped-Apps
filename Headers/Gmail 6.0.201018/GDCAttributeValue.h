//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GDCPermission, GDCSimpleAttributeValue, GPBInt64Array, NSMutableArray, NSString;

@interface GDCAttributeValue : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool booleanValue; // @dynamic booleanValue;
@property(copy, nonatomic) NSString *dateStringValue; // @dynamic dateStringValue;
@property(nonatomic) _Bool hasBooleanValue; // @dynamic hasBooleanValue;
@property(nonatomic) _Bool hasDateStringValue; // @dynamic hasDateStringValue;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasIntegerValue; // @dynamic hasIntegerValue;
@property(nonatomic) _Bool hasLongTextValue; // @dynamic hasLongTextValue;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasSelectionValue; // @dynamic hasSelectionValue;
@property(nonatomic) _Bool hasSimpleValue; // @dynamic hasSimpleValue;
@property(nonatomic) _Bool hasTextValue; // @dynamic hasTextValue;
@property(nonatomic) _Bool hasUserValue; // @dynamic hasUserValue;
@property(nonatomic) _Bool hasValueType; // @dynamic hasValueType;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(nonatomic) long long integerValue; // @dynamic integerValue;
@property(retain, nonatomic) GPBInt64Array *integerValuesArray; // @dynamic integerValuesArray;
@property(readonly, nonatomic) unsigned long long integerValuesArray_Count; // @dynamic integerValuesArray_Count;
@property(copy, nonatomic) NSString *longTextValue; // @dynamic longTextValue;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSMutableArray *perUserValueArray; // @dynamic perUserValueArray;
@property(readonly, nonatomic) unsigned long long perUserValueArray_Count; // @dynamic perUserValueArray_Count;
@property(copy, nonatomic) NSString *selectionValue; // @dynamic selectionValue;
@property(retain, nonatomic) NSMutableArray *selectionValuesArray; // @dynamic selectionValuesArray;
@property(readonly, nonatomic) unsigned long long selectionValuesArray_Count; // @dynamic selectionValuesArray_Count;
@property(retain, nonatomic) GDCSimpleAttributeValue *simpleValue; // @dynamic simpleValue;
@property(copy, nonatomic) NSString *textValue; // @dynamic textValue;
@property(retain, nonatomic) NSMutableArray *textValuesArray; // @dynamic textValuesArray;
@property(readonly, nonatomic) unsigned long long textValuesArray_Count; // @dynamic textValuesArray_Count;
@property(retain, nonatomic) NSMutableArray *userScopedValuesArray; // @dynamic userScopedValuesArray;
@property(readonly, nonatomic) unsigned long long userScopedValuesArray_Count; // @dynamic userScopedValuesArray_Count;
@property(retain, nonatomic) GDCPermission *userValue; // @dynamic userValue;
@property(retain, nonatomic) NSMutableArray *userValuesArray; // @dynamic userValuesArray;
@property(readonly, nonatomic) unsigned long long userValuesArray_Count; // @dynamic userValuesArray_Count;
@property(nonatomic) int valueType; // @dynamic valueType;

@end

