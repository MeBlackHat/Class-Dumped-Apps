//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGTVSurveyCell;

@protocol IGTVSurveyCellDelegate <NSObject>
- (void)tvSurveyCellPressEnded:(IGTVSurveyCell *)arg1;
- (void)tvSurveyCellPressBegan:(IGTVSurveyCell *)arg1;
- (void)tvSurveyCellDidRespond:(IGTVSurveyCell *)arg1 buttonValue:(unsigned long long)arg2;
@end

