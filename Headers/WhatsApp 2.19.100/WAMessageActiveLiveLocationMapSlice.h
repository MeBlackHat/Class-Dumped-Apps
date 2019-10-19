//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageContainerSlice.h"

@class NSAttributedString, NSDate, WAWeakTimer;

@interface WAMessageActiveLiveLocationMapSlice : WAMessageContainerSlice
{
    WAWeakTimer *_timer;
    struct CGSize _aspectRatio;
    _Bool _isActive;
    NSAttributedString *_statusAttributedString;
    NSDate *_liveLocationEndDate;
}

+ (Class)viewClass;
@property(readonly, nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(readonly, nonatomic) NSDate *liveLocationEndDate; // @synthesize liveLocationEndDate=_liveLocationEndDate;
@property(readonly, nonatomic) NSAttributedString *statusAttributedString; // @synthesize statusAttributedString=_statusAttributedString;
- (void).cxx_destruct;
- (void)internalFitToWidth:(double)arg1;
- (void)invalidateIsActiveForMessage:(id)arg1;
- (_Bool)liveLocationIsActiveForMessage:(id)arg1;
- (void)scheduleExpirationTimerIfNeededForMessage:(id)arg1 now:(id)arg2;
- (id)initWithMessages:(id)arg1 metrics:(CDStruct_f481d0b7)arg2;

@end

