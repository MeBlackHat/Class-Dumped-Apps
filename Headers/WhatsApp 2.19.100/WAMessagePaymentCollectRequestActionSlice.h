//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageContainerSlice.h"

@class WAMessageID;
@protocol WAMessagePaymentCollectRequestActionSliceDelegate;

@interface WAMessagePaymentCollectRequestActionSlice : WAMessageContainerSlice
{
    _Bool _divider;
    _Bool _buttonsEnabled;
    id <WAMessagePaymentCollectRequestActionSliceDelegate> _delegate;
    WAMessageID *_messageID;
}

+ (Class)viewClass;
@property(nonatomic) _Bool buttonsEnabled; // @synthesize buttonsEnabled=_buttonsEnabled;
@property(readonly, nonatomic) WAMessageID *messageID; // @synthesize messageID=_messageID;
@property(nonatomic) _Bool divider; // @synthesize divider=_divider;
@property(nonatomic) __weak id <WAMessagePaymentCollectRequestActionSliceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleTransactionDidUpdateNotification:(id)arg1;
- (void)internalFitToWidth:(double)arg1;
- (void)dealloc;
- (id)initWithMessages:(id)arg1 metrics:(CDStruct_f481d0b7)arg2;

@end

