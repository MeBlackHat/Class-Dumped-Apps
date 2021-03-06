//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Array, MAJAndroidPreferredAppInformation, MAJExecutionState, MAJFormattedValue, MAJLocalizableMessage, NSMutableArray, NSString;

@interface MAJUserIntent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) MAJAndroidPreferredAppInformation *androidPreferredAppInfo; // @dynamic androidPreferredAppInfo;
@property(copy, nonatomic) NSString *appCategoryName; // @dynamic appCategoryName;
@property(retain, nonatomic) MAJLocalizableMessage *appCategoryNameL10N; // @dynamic appCategoryNameL10N;
@property(retain, nonatomic) NSMutableArray *argumentConstraintArray; // @dynamic argumentConstraintArray;
@property(readonly, nonatomic) unsigned long long argumentConstraintArray_Count; // @dynamic argumentConstraintArray_Count;
@property(retain, nonatomic) MAJExecutionState *canceled; // @dynamic canceled;
@property(copy, nonatomic) NSString *deprecatedServiceSelectionTitle; // @dynamic deprecatedServiceSelectionTitle;
@property(retain, nonatomic) MAJLocalizableMessage *deprecatedServiceSelectionTitleL10N; // @dynamic deprecatedServiceSelectionTitleL10N;
@property(copy, nonatomic) NSString *deprecatedTitle; // @dynamic deprecatedTitle;
@property(retain, nonatomic) MAJLocalizableMessage *deprecatedTitleL10N; // @dynamic deprecatedTitleL10N;
@property(retain, nonatomic) MAJExecutionState *done; // @dynamic done;
@property(retain, nonatomic) NSMutableArray *editInfoArray; // @dynamic editInfoArray;
@property(readonly, nonatomic) unsigned long long editInfoArray_Count; // @dynamic editInfoArray_Count;
@property(retain, nonatomic) MAJExecutionState *error; // @dynamic error;
@property(retain, nonatomic) NSMutableArray *executeInfoArray; // @dynamic executeInfoArray;
@property(readonly, nonatomic) unsigned long long executeInfoArray_Count; // @dynamic executeInfoArray_Count;
@property(nonatomic) _Bool hasAndroidPreferredAppInfo; // @dynamic hasAndroidPreferredAppInfo;
@property(nonatomic) _Bool hasAppCategoryName; // @dynamic hasAppCategoryName;
@property(nonatomic) _Bool hasAppCategoryNameL10N; // @dynamic hasAppCategoryNameL10N;
@property(nonatomic) _Bool hasCanceled; // @dynamic hasCanceled;
@property(nonatomic) _Bool hasDeprecatedServiceSelectionTitle; // @dynamic hasDeprecatedServiceSelectionTitle;
@property(nonatomic) _Bool hasDeprecatedServiceSelectionTitleL10N; // @dynamic hasDeprecatedServiceSelectionTitleL10N;
@property(nonatomic) _Bool hasDeprecatedTitle; // @dynamic hasDeprecatedTitle;
@property(nonatomic) _Bool hasDeprecatedTitleL10N; // @dynamic hasDeprecatedTitleL10N;
@property(nonatomic) _Bool hasDone; // @dynamic hasDone;
@property(nonatomic) _Bool hasError; // @dynamic hasError;
@property(nonatomic) _Bool hasImageURL; // @dynamic hasImageURL;
@property(nonatomic) _Bool hasIsUndoable; // @dynamic hasIsUndoable;
@property(nonatomic) _Bool hasRequiredConfirmation; // @dynamic hasRequiredConfirmation;
@property(nonatomic) _Bool hasServiceSelectionTitle; // @dynamic hasServiceSelectionTitle;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasUncertainResult; // @dynamic hasUncertainResult;
@property(copy, nonatomic) NSString *imageURL; // @dynamic imageURL;
@property(nonatomic) _Bool isUndoable; // @dynamic isUndoable;
@property(retain, nonatomic) GPBInt32Array *requiredArgumentIdArray; // @dynamic requiredArgumentIdArray;
@property(readonly, nonatomic) unsigned long long requiredArgumentIdArray_Count; // @dynamic requiredArgumentIdArray_Count;
@property(nonatomic) int requiredConfirmation; // @dynamic requiredConfirmation;
@property(retain, nonatomic) MAJFormattedValue *serviceSelectionTitle; // @dynamic serviceSelectionTitle;
@property(retain, nonatomic) GPBInt32Array *shownArgumentIdArray; // @dynamic shownArgumentIdArray;
@property(readonly, nonatomic) unsigned long long shownArgumentIdArray_Count; // @dynamic shownArgumentIdArray_Count;
@property(retain, nonatomic) MAJFormattedValue *title; // @dynamic title;
@property(retain, nonatomic) MAJExecutionState *uncertainResult; // @dynamic uncertainResult;

@end

