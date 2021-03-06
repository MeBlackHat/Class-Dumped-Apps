//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSMutableArray, NSString;

@interface BTLLabelTeaser : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *deprecatedSendersText; // @dynamic deprecatedSendersText;
@property(nonatomic) int displayPosition; // @dynamic displayPosition;
@property(nonatomic) _Bool expiringOfferLabelAvailable; // @dynamic expiringOfferLabelAvailable;
@property(nonatomic) _Bool expiringOfferLabelShown; // @dynamic expiringOfferLabelShown;
@property(nonatomic) int folderType; // @dynamic folderType;
@property(nonatomic) _Bool hasDeprecatedSendersText; // @dynamic hasDeprecatedSendersText;
@property(nonatomic) _Bool hasDisplayPosition; // @dynamic hasDisplayPosition;
@property(nonatomic) _Bool hasExpiringOfferLabelAvailable; // @dynamic hasExpiringOfferLabelAvailable;
@property(nonatomic) _Bool hasExpiringOfferLabelShown; // @dynamic hasExpiringOfferLabelShown;
@property(nonatomic) _Bool hasFolderType; // @dynamic hasFolderType;
@property(nonatomic) _Bool hasHasTeaserConfig; // @dynamic hasHasTeaserConfig;
@property(nonatomic) _Bool hasNewMailLabelAvailable; // @dynamic hasNewMailLabelAvailable;
@property(nonatomic) _Bool hasNewMailLabelShown; // @dynamic hasNewMailLabelShown;
@property(nonatomic) _Bool hasNumNewEmails; // @dynamic hasNumNewEmails;
@property(nonatomic) _Bool hasPromoBadgeLabelTextTooLong; // @dynamic hasPromoBadgeLabelTextTooLong;
@property(nonatomic) _Bool hasPromoBadgeText; // @dynamic hasPromoBadgeText;
@property(nonatomic) _Bool hasPromoTeaserType; // @dynamic hasPromoTeaserType;
@property(nonatomic) _Bool hasTeaserConfig; // @dynamic hasTeaserConfig;
@property(nonatomic) _Bool hasTopPromoLoggingId; // @dynamic hasTopPromoLoggingId;
@property(retain, nonatomic) NSMutableArray *logoInfoArray; // @dynamic logoInfoArray;
@property(readonly, nonatomic) unsigned long long logoInfoArray_Count; // @dynamic logoInfoArray_Count;
@property(nonatomic) _Bool newMailLabelAvailable; // @dynamic newMailLabelAvailable;
@property(nonatomic) _Bool newMailLabelShown; // @dynamic newMailLabelShown;
@property(nonatomic) int numNewEmails; // @dynamic numNewEmails;
@property(nonatomic) _Bool promoBadgeLabelTextTooLong; // @dynamic promoBadgeLabelTextTooLong;
@property(copy, nonatomic) NSString *promoBadgeText; // @dynamic promoBadgeText;
@property(retain, nonatomic) NSMutableArray *promoOfferIdsArray; // @dynamic promoOfferIdsArray;
@property(readonly, nonatomic) unsigned long long promoOfferIdsArray_Count; // @dynamic promoOfferIdsArray_Count;
@property(nonatomic) int promoTeaserType; // @dynamic promoTeaserType;
@property(copy, nonatomic) NSString *topPromoLoggingId; // @dynamic topPromoLoggingId;

@end

