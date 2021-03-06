//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GHCCLottieAnimation, GHCClientRpcInvocation, GHCConfirmationDialog, GHCDividerLine, GHCPreferenceId, GHCPreferenceNewScreenAction, GHCPreferenceState, GPBEnumArray, NSMutableArray, NSString;

@interface GHCPreferenceNode : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int actionType; // @dynamic actionType;
@property(retain, nonatomic) GHCCLottieAnimation *animation; // @dynamic animation;
@property(retain, nonatomic) GPBEnumArray *appEnvironmentConditionsArray; // @dynamic appEnvironmentConditionsArray;
@property(readonly, nonatomic) unsigned long long appEnvironmentConditionsArray_Count; // @dynamic appEnvironmentConditionsArray_Count;
@property(copy, nonatomic) NSString *childSectionHeader; // @dynamic childSectionHeader;
@property(retain, nonatomic) NSMutableArray *childrenArray; // @dynamic childrenArray;
@property(readonly, nonatomic) unsigned long long childrenArray_Count; // @dynamic childrenArray_Count;
@property(retain, nonatomic) GHCConfirmationDialog *confirmationDialog; // @dynamic confirmationDialog;
@property(copy, nonatomic) NSString *deeplink; // @dynamic deeplink;
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(retain, nonatomic) GHCDividerLine *dividerLine; // @dynamic dividerLine;
@property(copy, nonatomic) NSString *error; // @dynamic error;
@property(nonatomic) _Bool hasAnimation; // @dynamic hasAnimation;
@property(nonatomic) _Bool hasConfirmationDialog; // @dynamic hasConfirmationDialog;
@property(nonatomic) _Bool hasDividerLine; // @dynamic hasDividerLine;
@property(nonatomic) _Bool hasPreferenceId; // @dynamic hasPreferenceId;
@property(nonatomic) _Bool hasRpcInvocation; // @dynamic hasRpcInvocation;
@property(nonatomic) _Bool hasState; // @dynamic hasState;
@property(nonatomic) int iconSize; // @dynamic iconSize;
@property(copy, nonatomic) NSString *iconURL; // @dynamic iconURL;
@property(retain, nonatomic) GHCPreferenceNewScreenAction *newScreenAction; // @dynamic newScreenAction;
@property(retain, nonatomic) GHCPreferenceNode *newScreenRootNode; // @dynamic newScreenRootNode;
@property(readonly, nonatomic) int nextScreenOneOfCase; // @dynamic nextScreenOneOfCase;
@property(retain, nonatomic) GHCPreferenceId *preferenceId; // @dynamic preferenceId;
@property(retain, nonatomic) NSMutableArray *realTimeTraitsArray; // @dynamic realTimeTraitsArray;
@property(readonly, nonatomic) unsigned long long realTimeTraitsArray_Count; // @dynamic realTimeTraitsArray_Count;
@property(nonatomic) _Bool refreshScreenOnReturn; // @dynamic refreshScreenOnReturn;
@property(retain, nonatomic) GPBEnumArray *renderModifiersArray; // @dynamic renderModifiersArray;
@property(readonly, nonatomic) unsigned long long renderModifiersArray_Count; // @dynamic renderModifiersArray_Count;
@property(nonatomic) int renderType; // @dynamic renderType;
@property(retain, nonatomic) GHCClientRpcInvocation *rpcInvocation; // @dynamic rpcInvocation;
@property(copy, nonatomic) NSString *secondaryIconURL; // @dynamic secondaryIconURL;
@property(retain, nonatomic) GHCPreferenceState *state; // @dynamic state;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) GPBEnumArray *updateTypesArray; // @dynamic updateTypesArray;
@property(readonly, nonatomic) unsigned long long updateTypesArray_Count; // @dynamic updateTypesArray_Count;

@end

