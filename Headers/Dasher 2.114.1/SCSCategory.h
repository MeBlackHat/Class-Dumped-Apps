//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ServiceKnowledge/SCSContentData-Protocol.h>

@class NSArray, NSManagedObjectID, NSString, SCDataCategoryGroupModel, SCDataCategoryModel, SCSCategoryGroup, SCSKnowledgeManager;

@interface SCSCategory : NSObject <SCSContentData>
{
    NSArray *_childCategories;
    NSString *_name;
    NSString *_label;
    NSString *_url;
    SCSCategory *_parentCategory;
    SCSCategoryGroup *_categoryGroup;
    SCSKnowledgeManager *_manager;
    NSManagedObjectID *_objectID;
    SCDataCategoryGroupModel *_categoryGroupModel;
    SCDataCategoryModel *_categoryModel;
}

@property(nonatomic) __weak SCDataCategoryModel *categoryModel; // @synthesize categoryModel=_categoryModel;
@property(nonatomic) __weak SCDataCategoryGroupModel *categoryGroupModel; // @synthesize categoryGroupModel=_categoryGroupModel;
@property(readonly, nonatomic) NSManagedObjectID *objectID; // @synthesize objectID=_objectID;
@property(nonatomic) __weak SCSKnowledgeManager *manager; // @synthesize manager=_manager;
@property(nonatomic) __weak SCSCategoryGroup *categoryGroup; // @synthesize categoryGroup=_categoryGroup;
@property(nonatomic) __weak SCSCategory *parentCategory; // @synthesize parentCategory=_parentCategory;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)resetContent;
- (void)categoryWithKnowledgeManager:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)categoryWithName:(id)arg1;
@property(readonly, nonatomic) NSArray *childCategories;
- (void)removeChildCategory:(id)arg1;
- (void)updateCategories;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithManager:(id)arg1 categoryGroupModel:(id)arg2 categoryModel:(id)arg3 categoryGroup:(id)arg4 parentCategory:(id)arg5;
@property(readonly, copy, nonatomic) NSString *contentDataId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

