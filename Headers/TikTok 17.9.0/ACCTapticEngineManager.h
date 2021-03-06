//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UINotificationFeedbackGenerator, UISelectionFeedbackGenerator;

@interface ACCTapticEngineManager : NSObject
{
    UISelectionFeedbackGenerator *_selectionFeedback;
    UINotificationFeedbackGenerator *_notificationFeedback;
}

+ (void)notifyWarning;
+ (void)notifyFailure;
+ (void)notifySuccess;
+ (void)tap;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) UINotificationFeedbackGenerator *notificationFeedback; // @synthesize notificationFeedback=_notificationFeedback;
@property(retain, nonatomic) UISelectionFeedbackGenerator *selectionFeedback; // @synthesize selectionFeedback=_selectionFeedback;

@end

