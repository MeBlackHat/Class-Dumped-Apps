//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GPBMessage.h>

@class ASMResourceKey, ASMSearchBox;

@interface ASMSearchAlternative : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ASMResourceKey *bottomNavKey; // @dynamic bottomNavKey;
@property(retain, nonatomic) ASMResourceKey *bottomNavSelection; // @dynamic bottomNavSelection;
@property(nonatomic) _Bool hasBottomNavKey; // @dynamic hasBottomNavKey;
@property(nonatomic) _Bool hasBottomNavSelection; // @dynamic hasBottomNavSelection;
@property(nonatomic) _Bool hasSearchBox; // @dynamic hasSearchBox;
@property(nonatomic) _Bool hasSearchCorpusKey; // @dynamic hasSearchCorpusKey;
@property(retain, nonatomic) ASMSearchBox *searchBox; // @dynamic searchBox;
@property(retain, nonatomic) ASMResourceKey *searchCorpusKey; // @dynamic searchCorpusKey;

@end

