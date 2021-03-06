//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTICommand, YTIFormattedString, YTIPhoneVerificationButtonSupportedRenderers;

@interface YTIUploadStatusRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIPhoneVerificationButtonSupportedRenderers *activateVideo; // @dynamic activateVideo;
@property(retain, nonatomic) YTIFormattedString *detailedMessage; // @dynamic detailedMessage;
@property(nonatomic) _Bool hasActivateVideo; // @dynamic hasActivateVideo;
@property(nonatomic) _Bool hasDetailedMessage; // @dynamic hasDetailedMessage;
@property(nonatomic) _Bool hasHelpEndpoint; // @dynamic hasHelpEndpoint;
@property(nonatomic) _Bool hasMessage; // @dynamic hasMessage;
@property(nonatomic) _Bool hasShortWatchURL; // @dynamic hasShortWatchURL;
@property(nonatomic) _Bool hasUploadStatus; // @dynamic hasUploadStatus;
@property(nonatomic) _Bool hasVerifyUser; // @dynamic hasVerifyUser;
@property(nonatomic) _Bool hasWatchEndpoint; // @dynamic hasWatchEndpoint;
@property(retain, nonatomic) YTICommand *helpEndpoint; // @dynamic helpEndpoint;
@property(retain, nonatomic) YTIFormattedString *message; // @dynamic message;
@property(retain, nonatomic) YTIFormattedString *shortWatchURL; // @dynamic shortWatchURL;
@property(nonatomic) int uploadStatus; // @dynamic uploadStatus;
@property(retain, nonatomic) YTIPhoneVerificationButtonSupportedRenderers *verifyUser; // @dynamic verifyUser;
@property(retain, nonatomic) YTICommand *watchEndpoint; // @dynamic watchEndpoint;

@end

