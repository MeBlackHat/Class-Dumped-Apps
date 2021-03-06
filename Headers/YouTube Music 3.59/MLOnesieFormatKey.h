//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MLOnesieFormatKey : NSObject
{
    int _itag;
    NSString *_xtags;
    unsigned long long _lmt;
}

+ (id)keyWithFormatStream:(id)arg1;
+ (id)keyWithFormat:(id)arg1;
+     // Error parsing type: @24@0:8r^{MediaHeader=^^?{InternalMetadataWithArenaLite=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}IiQqiBqq}16, name: keyWithMediaHeader:
+     // Error parsing type: @24@0:8r^{OnesieHeader=^^?{InternalMetadataWithArenaLite=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<std::__1::basic_string<char> >=^{Arena}ii^{Rep}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{OnesieHeader_PlayerResponseMetadata}^{OnesieHeader_ByteRange}QqqBqqi}16, name: keyWithOnesieHeader:
@property(readonly, nonatomic) unsigned long long lmt; // @synthesize lmt=_lmt;
@property(readonly, nonatomic) NSString *xtags; // @synthesize xtags=_xtags;
@property(readonly, nonatomic) int itag; // @synthesize itag=_itag;
- (void).cxx_destruct;
- (_Bool)isEqualToFormatKey:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isAudioFormat;
- (id)QOEDetailsString;
- (unsigned long long)hash;
- (id)initWithItag:(int)arg1 xtags:(id)arg2 lmt:(unsigned long long)arg3;

@end

