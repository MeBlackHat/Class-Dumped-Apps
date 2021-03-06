//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTInteractionLoggingButtonProtocol-Protocol.h>

@class GPBMessage, NSString, YTClientLoggingDirectives, YTIClientYouTubeData, YTIVisualElement;
@protocol YTInteractionLoggingButtonDelegate;

@interface YTInteractionLoggingProxyButton : NSObject <YTInteractionLoggingButtonProtocol>
{
    YTIVisualElement *_visualElement;
    _Bool _counterfactual;
    _Bool _implicitClickLogging;
    int _veCounter;
    int _elementIndex;
    int _veType;
    int _dataElementVEType;
    GPBMessage *_trackableObject;
    CDUnknownBlockType _clientDataBlock;
    id <YTInteractionLoggingButtonDelegate> _interactionLoggingDelegate;
    GPBMessage *_trackableDataElementObject;
    YTIClientYouTubeData *_youTubeData;
    YTClientLoggingDirectives *_clientLoggingDirectives;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTClientLoggingDirectives *clientLoggingDirectives; // @synthesize clientLoggingDirectives=_clientLoggingDirectives;
@property(retain, nonatomic) YTIClientYouTubeData *youTubeData; // @synthesize youTubeData=_youTubeData;
@property(retain, nonatomic) GPBMessage *trackableDataElementObject; // @synthesize trackableDataElementObject=_trackableDataElementObject;
@property(nonatomic) int dataElementVEType; // @synthesize dataElementVEType=_dataElementVEType;
@property(nonatomic) _Bool implicitClickLogging; // @synthesize implicitClickLogging=_implicitClickLogging;
@property(nonatomic, getter=isCounterfactual) _Bool counterfactual; // @synthesize counterfactual=_counterfactual;
@property(nonatomic) __weak id <YTInteractionLoggingButtonDelegate> interactionLoggingDelegate; // @synthesize interactionLoggingDelegate=_interactionLoggingDelegate;
@property(nonatomic) int veType; // @synthesize veType=_veType;
@property(nonatomic) int elementIndex; // @synthesize elementIndex=_elementIndex;
@property(nonatomic) int veCounter; // @synthesize veCounter=_veCounter;
@property(copy, nonatomic) CDUnknownBlockType clientDataBlock; // @synthesize clientDataBlock=_clientDataBlock;
@property(retain, nonatomic) GPBMessage *trackableObject; // @synthesize trackableObject=_trackableObject;
- (id)visualElement;
- (id)initWithVisualElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

