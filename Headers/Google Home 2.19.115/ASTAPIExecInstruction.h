//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Array;

@interface ASTAPIExecInstruction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBInt32Array *bbArgsArray; // @dynamic bbArgsArray;
@property(readonly, nonatomic) unsigned long long bbArgsArray_Count; // @dynamic bbArgsArray_Count;
@property(nonatomic) _Bool hasOpcode; // @dynamic hasOpcode;
@property(nonatomic) int opcode; // @dynamic opcode;

@end

