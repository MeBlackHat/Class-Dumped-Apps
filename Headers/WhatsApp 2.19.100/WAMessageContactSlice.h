//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageContainerSlice.h"

@class NSArray, NSLayoutManager, NSTextContainer, NSTextStorage;

@interface WAMessageContactSlice : WAMessageContainerSlice
{
    NSTextStorage *_textStorage;
    NSTextContainer *_textContainer;
    NSLayoutManager *_layoutManager;
    NSArray *_contacts;
}

+ (Class)viewClass;
@property(readonly, copy, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
- (void).cxx_destruct;
- (void)drawInCurrentContext;
- (void)internalFitToWidth:(double)arg1;
- (id)initWithMessages:(id)arg1 metrics:(CDStruct_f481d0b7)arg2;

@end

