//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class PhotoEditorState_OpenPhoto, PhotoEditorState_SavePhoto;

@interface PhotoEditorState : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasOpenPhoto; // @dynamic hasOpenPhoto;
@property(nonatomic) _Bool hasSavePhoto; // @dynamic hasSavePhoto;
@property(retain, nonatomic) PhotoEditorState_OpenPhoto *openPhoto; // @dynamic openPhoto;
@property(retain, nonatomic) PhotoEditorState_SavePhoto *savePhoto; // @dynamic savePhoto;

@end

