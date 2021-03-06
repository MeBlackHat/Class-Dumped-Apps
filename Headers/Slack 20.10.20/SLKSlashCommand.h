//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SLKSlashCommand : NSObject
{
    _Bool _isTop;
    NSString *_key;
    NSString *_name;
    NSString *_detail;
    NSString *_typeString;
    NSString *_usage;
    NSString *_aliasOf;
    unsigned long long _type;
    unsigned long long _channelType;
}

+ (id)inappcommandWithKey:(id)arg1 name:(id)arg2 detail:(id)arg3 channelType:(unsigned long long)arg4;
+ (id)inappcommandWithKey:(id)arg1 detail:(id)arg2;
+ (id)commandWithKey:(id)arg1 commandDictionary:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isTop; // @synthesize isTop=_isTop;
@property(nonatomic) unsigned long long channelType; // @synthesize channelType=_channelType;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *aliasOf; // @synthesize aliasOf=_aliasOf;
@property(retain, nonatomic) NSString *usage; // @synthesize usage=_usage;
@property(retain, nonatomic) NSString *typeString; // @synthesize typeString=_typeString;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;

@end

