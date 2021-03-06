//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/SLKLayoutItem-Protocol.h>

@class NSDictionary, NSMapTable, NSString;

@interface SLKLayout : NSObject <SLKLayoutItem>
{
    NSDictionary *_propertyContext;
    NSMapTable *_cachedItemSize;
    struct CGRect _frame;
    _Bool hidden;
    long long semanticContentAttribute;
    struct CGSize _layoutSize;
}

@property(readonly, nonatomic) struct CGSize layoutSize; // @synthesize layoutSize=_layoutSize;
@property(copy, nonatomic) NSDictionary *propertyContext; // @synthesize propertyContext=_propertyContext;
@property(nonatomic) long long semanticContentAttribute; // @synthesize semanticContentAttribute;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden;
- (void).cxx_destruct;
- (struct CGSize)sizeOfItem:(id)arg1 thatFits:(struct CGSize)arg2;
- (struct CGSize)sizeOfItem:(id)arg1;
- (void)removeSizeForItem:(id)arg1;
- (void)setSize:(struct CGSize)arg1 forItem:(id)arg2;
- (struct CGSize)sizeOfLayoutWithFrame:(struct CGRect)arg1 updateLayout:(_Bool)arg2;
- (_Bool)shouldLayoutRightToLeft;
@property(nonatomic) struct CGRect frame;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

