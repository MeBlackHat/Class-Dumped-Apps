//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CoralModel.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface ComAmazonModelContextualgatewayService_Price : CoralModel <NSCoding, NSCopying>
{
    NSNumber *_value;
    NSString *_currency;
    NSNumber *_lowerValue;
    NSNumber *_higherValue;
    NSString *_displayString;
}

+ (id)type;
@property(copy, nonatomic) NSString *displayString; // @synthesize displayString=_displayString;
@property(retain, nonatomic) NSNumber *higherValue; // @synthesize higherValue=_higherValue;
@property(retain, nonatomic) NSNumber *lowerValue; // @synthesize lowerValue=_lowerValue;
@property(copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(retain, nonatomic) NSNumber *value; // @synthesize value=_value;
- (void).cxx_destruct;

@end

