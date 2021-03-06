//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/IGSimpleTrackableObject-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>

@class IGContentWarningModel, IGDate, IGUser, NSArray, NSString;
@protocol IGCommentModelUpdateListenerAnnouncer, NSObject;

@interface IGCommentModel : NSObject <NSCoding, IGListDiffable, IGSimpleTrackableObject>
{
    id <NSObject> _diffIdentifier;
    _Bool _wasMarkedAsSpam;
    _Bool _didReportAsSpam;
    _Bool _hasLiked;
    _Bool _hasTranslation;
    _Bool _showTranslation;
    _Bool _canShowInlineComposer;
    _Bool _isNew;
    _Bool _isSelected;
    NSString *_pk;
    NSString *_text;
    IGDate *_createdAt;
    NSString *_idempotenceToken;
    IGUser *_user;
    long long _type;
    long long _postedState;
    long long _likeCount;
    NSString *_failureReason;
    NSString *_commentPostError;
    unsigned long long _mitigationAction;
    NSArray *_violatingUsers;
    NSString *_parentCommentPK;
    NSString *_replyToCommentPK;
    long long _childCommentCount;
    NSString *_translation;
    long long _translationState;
    id <IGCommentModelUpdateListenerAnnouncer> _commentUpdateAnnouncer;
    long long _inlineComposerDisplayCondition;
    NSString *_commentIndexString;
    IGContentWarningModel *_contentWarningModel;
    long long _restrictStatus;
    NSArray *_productMentions;
}

+ (id)lessTokenStringWithConfiguration:(id)arg1;
+ (id)moreTruncationTokenStringWithConfiguration:(id)arg1;
+ (id)defaultTruncationTokenStringWithConfiguration:(id)arg1;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(readonly, nonatomic) NSArray *productMentions; // @synthesize productMentions=_productMentions;
@property(readonly, nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(nonatomic) long long restrictStatus; // @synthesize restrictStatus=_restrictStatus;
@property(retain, nonatomic) IGContentWarningModel *contentWarningModel; // @synthesize contentWarningModel=_contentWarningModel;
@property(readonly, copy, nonatomic) NSString *commentIndexString; // @synthesize commentIndexString=_commentIndexString;
@property(nonatomic) _Bool canShowInlineComposer; // @synthesize canShowInlineComposer=_canShowInlineComposer;
@property(nonatomic) long long inlineComposerDisplayCondition; // @synthesize inlineComposerDisplayCondition=_inlineComposerDisplayCondition;
@property(retain, nonatomic) id <IGCommentModelUpdateListenerAnnouncer> commentUpdateAnnouncer; // @synthesize commentUpdateAnnouncer=_commentUpdateAnnouncer;
@property(nonatomic) long long translationState; // @synthesize translationState=_translationState;
@property(copy, nonatomic) NSString *translation; // @synthesize translation=_translation;
@property(nonatomic) _Bool showTranslation; // @synthesize showTranslation=_showTranslation;
@property(readonly, nonatomic) _Bool hasTranslation; // @synthesize hasTranslation=_hasTranslation;
@property(nonatomic) long long childCommentCount; // @synthesize childCommentCount=_childCommentCount;
@property(copy, nonatomic) NSString *replyToCommentPK; // @synthesize replyToCommentPK=_replyToCommentPK;
@property(copy, nonatomic) NSString *parentCommentPK; // @synthesize parentCommentPK=_parentCommentPK;
@property(copy, nonatomic) NSArray *violatingUsers; // @synthesize violatingUsers=_violatingUsers;
@property(nonatomic) unsigned long long mitigationAction; // @synthesize mitigationAction=_mitigationAction;
@property(copy, nonatomic) NSString *commentPostError; // @synthesize commentPostError=_commentPostError;
@property(copy, nonatomic) NSString *failureReason; // @synthesize failureReason=_failureReason;
@property(nonatomic) _Bool hasLiked; // @synthesize hasLiked=_hasLiked;
@property(nonatomic) long long likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) _Bool didReportAsSpam; // @synthesize didReportAsSpam=_didReportAsSpam;
@property(nonatomic) long long postedState; // @synthesize postedState=_postedState;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) IGUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) NSString *idempotenceToken; // @synthesize idempotenceToken=_idempotenceToken;
@property(readonly, nonatomic) _Bool wasMarkedAsSpam; // @synthesize wasMarkedAsSpam=_wasMarkedAsSpam;
@property(readonly, nonatomic) IGDate *createdAt; // @synthesize createdAt=_createdAt;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (void).cxx_destruct;
- (long long)_restrictStatusForInteger:(long long)arg1;
- (long long)_inlineComposerDisplayConditionForString:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPK:(id)arg1;
- (id)initWithText:(id)arg1 user:(id)arg2 productMentions:(id)arg3;
- (id)initWithText:(id)arg1 user:(id)arg2 createdAt:(id)arg3;
- (id)initWithText:(id)arg1 user:(id)arg2;
- (id)initWithText:(id)arg1 parentCommentPK:(id)arg2 replyToCommentPK:(id)arg3 user:(id)arg4;
- (id)initWithDictionary:(id)arg1 userStore:(id)arg2;
- (id)_productMentionEntities;
- (id)_stringWithCollapsedEmptyLines:(id)arg1;
- (id)styledStringForWidth:(double)arg1 maximumUntruncatedNumberOfLines:(long long)arg2 truncateToNumberOfLines:(long long)arg3 truncationToken:(id)arg4 isExpanded:(_Bool)arg5 configuration:(id)arg6;
- (id)timestampAndEditedStringWithCaptionIsEdited:(_Bool)arg1 useFeedItemFormat:(_Bool)arg2 isAccessibilityLabel:(_Bool)arg3;
- (_Bool)_supportVerifiedBadgeWithConfiguration:(id)arg1;
- (id)buildStyledStringWithNewline:(_Bool)arg1 width:(double)arg2 maximumUntruncatedNumberOfLines:(long long)arg3 truncatedToNumberOfLines:(long long)arg4 truncationToken:(id)arg5 configuration:(id)arg6;
- (id)buildStyledStringWithNewline:(_Bool)arg1 width:(double)arg2 numberOfLines:(long long)arg3 truncationToken:(id)arg4 configuration:(id)arg5;
- (id)buildStyledStringWithNewline:(_Bool)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

