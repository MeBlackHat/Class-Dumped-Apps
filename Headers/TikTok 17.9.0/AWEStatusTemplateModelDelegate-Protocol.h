//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEStatusTemplateModel, IESEffectModel, NSError;

@protocol AWEStatusTemplateModelDelegate <NSObject>

@optional
- (void)model:(AWEStatusTemplateModel *)arg1 didFailDownloadTemplateModel:(IESEffectModel *)arg2 withError:(NSError *)arg3;
- (void)model:(AWEStatusTemplateModel *)arg1 didFinishDownloadTemplateModel:(IESEffectModel *)arg2;
- (void)model:(AWEStatusTemplateModel *)arg1 didDownloadTemplateModel:(IESEffectModel *)arg2 progress:(double)arg3;
- (void)model:(AWEStatusTemplateModel *)arg1 didStartDownloadTemplateModel:(IESEffectModel *)arg2;
@end

