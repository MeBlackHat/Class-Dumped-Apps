//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HMESpaceNameValidator : NSObject
{
}

+ (_Bool)nameContainsVoiceCommandsBlacklistCharacters:(id)arg1;
+ (id)spaceNameVoiceCommandsNotCompatiableWarning;
+ (id)spaceNameTooLongError:(unsigned long long)arg1;
+ (id)spaceNameTooShortError:(unsigned long long)arg1;
+ (id)spaceNameOnlyContainsWhitespaceCharactersError;
+ (id)warningDescriptionForSpaceName:(id)arg1;
+ (id)invalidDescriptionForSpaceName:(id)arg1;

@end

