//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleAppsExtensionsGmailHostAppDetails_ComposeMole_AttachmentStatus, ComGoogleAppsExtensionsGmailHostAppDetails_ComposeMole_MessagePart, NSString;
@protocol ComGoogleProtobufProtocolStringList, JavaUtilList;

@protocol ComGoogleAppsExtensionsGmailHostAppDetails_ComposeMoleOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (NSString *)getBody;
- (_Bool)hasBody;
- (ComGoogleAppsExtensionsGmailHostAppDetails_ComposeMole_MessagePart *)getDraftBodyWithInt:(int)arg1;
- (id <JavaUtilList>)getDraftBodyList;
- (int)getDraftBodyCount;
- (NSString *)getDraftId;
- (_Bool)hasDraftId;
- (ComGoogleAppsExtensionsGmailHostAppDetails_ComposeMole_AttachmentStatus *)getAttachmentStatus;
- (_Bool)hasAttachmentStatus;
- (NSString *)getSubject;
- (_Bool)hasSubject;
- (NSString *)getBccRecipientsWithInt:(int)arg1;
- (id <ComGoogleProtobufProtocolStringList>)getBccRecipientsList;
- (int)getBccRecipientsCount;
- (NSString *)getCcRecipientsWithInt:(int)arg1;
- (id <ComGoogleProtobufProtocolStringList>)getCcRecipientsList;
- (int)getCcRecipientsCount;
- (NSString *)getToRecipientsWithInt:(int)arg1;
- (id <ComGoogleProtobufProtocolStringList>)getToRecipientsList;
- (int)getToRecipientsCount;
@end

