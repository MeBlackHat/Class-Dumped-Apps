//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAMessage.h>

@class NSArray, NSSet, NSString, WAPBMessage_TemplateMessage_HydratedFourRowTemplate;

@interface WAMessage (TemplateMessage)
- (void)markButtonAsTappedWithIndex:(unsigned int)arg1;
@property(readonly, nonatomic) NSSet *templateReplyButtonStates;
@property(readonly, nonatomic) NSArray *hydratedTemplateReplyButtons;
@property(readonly, nonatomic) NSArray *hydratedTemplateActionButtons;
@property(readonly, nonatomic) NSString *hydratedTextForStatus;
@property(readonly, nonatomic) NSString *hydratedCopiedText;
@property(readonly, nonatomic) NSString *hydratedFooterText;
@property(readonly, nonatomic) NSString *hydratedContentText;
@property(readonly, nonatomic) NSString *hydratedTitleText;
@property(readonly, nonatomic) WAPBMessage_TemplateMessage_HydratedFourRowTemplate *hydratedTemplateMessage;
- (_Bool)hasActionButtons;
@property(readonly, nonatomic) _Bool hasReplyButtons;
@property(readonly, nonatomic) _Bool isTemplateMessage;
@end

