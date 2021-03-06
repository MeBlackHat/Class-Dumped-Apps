//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSLayoutManagerDelegate-Protocol.h"

@class AWETextLayoutManager, AWETextView, NSString;

@interface AWETextViewManager : NSObject <NSLayoutManagerDelegate>
{
    AWETextView *_textView;
    AWETextLayoutManager *_layoutManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AWETextLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property(retain, nonatomic) AWETextView *textView; // @synthesize textView=_textView;
- (_Bool)layoutManager:(id)arg1 shouldBreakLineByWordBeforeCharacterAtIndex:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

