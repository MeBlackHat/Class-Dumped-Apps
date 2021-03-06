//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface CPCString : NSString
{
    unsigned short *_CString;
    unsigned long long _CStringLength;
    unsigned long long _hash;
    _Bool _hasErasedContents;
}

+ (id)stringWithString:(id)arg1;
@property(readonly, nonatomic) _Bool hasErasedContents; // @synthesize hasErasedContents=_hasErasedContents;
- (void)eraseContents;
- (id)description;
- (id)copy;
- (unsigned long long)hash;
- (unsigned long long)length;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithString:(id)arg1;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3;
- (id)initWithCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;
- (id)initWithCharactersNoCopy:(unsigned short *)arg1 length:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3;

@end

