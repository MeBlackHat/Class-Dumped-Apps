//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GetObsAuditStatusResponse_AuditStatus, HTSLiveTagModel, IESEffectModel, IESLiveMTOpenLivePermissionModel, IESLiveOpenLiveModel, IESLiveOptCategoryModel, IESLiveTopicModel, NSArray, NSDictionary, NSString;
@protocol HTSKVStore;

@interface IESLiveGuideModel : NSObject
{
    _Bool _useNewStyle;
    _Bool _isPrivateAccount;
    _Bool _hasOpenLnPermission;
    _Bool _disableCakeSticker;
    _Bool _hasPlaybackAuth;
    _Bool _hasAudienceRecoredAuth;
    _Bool _landscape;
    _Bool _useNewToolbarStyle;
    unsigned long long _liveType;
    HTSLiveTagModel *_selectedTag;
    NSArray *_selectSeriesIds;
    NSString *_coverURI;
    long long _currentShareType;
    NSString *_roomTitle;
    IESLiveOpenLiveModel *_openLiveModel;
    IESLiveMTOpenLivePermissionModel *_permissionModel;
    GetObsAuditStatusResponse_AuditStatus *_auditStatusModel;
    IESEffectModel *_entryCakeSticker;
    IESEffectModel *_currentCakeSticker;
    NSString *_shootWay;
    IESLiveTopicModel *_topicModel;
    NSString *_sourceParamStr;
    IESLiveOptCategoryModel *_selectedCategory;
    IESLiveTopicModel *_gameTopicModel;
    NSString *_enterfrom;
    id <HTSKVStore> _kvStore;
    NSDictionary *_sourceParams;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *sourceParams; // @synthesize sourceParams=_sourceParams;
@property(retain, nonatomic) id <HTSKVStore> kvStore; // @synthesize kvStore=_kvStore;
@property(copy, nonatomic) NSString *enterfrom; // @synthesize enterfrom=_enterfrom;
@property(nonatomic) _Bool useNewToolbarStyle; // @synthesize useNewToolbarStyle=_useNewToolbarStyle;
@property(nonatomic) _Bool landscape; // @synthesize landscape=_landscape;
@property(retain, nonatomic) IESLiveTopicModel *gameTopicModel; // @synthesize gameTopicModel=_gameTopicModel;
@property(retain, nonatomic) IESLiveOptCategoryModel *selectedCategory; // @synthesize selectedCategory=_selectedCategory;
@property(retain, nonatomic) NSString *sourceParamStr; // @synthesize sourceParamStr=_sourceParamStr;
@property(retain, nonatomic) IESLiveTopicModel *topicModel; // @synthesize topicModel=_topicModel;
@property(nonatomic) _Bool hasAudienceRecoredAuth; // @synthesize hasAudienceRecoredAuth=_hasAudienceRecoredAuth;
@property(nonatomic) _Bool hasPlaybackAuth; // @synthesize hasPlaybackAuth=_hasPlaybackAuth;
@property(copy, nonatomic) NSString *shootWay; // @synthesize shootWay=_shootWay;
@property(nonatomic) _Bool disableCakeSticker; // @synthesize disableCakeSticker=_disableCakeSticker;
@property(retain, nonatomic) IESEffectModel *currentCakeSticker; // @synthesize currentCakeSticker=_currentCakeSticker;
@property(retain, nonatomic) IESEffectModel *entryCakeSticker; // @synthesize entryCakeSticker=_entryCakeSticker;
@property(retain, nonatomic) GetObsAuditStatusResponse_AuditStatus *auditStatusModel; // @synthesize auditStatusModel=_auditStatusModel;
@property(nonatomic) _Bool hasOpenLnPermission; // @synthesize hasOpenLnPermission=_hasOpenLnPermission;
@property(retain, nonatomic) IESLiveMTOpenLivePermissionModel *permissionModel; // @synthesize permissionModel=_permissionModel;
@property(retain, nonatomic) IESLiveOpenLiveModel *openLiveModel; // @synthesize openLiveModel=_openLiveModel;
@property(nonatomic) _Bool isPrivateAccount; // @synthesize isPrivateAccount=_isPrivateAccount;
@property(nonatomic) _Bool useNewStyle; // @synthesize useNewStyle=_useNewStyle;
@property(retain, nonatomic) NSString *roomTitle; // @synthesize roomTitle=_roomTitle;
@property(readonly, nonatomic) long long currentShareType; // @synthesize currentShareType=_currentShareType;
@property(retain, nonatomic) NSString *coverURI; // @synthesize coverURI=_coverURI;
@property(copy, nonatomic) NSArray *selectSeriesIds; // @synthesize selectSeriesIds=_selectSeriesIds;
@property(retain, nonatomic) HTSLiveTagModel *selectedTag; // @synthesize selectedTag=_selectedTag;
@property(nonatomic) unsigned long long liveType; // @synthesize liveType=_liveType;
@property(nonatomic) unsigned long long orientType;
@property(readonly, nonatomic) NSString *liveTypeStr;

@end

