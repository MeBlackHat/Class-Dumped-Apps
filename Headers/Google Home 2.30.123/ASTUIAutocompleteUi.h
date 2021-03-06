//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASTUIAutocompleteMetadata, ASTUIServiceSettingsImage, NSString;

@interface ASTUIAutocompleteUi : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *autocompleteHeaderText; // @dynamic autocompleteHeaderText;
@property(retain, nonatomic) ASTUIAutocompleteMetadata *autocompleteMetadata; // @dynamic autocompleteMetadata;
@property(copy, nonatomic) NSString *autocompleteSubHeader; // @dynamic autocompleteSubHeader;
@property(retain, nonatomic) ASTUIServiceSettingsImage *autocompleteSuggestionImage; // @dynamic autocompleteSuggestionImage;
@property(nonatomic) _Bool hasAutocompleteHeaderText; // @dynamic hasAutocompleteHeaderText;
@property(nonatomic) _Bool hasAutocompleteMetadata; // @dynamic hasAutocompleteMetadata;
@property(nonatomic) _Bool hasAutocompleteSubHeader; // @dynamic hasAutocompleteSubHeader;
@property(nonatomic) _Bool hasAutocompleteSuggestionImage; // @dynamic hasAutocompleteSuggestionImage;
@property(nonatomic) _Bool hasSuggestionType; // @dynamic hasSuggestionType;
@property(nonatomic) int suggestionType; // @dynamic suggestionType;

@end

