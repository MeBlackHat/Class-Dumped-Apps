//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IGFacebookReaderFunnelLogger : NSObject
{
    _Bool _isInOptOutPage;
    _Bool _isInEducationPage;
    NSString *_openingSource;
    NSString *_userID;
    NSString *_tag;
}

- (void).cxx_destruct;
- (void)markDisclosureDismissed;
- (void)markDisclosureImpressionWithType:(unsigned long long)arg1 userID:(id)arg2 tag:(id)arg3;
- (_Bool)markOptOutSettingsDismiss;
- (void)markServerDefinedEventWithAction:(id)arg1;
- (void)markOptOutSettingsImpression;
- (void)markOptOutSettingClicked;
- (void)markOptOutSettingClickedWithUserId:(id)arg1;
- (_Bool)markEducationPageDismiss;
- (void)markEducationPageLearnMoreButtonClicked;
- (void)markEducationPageShown;
- (void)markLearnMoreButtonClicked;
- (void)markMegaphoneDismissed;
- (void)markMegaphoneShownWithUserId:(id)arg1 tag:(id)arg2;
- (void)markFunnelEnd;
- (void)markFunnelStart;
- (id)init;

@end

