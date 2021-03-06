//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mantle/MTLModel.h>

#import "MTLJSONSerializing-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSURL;

@interface RDKVideo : MTLModel <MTLJSONSerializing, NSSecureCoding>
{
    _Bool _isGIF;
    double _duration;
    NSURL *_URL;
    NSURL *_smallerURL;
    double _width;
    double _height;
    NSURL *_fallbackURL;
}

+ (_Bool)supportsSecureCoding;
+ (id)fallbackURLJSONTransformer;
+ (id)smallerURLJSONTransformer;
+ (id)URLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *fallbackURL; // @synthesize fallbackURL=_fallbackURL;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) _Bool isGIF; // @synthesize isGIF=_isGIF;
@property(copy, nonatomic) NSURL *smallerURL; // @synthesize smallerURL=_smallerURL;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

