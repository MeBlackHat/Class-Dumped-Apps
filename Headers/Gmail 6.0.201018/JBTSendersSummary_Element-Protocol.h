//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JBTContactsSummary_Element-Protocol.h"
#import "JavaObject-Protocol.h"

@class ComGoogleCommonBaseOptional, JBTSendersSummary_Element_Type;
@protocol JBTContactReference;

@protocol JBTSendersSummary_Element <JBTContactsSummary_Element, JavaObject>
- (ComGoogleCommonBaseOptional *)suspiciousSendersDisplayName;
- (ComGoogleCommonBaseOptional *)getProfilePicturePlaceholderAsset;
- (_Bool)isSearchTerm;
- (_Bool)isUnread;
- (_Bool)isHighlighted;
- (id <JBTContactReference>)getContactReference;
- (JBTSendersSummary_Element_Type *)getType;
@end

