//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEStoryColorModel, NSArray;

@interface AWEStoryColorManager : NSObject
{
    AWEStoryColorModel *_currentModel;
    long long _selectIndex;
    NSArray *_storyColors;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *storyColors; // @synthesize storyColors=_storyColors;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(retain, nonatomic) AWEStoryColorModel *currentModel; // @synthesize currentModel=_currentModel;
- (id)fontColors;
- (id)bgColors;
- (void)switchToNext;

@end

