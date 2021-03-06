//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/ZZArchiveEntry.h>

@class NSDate, NSString;

@interface ZZOldArchiveEntry : ZZArchiveEntry
{
    struct ZZCentralFileHeader *_centralFileHeader;
    struct ZZLocalFileHeader *_localFileHeader;
    unsigned long long _encoding;
    long long _encryptionMode;
}

- (id)newWriterCanSkipLocalFile:(_Bool)arg1;
- (struct CGDataProvider *)newDataProviderWithPassword:(id)arg1 error:(out id *)arg2;
- (id)newDataWithPassword:(id)arg1 error:(out id *)arg2;
- (id)newStreamWithPassword:(id)arg1 error:(out id *)arg2;
- (id)streamForData:(id)arg1 withPassword:(id)arg2 error:(out id *)arg3;
- (_Bool)checkEncryptionAndCompression:(out id *)arg1;
- (_Bool)check:(out id *)arg1;
@property(readonly, nonatomic) NSString *fileName;
@property(readonly, nonatomic) unsigned short fileMode;
@property(readonly, nonatomic) unsigned long long uncompressedSize;
@property(readonly, nonatomic) unsigned long long compressedSize;
@property(readonly, nonatomic) unsigned long long crc32;
@property(readonly, nonatomic) NSDate *lastModified;
@property(readonly, nonatomic) _Bool encrypted;
@property(readonly, nonatomic) _Bool compressed;
- (unsigned short)compressionMethod;
- (id)stringWithBytes:(char *)arg1 length:(unsigned long long)arg2;
- (id)fileData;
- (id)initWithCentralFileHeader:(struct ZZCentralFileHeader *)arg1 localFileHeader:(struct ZZLocalFileHeader *)arg2 encoding:(unsigned long long)arg3;

@end

