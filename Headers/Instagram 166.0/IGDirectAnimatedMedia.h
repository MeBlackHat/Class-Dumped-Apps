//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDirectUIMessage-Protocol.h>

@class IGDirectEmbeddedPublishedMessage, IGDirectForwardMetadata, IGDirectPowerupsMetadata, IGDirectUIMessageMetadata, IGGiphyGIFModel, NSArray, NSString;

@interface IGDirectAnimatedMedia : NSObject <IGDirectUIMessage>
{
    _Bool _isShhMode;
    _Bool _isRandom;
    IGDirectEmbeddedPublishedMessage *_quotedMessage;
    NSArray *_reactions;
    IGDirectForwardMetadata *_forwardMetadata;
    IGDirectPowerupsMetadata *_powerupsMetadata;
    IGDirectUIMessageMetadata *_metadata;
    IGGiphyGIFModel *_giphyModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isRandom; // @synthesize isRandom=_isRandom;
@property(readonly, copy, nonatomic) IGGiphyGIFModel *giphyModel; // @synthesize giphyModel=_giphyModel;
@property(readonly, copy, nonatomic) IGDirectUIMessageMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) _Bool isShhMode; // @synthesize isShhMode=_isShhMode;
@property(readonly, nonatomic) IGDirectPowerupsMetadata *powerupsMetadata; // @synthesize powerupsMetadata=_powerupsMetadata;
@property(readonly, nonatomic) IGDirectForwardMetadata *forwardMetadata; // @synthesize forwardMetadata=_forwardMetadata;
@property(readonly, nonatomic) NSArray *reactions; // @synthesize reactions=_reactions;
@property(readonly, nonatomic) IGDirectEmbeddedPublishedMessage *quotedMessage; // @synthesize quotedMessage=_quotedMessage;
- (unsigned long long)messageType;
- (id)actionSummaryProvider;
- (_Bool)hideInThread;
- (id)replyable;
- (id)messageId;
- (id)contentTypeString;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMetadata:(id)arg1 giphyModel:(id)arg2 isRandom:(_Bool)arg3 reactions:(id)arg4 forwardMetadata:(id)arg5 isShhMode:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

