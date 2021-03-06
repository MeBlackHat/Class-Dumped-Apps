//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTCommandHandler-Protocol.h>

@class GIMMe, NSString, YTFlagService, YTICommand, YTReportFormModalController;
@protocol YTResponder, YTUserAuth;

@interface YTGetReportFormEndpointCommand : NSObject <YTCommandHandler>
{
    YTFlagService *_flagService;
    id <YTUserAuth> _userAuthenticator;
    YTICommand *_endpoint;
    id _entry;
    id <YTResponder> _sender;
    GIMMe *_gimme;
    YTReportFormModalController *_reportFormModalController;
}

@property(retain, nonatomic) YTReportFormModalController *reportFormModalController; // @synthesize reportFormModalController=_reportFormModalController;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)reset;
- (void)makeReportFormRequest;
- (void)authenticateThenMakeReportFormRequest;
- (void)executeWithCommand:(id)arg1 entry:(id)arg2 fromView:(id)arg3 sender:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

