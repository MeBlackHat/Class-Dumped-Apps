//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mantle/MTLModel.h>

#import "MTLJSONSerializing-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface RDKPollOption : MTLModel <MTLJSONSerializing, NSSecureCoding>
{
    NSString *_identifier;
    NSString *_text;
    long long _voteCount;
}

+ (id)JSONKeyPathsByPropertyKey;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long voteCount; // @synthesize voteCount=_voteCount;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

