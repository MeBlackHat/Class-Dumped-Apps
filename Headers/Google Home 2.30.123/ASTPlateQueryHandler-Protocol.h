//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ASTAssistantClientInteraction, ASTSuggestionItem, NSString;

@protocol ASTPlateQueryHandler <NSObject>
- (void)handleClientInteraction:(ASTAssistantClientInteraction *)arg1;
- (void)handleInteractionWithSuggestion:(ASTSuggestionItem *)arg1;
- (void)cancelCurrentQuery;
- (void)startTextQuery:(NSString *)arg1;
- (void)startVoiceQuery;

@optional
- (void)startSoundSearchQuery;
@end

