//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class SMAAPIAdRequest, SMAViolationReport;
@protocol SMAAPIConnectorDelegate, SMATask;

@protocol SMAAPIConnecting
@property(nonatomic) __weak id <SMAAPIConnectorDelegate> delegate;
- (id <SMATask>)taskWithViolationReport:(SMAViolationReport *)arg1 error:(id *)arg2;
- (id <SMATask>)taskWithRequest:(SMAAPIAdRequest *)arg1 error:(id *)arg2;
@end

