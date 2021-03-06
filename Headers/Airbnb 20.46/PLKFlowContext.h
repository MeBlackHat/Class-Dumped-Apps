//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkKit/NSCopying-Protocol.h>

@class NSArray, NSDate, NSError, NSMutableArray, NSMutableDictionary, NSNumber, NSString, PLKConfiguration, PLKCredentials, PLKInstitution, PLKLinkAPI, PLKLinkAPIMessage;

@interface PLKFlowContext : NSObject <NSCopying>
{
    _Bool _plaidBranded;
    _Bool _isOAuth;
    _Bool _delegateUsingEventCallback;
    PLKInstitution *_institution;
    PLKConfiguration *_configuration;
    PLKLinkAPI *_linkAPI;
    PLKCredentials *_credentials;
    id _authSession;
    NSDate *_openStartedAt;
    NSObject *_mfa;
    NSString *_mfaType;
    NSObject *_mfaDevice;
    NSMutableArray *_mfaAnswers;
    NSArray *_flexibleInputs;
    NSMutableDictionary *_flexibleInputResponses;
    NSArray *_selectedAccounts;
    NSArray *_availableAccounts;
    NSMutableArray *_microdepositAmounts;
    NSString *_status;
    NSError *_error;
    NSString *_itemAddToken;
    NSString *_publicToken;
    NSString *_paymentToken;
    NSString *_patchPublicToken;
    NSString *_oauthStateId;
    NSString *_customInitializerIdentifier;
    PLKLinkAPIMessage *_message;
    PLKLinkAPIMessage *_lastMessage;
    NSString *_currentPane;
    NSString *_previousPane;
    unsigned long long _fallbackAuthType;
    long long _manualMicrodepositsRemainingAttempts;
    NSDate *_manualMicrodepositsDateSent;
    NSNumber *_institutionButtonIndex;
    NSNumber *_searchResultIndex;
    NSDate *_loadingPaneStart;
    NSDate *_recaptchaPaneStart;
    double _loadingPaneDuration;
    double _recaptchaPaneDuration;
    NSArray *_searchResults;
    NSMutableArray *_searchQueries;
}

- (void).cxx_destruct;
@property(retain) NSMutableArray *searchQueries; // @synthesize searchQueries=_searchQueries;
@property(retain) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property double recaptchaPaneDuration; // @synthesize recaptchaPaneDuration=_recaptchaPaneDuration;
@property double loadingPaneDuration; // @synthesize loadingPaneDuration=_loadingPaneDuration;
@property(retain) NSDate *recaptchaPaneStart; // @synthesize recaptchaPaneStart=_recaptchaPaneStart;
@property(retain) NSDate *loadingPaneStart; // @synthesize loadingPaneStart=_loadingPaneStart;
@property(retain) NSNumber *searchResultIndex; // @synthesize searchResultIndex=_searchResultIndex;
@property(retain) NSNumber *institutionButtonIndex; // @synthesize institutionButtonIndex=_institutionButtonIndex;
@property(retain) NSDate *manualMicrodepositsDateSent; // @synthesize manualMicrodepositsDateSent=_manualMicrodepositsDateSent;
@property long long manualMicrodepositsRemainingAttempts; // @synthesize manualMicrodepositsRemainingAttempts=_manualMicrodepositsRemainingAttempts;
@property _Bool delegateUsingEventCallback; // @synthesize delegateUsingEventCallback=_delegateUsingEventCallback;
@property(nonatomic) _Bool isOAuth; // @synthesize isOAuth=_isOAuth;
@property(nonatomic) unsigned long long fallbackAuthType; // @synthesize fallbackAuthType=_fallbackAuthType;
@property _Bool plaidBranded; // @synthesize plaidBranded=_plaidBranded;
@property(retain) NSString *previousPane; // @synthesize previousPane=_previousPane;
@property(retain) NSString *currentPane; // @synthesize currentPane=_currentPane;
@property(retain) PLKLinkAPIMessage *lastMessage; // @synthesize lastMessage=_lastMessage;
@property(retain) PLKLinkAPIMessage *message; // @synthesize message=_message;
@property(retain) NSString *customInitializerIdentifier; // @synthesize customInitializerIdentifier=_customInitializerIdentifier;
@property(retain) NSString *oauthStateId; // @synthesize oauthStateId=_oauthStateId;
@property(retain) NSString *patchPublicToken; // @synthesize patchPublicToken=_patchPublicToken;
@property(retain) NSString *paymentToken; // @synthesize paymentToken=_paymentToken;
@property(retain) NSString *publicToken; // @synthesize publicToken=_publicToken;
@property(retain) NSString *itemAddToken; // @synthesize itemAddToken=_itemAddToken;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSString *status; // @synthesize status=_status;
@property(retain) NSMutableArray *microdepositAmounts; // @synthesize microdepositAmounts=_microdepositAmounts;
@property(retain) NSArray *availableAccounts; // @synthesize availableAccounts=_availableAccounts;
@property(retain) NSArray *selectedAccounts; // @synthesize selectedAccounts=_selectedAccounts;
@property(retain) NSMutableDictionary *flexibleInputResponses; // @synthesize flexibleInputResponses=_flexibleInputResponses;
@property(retain) NSArray *flexibleInputs; // @synthesize flexibleInputs=_flexibleInputs;
@property(retain) NSMutableArray *mfaAnswers; // @synthesize mfaAnswers=_mfaAnswers;
@property(retain) NSObject *mfaDevice; // @synthesize mfaDevice=_mfaDevice;
@property(retain) NSString *mfaType; // @synthesize mfaType=_mfaType;
@property(retain) NSObject *mfa; // @synthesize mfa=_mfa;
@property(retain) NSDate *openStartedAt; // @synthesize openStartedAt=_openStartedAt;
@property(retain) id authSession; // @synthesize authSession=_authSession;
@property(retain) PLKCredentials *credentials; // @synthesize credentials=_credentials;
@property(retain) PLKLinkAPI *linkAPI; // @synthesize linkAPI=_linkAPI;
@property(retain) PLKConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain) PLKInstitution *institution; // @synthesize institution=_institution;
- (id)asLinkWebURLWithRestricted:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isOAuthCodeMode;
@property(readonly, nonatomic) _Bool isCustomInitializer;
@property(readonly, nonatomic) _Bool isPatch;
@property(readonly) NSArray *searchQueryLog;
- (void)addSearchQuery:(id)arg1;
- (void)reset;
- (void)destroyOpenContext;
- (_Bool)createOpenContext;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)json;
- (id)initWithDictionary:(id)arg1 configration:(id)arg2;
- (id)initWithConfigration:(id)arg1;

@end

