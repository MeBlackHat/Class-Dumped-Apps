//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class AWEPStatusTemplateInfo, NSArray, NSDictionary, NSString;

@interface IESEffectModel : MTLModel <MTLJSONSerializing>
{
    _Bool _isCommerce;
    _Bool _isPoi;
    _Bool _isChecked;
    _Bool _isBuildin;
    NSString *_effectName;
    NSString *_resourceID;
    NSString *_gradeKey;
    NSString *_composerParams;
    NSString *_hintLabel;
    NSString *_sdkVersion;
    NSString *_appVersion;
    NSArray *_fileDownloadURLs;
    NSArray *_hintIconDownloadURLs;
    NSString *_hintIconURI;
    NSArray *_iconDownloadURLs;
    NSString *_fileDownloadURI;
    NSString *_iconDownlaodURI;
    NSString *_effectIdentifier;
    NSString *_sourceIdentifier;
    NSString *_md5;
    NSString *_devicePlatform;
    NSArray *_types;
    NSArray *_tags;
    NSString *_tagsUpdatedTimeStamp;
    NSString *_effectUpdateTimeStamp;
    long long _effectType;
    NSArray *_childrenIds;
    NSArray *_childrenEffects;
    NSString *_parentEffectID;
    unsigned long long _source;
    NSString *_designerId;
    NSString *_schema;
    NSArray *_algorithmRequirements;
    NSString *_extra;
    NSArray *_musicIDs;
    NSString *_poiId;
    NSString *_designerEncryptedId;
    NSString *_sdkExtra;
    NSString *_adRawData;
    NSString *_resourceId;
    NSArray *_bindIDs;
    long long _ptime;
    NSString *_cachedFilePath;
}

+ (id)modelWithIdentifier:(id)arg1 resourceURL:(id)arg2;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *cachedFilePath; // @synthesize cachedFilePath=_cachedFilePath;
@property(nonatomic) _Bool isBuildin; // @synthesize isBuildin=_isBuildin;
@property(nonatomic) _Bool isChecked; // @synthesize isChecked=_isChecked;
@property(readonly, nonatomic) long long ptime; // @synthesize ptime=_ptime;
@property(readonly, copy, nonatomic) NSArray *bindIDs; // @synthesize bindIDs=_bindIDs;
@property(readonly, copy, nonatomic) NSString *resourceId; // @synthesize resourceId=_resourceId;
@property(readonly, copy, nonatomic) NSString *adRawData; // @synthesize adRawData=_adRawData;
@property(readonly, copy, nonatomic) NSString *sdkExtra; // @synthesize sdkExtra=_sdkExtra;
@property(readonly, copy, nonatomic) NSString *designerEncryptedId; // @synthesize designerEncryptedId=_designerEncryptedId;
@property(readonly, nonatomic) _Bool isPoi; // @synthesize isPoi=_isPoi;
@property(readonly, copy, nonatomic) NSString *poiId; // @synthesize poiId=_poiId;
@property(readonly, nonatomic) _Bool isCommerce; // @synthesize isCommerce=_isCommerce;
@property(readonly, copy, nonatomic) NSArray *musicIDs; // @synthesize musicIDs=_musicIDs;
@property(readonly, copy, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(readonly, copy, nonatomic) NSArray *algorithmRequirements; // @synthesize algorithmRequirements=_algorithmRequirements;
@property(readonly, copy, nonatomic) NSString *schema; // @synthesize schema=_schema;
@property(readonly, copy, nonatomic) NSString *designerId; // @synthesize designerId=_designerId;
@property(readonly, nonatomic) unsigned long long source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *parentEffectID; // @synthesize parentEffectID=_parentEffectID;
@property(retain, nonatomic) NSArray *childrenEffects; // @synthesize childrenEffects=_childrenEffects;
@property(retain, nonatomic) NSArray *childrenIds; // @synthesize childrenIds=_childrenIds;
@property(nonatomic) long long effectType; // @synthesize effectType=_effectType;
@property(readonly, copy, nonatomic) NSString *effectUpdateTimeStamp; // @synthesize effectUpdateTimeStamp=_effectUpdateTimeStamp;
@property(readonly, nonatomic) NSString *tagsUpdatedTimeStamp; // @synthesize tagsUpdatedTimeStamp=_tagsUpdatedTimeStamp;
@property(readonly, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSArray *types; // @synthesize types=_types;
@property(readonly, copy, nonatomic) NSString *devicePlatform; // @synthesize devicePlatform=_devicePlatform;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(copy, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(copy, nonatomic) NSString *effectIdentifier; // @synthesize effectIdentifier=_effectIdentifier;
@property(copy, nonatomic) NSString *iconDownlaodURI; // @synthesize iconDownlaodURI=_iconDownlaodURI;
@property(copy, nonatomic) NSString *fileDownloadURI; // @synthesize fileDownloadURI=_fileDownloadURI;
@property(copy, nonatomic) NSArray *iconDownloadURLs; // @synthesize iconDownloadURLs=_iconDownloadURLs;
@property(readonly, copy, nonatomic) NSString *hintIconURI; // @synthesize hintIconURI=_hintIconURI;
@property(readonly, copy, nonatomic) NSArray *hintIconDownloadURLs; // @synthesize hintIconDownloadURLs=_hintIconDownloadURLs;
@property(copy, nonatomic) NSArray *fileDownloadURLs; // @synthesize fileDownloadURLs=_fileDownloadURLs;
@property(readonly, copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(readonly, copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(readonly, copy, nonatomic) NSString *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(readonly, copy, nonatomic) NSString *composerParams; // @synthesize composerParams=_composerParams;
@property(readonly, copy, nonatomic) NSString *gradeKey; // @synthesize gradeKey=_gradeKey;
@property(copy, nonatomic) NSString *resourceID; // @synthesize resourceID=_resourceID;
@property(readonly, nonatomic) NSString *effectName; // @synthesize effectName=_effectName;
- (void).cxx_destruct;
- (void)setURLPrefix:(id)arg1;
- (void)updateTypes:(id)arg1;
- (void)updateChildrenEffectsWithCollectionDictionary:(id)arg1;
- (void)updateChildrenEffectsWithCollection:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)cleanCacheNotification;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (void)dealloc;
@property(readonly, nonatomic) _Bool downloaded;
@property(readonly, copy, nonatomic) NSString *filePath;
- (id)p_filePath;
- (_Bool)showRedDotWithTag:(id)arg1;
- (void)markAsReaded;
- (_Bool)ieslive_isEffectGame;
- (_Bool)ieslive_isBlessingSticker;
- (long long)ieslive_repelValue;
- (_Bool)ieslive_needFaceDetect;
@property(nonatomic) _Bool ieslive_isVideoSticker;
@property(nonatomic) double ieslive_downloadingProgress;
@property(nonatomic) _Bool ieslive_downloading;
- (id)getStatusBackgroundPathArrWithPrefix:(id)arg1;
@property(copy, nonatomic) NSArray *statusBackgroundPathArr;
- (id)templateInfoForModel:(id)arg1;
- (id)templatePictureURLsForURLPrefix:(id)arg1;
- (id)templatePictureURLs;
- (id)templateVideoURLsForURLPrefix:(id)arg1;
- (id)templateVideoURLs;
@property(retain, nonatomic) AWEPStatusTemplateInfo *templateInfo;
@property(copy, nonatomic) NSArray *statusURLPrefix;
- (id)effectStickerInfo;
- (id)innerEffectStickerInfo;
- (void)setInnerEffectStickerInfo:(id)arg1;
- (_Bool)canUseAmazingEngine;
- (_Bool)hasCommerceEnter;
- (_Bool)isTypeAdaptive;
- (_Bool)isType2DText;
- (id)activityId;
- (_Bool)isLocked;
- (_Bool)isPreviewable;
- (id)handActionDict;
- (long long)gestureRedPacketActivityType;
- (id)gestureRedPacketHandActionArray;
- (id)challengeID;
- (_Bool)hasMakeupFeature;
- (_Bool)isTypeCameraBack;
- (_Bool)isTypeCameraZoom;
- (_Bool)isTypeCameraFront;
- (_Bool)needKeepWhenEditing;
- (_Bool)needTransferTouch;
- (_Bool)isDouyinCard;
- (_Bool)isTypeInstrument;
- (_Bool)isTypeStabilizationOff;
- (_Bool)isTypeValantineStarSticker;
- (_Bool)isStrongBeatSticker;
- (_Bool)disableBeautifyFilter;
- (_Bool)disableSmooth;
- (_Bool)disableReshape;
- (_Bool)isTypeDairy;
- (_Bool)isTypeDate;
- (_Bool)isTypeTime;
- (_Bool)isTypeWeather;
- (_Bool)isTypeTouchGes;
- (_Bool)isTypeVoiceRecognization;
- (_Bool)isTypeParticleJoint;
- (double)effectTimeLength;
- (_Bool)isTypeMusicLyric;
- (_Bool)isTypeTimeInfo;
- (_Bool)isTypeMute;
- (_Bool)isTypeRecognition;
- (_Bool)isTypeNewYear;
- (_Bool)isTypeGame2D;
- (_Bool)isTypeARKit;
- (_Bool)isTypeARMatting;
- (_Bool)isTypeAR;
@property(copy, nonatomic) NSString *localVoiceEffectTag;
@property(copy, nonatomic) NSString *localUnCompressPath;
@property(copy, nonatomic) NSString *propSelectedFrom;
@property(nonatomic) long long downloadStatus;
- (id)extraDictionary;
- (void)setExtraDictionary:(id)arg1;
@property(readonly, nonatomic) long long commerceStickerType;
@property(readonly, copy, nonatomic) NSString *commerceBuyText;
@property(readonly, copy, nonatomic) NSString *commerceOpenURL;
@property(readonly, copy, nonatomic) NSString *commerceWebURL;
- (_Bool)isVideoBGPixaloopSticker;
- (_Bool)isPixaloopSticker;
@property(readonly, copy, nonatomic) NSDictionary *pixaloopSDKExtra;
@property(readonly, copy, nonatomic) NSDictionary *pixaloopExtra;
- (id)landmarkARDictionary;
@property(copy, nonatomic) NSArray *memojiEffects;
- (void)syncMemojiEffects;
@property(retain, nonatomic) NSDictionary *effectMetaInfo;
@property(retain, nonatomic) NSDictionary *effectImage;
@property(nonatomic) _Bool isMarathonType;
- (id)getIPsFromDownloadFileURLs;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

