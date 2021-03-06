//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "STDSChallengeResponse-Protocol.h"
#import "STDSJSONDecodable-Protocol.h"

@class NSArray, NSString, NSURL;
@protocol STDSChallengeResponseImage;

@interface STDSChallengeResponseObject : NSObject <STDSChallengeResponse, STDSJSONDecodable>
{
    _Bool _challengeCompletionIndicator;
    _Bool _showChallengeInfoTextIndicator;
    NSString *_threeDSServerTransactionID;
    NSString *_acsCounterACStoSDK;
    NSString *_acsTransactionID;
    NSString *_acsHTML;
    NSString *_acsHTMLRefresh;
    long long _acsUIType;
    NSString *_challengeInfoHeader;
    NSString *_challengeInfoLabel;
    NSString *_challengeInfoText;
    NSString *_challengeAdditionalInfoText;
    NSArray *_challengeSelectInfo;
    NSString *_expandInfoLabel;
    NSString *_expandInfoText;
    id <STDSChallengeResponseImage> _issuerImage;
    NSArray *_messageExtensions;
    NSString *_messageType;
    NSString *_messageVersion;
    NSURL *_oobAppURL;
    NSString *_oobAppLabel;
    NSString *_oobContinueLabel;
    id <STDSChallengeResponseImage> _paymentSystemImage;
    NSString *_resendInformationLabel;
    NSString *_sdkTransactionID;
    NSString *_submitAuthenticationLabel;
    NSString *_whitelistingInfoText;
    NSString *_whyInfoLabel;
    NSString *_whyInfoText;
    NSString *_transactionStatus;
}

+ (id)decodedObjectFromJSON:(id)arg1 error:(id *)arg2;
+ (id)supportedMessageExtensions;
+ (id)acsUITypeStringMapping;
@property(readonly, nonatomic) NSString *transactionStatus; // @synthesize transactionStatus=_transactionStatus;
@property(readonly, nonatomic) NSString *whyInfoText; // @synthesize whyInfoText=_whyInfoText;
@property(readonly, nonatomic) NSString *whyInfoLabel; // @synthesize whyInfoLabel=_whyInfoLabel;
@property(readonly, nonatomic) NSString *whitelistingInfoText; // @synthesize whitelistingInfoText=_whitelistingInfoText;
@property(readonly, nonatomic) NSString *submitAuthenticationLabel; // @synthesize submitAuthenticationLabel=_submitAuthenticationLabel;
@property(readonly, nonatomic) NSString *sdkTransactionID; // @synthesize sdkTransactionID=_sdkTransactionID;
@property(readonly, nonatomic) NSString *resendInformationLabel; // @synthesize resendInformationLabel=_resendInformationLabel;
@property(readonly, nonatomic) id <STDSChallengeResponseImage> paymentSystemImage; // @synthesize paymentSystemImage=_paymentSystemImage;
@property(readonly, nonatomic) NSString *oobContinueLabel; // @synthesize oobContinueLabel=_oobContinueLabel;
@property(readonly, nonatomic) NSString *oobAppLabel; // @synthesize oobAppLabel=_oobAppLabel;
@property(readonly, nonatomic) NSURL *oobAppURL; // @synthesize oobAppURL=_oobAppURL;
@property(readonly, nonatomic) NSString *messageVersion; // @synthesize messageVersion=_messageVersion;
@property(readonly, nonatomic) NSString *messageType; // @synthesize messageType=_messageType;
@property(readonly, nonatomic) NSArray *messageExtensions; // @synthesize messageExtensions=_messageExtensions;
@property(readonly, nonatomic) id <STDSChallengeResponseImage> issuerImage; // @synthesize issuerImage=_issuerImage;
@property(readonly, nonatomic) NSString *expandInfoText; // @synthesize expandInfoText=_expandInfoText;
@property(readonly, nonatomic) NSString *expandInfoLabel; // @synthesize expandInfoLabel=_expandInfoLabel;
@property(readonly, nonatomic) NSArray *challengeSelectInfo; // @synthesize challengeSelectInfo=_challengeSelectInfo;
@property(readonly, nonatomic) _Bool showChallengeInfoTextIndicator; // @synthesize showChallengeInfoTextIndicator=_showChallengeInfoTextIndicator;
@property(readonly, nonatomic) NSString *challengeAdditionalInfoText; // @synthesize challengeAdditionalInfoText=_challengeAdditionalInfoText;
@property(readonly, nonatomic) NSString *challengeInfoText; // @synthesize challengeInfoText=_challengeInfoText;
@property(readonly, nonatomic) NSString *challengeInfoLabel; // @synthesize challengeInfoLabel=_challengeInfoLabel;
@property(readonly, nonatomic) NSString *challengeInfoHeader; // @synthesize challengeInfoHeader=_challengeInfoHeader;
@property(readonly, nonatomic) _Bool challengeCompletionIndicator; // @synthesize challengeCompletionIndicator=_challengeCompletionIndicator;
@property(readonly, nonatomic) long long acsUIType; // @synthesize acsUIType=_acsUIType;
@property(readonly, nonatomic) NSString *acsHTMLRefresh; // @synthesize acsHTMLRefresh=_acsHTMLRefresh;
@property(readonly, nonatomic) NSString *acsHTML; // @synthesize acsHTML=_acsHTML;
@property(readonly, nonatomic) NSString *acsTransactionID; // @synthesize acsTransactionID=_acsTransactionID;
@property(readonly, nonatomic) NSString *acsCounterACStoSDK; // @synthesize acsCounterACStoSDK=_acsCounterACStoSDK;
@property(readonly, nonatomic) NSString *threeDSServerTransactionID; // @synthesize threeDSServerTransactionID=_threeDSServerTransactionID;
- (void).cxx_destruct;
- (id)initWithThreeDSServerTransactionID:(id)arg1 acsCounterACStoSDK:(id)arg2 acsTransactionID:(id)arg3 acsHTML:(id)arg4 acsHTMLRefresh:(id)arg5 acsUIType:(long long)arg6 challengeCompletionIndicator:(_Bool)arg7 challengeInfoHeader:(id)arg8 challengeInfoLabel:(id)arg9 challengeInfoText:(id)arg10 challengeAdditionalInfoText:(id)arg11 showChallengeInfoTextIndicator:(_Bool)arg12 challengeSelectInfo:(id)arg13 expandInfoLabel:(id)arg14 expandInfoText:(id)arg15 issuerImage:(id)arg16 messageExtensions:(id)arg17 messageVersion:(id)arg18 oobAppURL:(id)arg19 oobAppLabel:(id)arg20 oobContinueLabel:(id)arg21 paymentSystemImage:(id)arg22 resendInformationLabel:(id)arg23 sdkTransactionID:(id)arg24 submitAuthenticationLabel:(id)arg25 whitelistingInfoText:(id)arg26 whyInfoLabel:(id)arg27 whyInfoText:(id)arg28 transactionStatus:(id)arg29;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

