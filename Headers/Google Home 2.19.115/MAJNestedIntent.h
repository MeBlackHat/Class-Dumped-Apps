//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class MAJAndroidClipData, MAJFormattedValue, NSMutableArray, NSString;

@interface MAJNestedIntent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *action; // @dynamic action;
@property(retain, nonatomic) NSMutableArray *categoryArray; // @dynamic categoryArray;
@property(readonly, nonatomic) unsigned long long categoryArray_Count; // @dynamic categoryArray_Count;
@property(retain, nonatomic) MAJAndroidClipData *clipData; // @dynamic clipData;
@property(retain, nonatomic) MAJFormattedValue *componentName; // @dynamic componentName;
@property(retain, nonatomic) MAJFormattedValue *data_p; // @dynamic data_p;
@property(retain, nonatomic) NSMutableArray *extraArray; // @dynamic extraArray;
@property(readonly, nonatomic) unsigned long long extraArray_Count; // @dynamic extraArray_Count;
@property(nonatomic) int flags; // @dynamic flags;
@property(nonatomic) _Bool hasAction; // @dynamic hasAction;
@property(nonatomic) _Bool hasClipData; // @dynamic hasClipData;
@property(nonatomic) _Bool hasComponentName; // @dynamic hasComponentName;
@property(nonatomic) _Bool hasData_p; // @dynamic hasData_p;
@property(nonatomic) _Bool hasFlags; // @dynamic hasFlags;
@property(nonatomic) _Bool hasPkg; // @dynamic hasPkg;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(retain, nonatomic) MAJFormattedValue *pkg; // @dynamic pkg;
@property(copy, nonatomic) NSString *type; // @dynamic type;

@end

