//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IGSoryMusicTypewriterStickerPage : NSObject
{
    NSString *_text;
    long long _firstPhraseIndex;
    long long _lastPhraseIndex;
    NSArray *_phraseModels;
}

@property(readonly, nonatomic) NSArray *phraseModels; // @synthesize phraseModels=_phraseModels;
@property(readonly, nonatomic) long long lastPhraseIndex; // @synthesize lastPhraseIndex=_lastPhraseIndex;
@property(readonly, nonatomic) long long firstPhraseIndex; // @synthesize firstPhraseIndex=_firstPhraseIndex;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *words;
- (id)initWithText:(id)arg1 firstPhraseIndex:(long long)arg2 lastPhraseIndex:(long long)arg3 phraseModels:(id)arg4;

@end

