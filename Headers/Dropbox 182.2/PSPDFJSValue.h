//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, PDFCJSValue;

@interface PSPDFJSValue : NSObject
{
    _Bool _boolValue;
    unsigned long long _type;
    NSString *_stringValue;
    NSNumber *_numberValue;
    PDFCJSValue *_coreJSValue;
}

@property(readonly, nonatomic) PDFCJSValue *coreJSValue; // @synthesize coreJSValue=_coreJSValue;
@property(readonly, nonatomic) NSNumber *numberValue; // @synthesize numberValue=_numberValue;
@property(readonly, nonatomic) _Bool boolValue; // @synthesize boolValue=_boolValue;
@property(readonly, copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithCoreJSValue:(id)arg1;
- (id)initWithString:(id)arg1;

@end

