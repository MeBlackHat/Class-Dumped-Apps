//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSABaseXmlParser.h"

@class NSString;

@interface MSAKeyDataParser : MSABaseXmlParser
{
    NSString *_keyMaterial;
    NSString *_keyId;
}

@property(readonly) NSString *keyId; // @synthesize keyId=_keyId;
@property(readonly) NSString *keyMaterial; // @synthesize keyMaterial=_keyMaterial;
- (void).cxx_destruct;
- (void)onStartElement:(id)arg1 namespaceURI:(id)arg2 attributes:(id)arg3;

@end

