//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageContainerSlice.h"

@class NSLayoutManager, NSTextContainer, NSTextStorage;

@interface WAMessageEmojiSlice : WAMessageContainerSlice
{
    NSTextStorage *_textStorage;
    NSTextContainer *_textContainer;
    NSLayoutManager *_layoutManager;
    struct CGRect _fractionalTextRect;
    unsigned long long _animationStyle;
}

+ (Class)viewClass;
@property(readonly, nonatomic) unsigned long long animationStyle; // @synthesize animationStyle=_animationStyle;
- (void).cxx_destruct;
- (void)drawInCurrentContext;
- (void)internalFitToWidth:(double)arg1;
- (id)initWithMessages:(id)arg1 metrics:(CDStruct_f481d0b7)arg2;

@end

