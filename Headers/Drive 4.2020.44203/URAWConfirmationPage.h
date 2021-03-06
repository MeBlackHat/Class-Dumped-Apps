//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "URAWPage-Protocol.h"

@class NSArray, NSDictionary, NSString, ReportAbuseOption, URAWPageFactory;
@protocol URAWBackendManager;

@interface URAWConfirmationPage : NSObject <URAWPage>
{
    int _configName;
    NSDictionary *_stringDict;
    NSDictionary *_messageDict;
    NSString *_reportedContentID;
    ReportAbuseOption *_option;
    NSString *_reporterRole;
    NSString *_sourceApp;
    NSObject<URAWBackendManager> *_backendManager;
    URAWPageFactory *_pageFactory;
    NSArray *_tableData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *tableData; // @synthesize tableData=_tableData;
@property(readonly, nonatomic) __weak URAWPageFactory *pageFactory; // @synthesize pageFactory=_pageFactory;
@property(readonly, nonatomic) NSObject<URAWBackendManager> *backendManager; // @synthesize backendManager=_backendManager;
@property(readonly, copy, nonatomic) NSString *sourceApp; // @synthesize sourceApp=_sourceApp;
@property(readonly, copy, nonatomic) NSString *reporterRole; // @synthesize reporterRole=_reporterRole;
@property(readonly, nonatomic) int configName; // @synthesize configName=_configName;
@property(readonly, nonatomic) ReportAbuseOption *option; // @synthesize option=_option;
@property(readonly, copy, nonatomic) NSString *reportedContentID; // @synthesize reportedContentID=_reportedContentID;
@property(readonly, nonatomic) NSDictionary *messageDict; // @synthesize messageDict=_messageDict;
@property(readonly, nonatomic) NSDictionary *stringDict; // @synthesize stringDict=_stringDict;
- (id)tapClose;
- (void)tapOkayWithCompletion:(CDUnknownBlockType)arg1;
- (void)tapRow:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showInWidget:(id)arg1;
@property(readonly, copy, nonatomic) NSString *headerText;
- (id)initWithStringDict:(id)arg1 messageDict:(id)arg2 option:(id)arg3 reportedContentID:(id)arg4 configName:(int)arg5 reporterRole:(id)arg6 sourceApp:(id)arg7 backendManager:(id)arg8 pageFactory:(id)arg9;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

