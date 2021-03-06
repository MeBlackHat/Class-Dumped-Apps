//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterCardContextModel-Protocol.h>

@class NSAttributedString, NSString, NSURL, TFNTwitterCardContext;

@interface T1BroadcastCellCardViewModel : NSObject <TFNTwitterCardContextModel>
{
    _Bool _isLive;
    TFNTwitterCardContext *_cardContext;
    NSAttributedString *_attributedCategoryString;
    NSAttributedString *_attributedCategorySpacerString;
    NSAttributedString *_attributedLiveString;
    NSAttributedString *_attributedTitleString;
    NSURL *_imageURL;
    struct CGSize _imageDimensions;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize imageDimensions; // @synthesize imageDimensions=_imageDimensions;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(readonly, nonatomic) NSAttributedString *attributedTitleString; // @synthesize attributedTitleString=_attributedTitleString;
@property(readonly, nonatomic) NSAttributedString *attributedLiveString; // @synthesize attributedLiveString=_attributedLiveString;
@property(readonly, nonatomic) NSAttributedString *attributedCategorySpacerString; // @synthesize attributedCategorySpacerString=_attributedCategorySpacerString;
@property(readonly, nonatomic) NSAttributedString *attributedCategoryString; // @synthesize attributedCategoryString=_attributedCategoryString;
@property(retain, nonatomic) TFNTwitterCardContext *cardContext; // @synthesize cardContext=_cardContext;
- (id)initWithCardContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

