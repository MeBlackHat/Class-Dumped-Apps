//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/CMRCoreViewModel.h>

@interface CMRFloorPlanListViewModel : CMRCoreViewModel
{
    struct Handle<std::__1::shared_ptr<core::FloorPlanListViewModel>, std::__1::shared_ptr<core::FloorPlanListViewModel>> _cppRefHandle;
}

+ (id)getTypeName;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)saveState;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (id)getType;
- (id)legacyPersistentMapIdentifier;
- (int)mapCustomizationLearningPercentage;
- (id)mapCustomizationVersion;
- (id)mapCustomizationId;
- (void)mapPrivacyPressed;
- (void)ignoreWarning;
- (void)heedWarning;
- (void)menuCancelPressed;
- (void)menuItemPressed:(int)arg1;
- (void)accessContextMenuPressed;
- (void)selectFloorPlanOptions:(int)arg1 itemIndex:(int)arg2;
- (void)selectFloorPlan:(int)arg1 itemIndex:(int)arg2;
- (void)finishIntro;
- (void)load;
- (id)currentState;
- (const shared_ptr_0bb61972 *)cppRef;
- (id)initWithCpp:(const shared_ptr_0bb61972 *)arg1;

@end

