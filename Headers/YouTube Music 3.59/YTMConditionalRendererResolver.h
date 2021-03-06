//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, YTMMusicAppMetadata, YTMMusicEntityCache, YTMSettings;

@interface YTMConditionalRendererResolver : NSObject
{
    YTMSettings *_settings;
    YTMMusicEntityCache *_cache;
    YTMMusicAppMetadata *_musicAppMetadata;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (_Bool)evaluateAlbumReleaseCondition:(id)arg1 withConditionVariables:(id)arg2;
- (_Bool)evaluatePlaylistCondition:(id)arg1 withConditionVariables:(id)arg2;
- (_Bool)evaluateTrackCondition:(id)arg1 withConditionVariables:(id)arg2;
- (_Bool)evaluateSettingsCondition:(id)arg1 withConditionVariables:(id)arg2;
- (_Bool)evaluateBooleanCondition:(int)arg1 value:(_Bool)arg2;
- (_Bool)evaluateAllOfCondition:(id)arg1 withConditionVariables:(id)arg2;
- (_Bool)evaluateAnyOfCondition:(id)arg1 withConditionVariables:(id)arg2;
- (_Bool)evaluateCondition:(id)arg1 withConditionVariables:(id)arg2;
- (id)init;

@end

