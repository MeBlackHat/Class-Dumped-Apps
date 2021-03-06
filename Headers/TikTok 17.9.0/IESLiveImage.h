//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class IESLiveImageContent, NSArray, NSNumber, NSString;

@interface IESLiveImage : MTLModel <MTLJSONSerializing>
{
    _Bool _isAnimated;
    NSArray *_urlList;
    NSString *_uri;
    NSNumber *_width;
    NSNumber *_height;
    NSString *_placeholderColor;
    unsigned long long _imageType;
    NSString *_openWebURL;
    IESLiveImageContent *_content;
}

+ (id)mapImagesToPbImage:(id)arg1;
+ (id)imageWithStruct:(id)arg1;
+ (id)contentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isAnimated; // @synthesize isAnimated=_isAnimated;
@property(readonly, nonatomic) IESLiveImageContent *content; // @synthesize content=_content;
@property(readonly, nonatomic) NSString *openWebURL; // @synthesize openWebURL=_openWebURL;
@property(readonly, nonatomic) unsigned long long imageType; // @synthesize imageType=_imageType;
@property(readonly, nonatomic) NSString *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(readonly, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(readonly, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(readonly, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property(retain, nonatomic) NSArray *urlList; // @synthesize urlList=_urlList;
- (id)mapToPBImage;
- (id)initWithPBImage:(id)arg1;
- (id)initWithUrlList:(id)arg1 uri:(id)arg2 width:(id)arg3 height:(id)arg4 content:(id)arg5 imageType:(int)arg6;
- (id)initWithUrlList:(id)arg1 uri:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

